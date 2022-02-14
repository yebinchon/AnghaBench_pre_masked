
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct coreaudio_data {TYPE_3__* buf_list; int device_id; int unit; } ;
typedef int frames ;
typedef size_t UInt32 ;
struct TYPE_9__ {size_t mNumberBuffers; TYPE_1__* mBuffers; } ;
struct TYPE_8__ {int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {size_t mDataByteSize; void* mData; } ;
typedef int OSStatus ;
typedef TYPE_2__ AudioObjectPropertyAddress ;


 int FUNC_0 (int ,TYPE_2__*,int ,int *,size_t*,TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int *,size_t*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ,struct coreaudio_data*,char*,char*) ;
 int FUNC_5 (int ,int ,int ,int ,size_t*,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_6(struct coreaudio_data *VAR_5)
{
 UInt32 VAR_6 = 0;
 UInt32 VAR_7 = 0;
 UInt32 VAR_8 = 0;
 OSStatus VAR_9;

 AudioObjectPropertyAddress VAR_10 = {
  VAR_3,
  VAR_2,
  VAR_4};

 VAR_9 = FUNC_1(VAR_5->device_id, &VAR_10, 0, ((void*)0),
           &VAR_6);
 if (!FUNC_4(VAR_9, VAR_5, "coreaudio_init_buffer", "get list size"))
  return 0;

 VAR_7 = sizeof(VAR_8);
 VAR_9 = FUNC_5(VAR_5->unit, VAR_1,
       VAR_0, 0, &VAR_8, &VAR_7);
 if (!FUNC_4(VAR_9, VAR_5, "coreaudio_init_buffer", "get frame size"))
  return 0;



 VAR_5->buf_list = FUNC_3(VAR_6);

 VAR_9 = FUNC_0(VAR_5->device_id, &VAR_10, 0, ((void*)0),
       &VAR_6, VAR_5->buf_list);
 if (!FUNC_4(VAR_9, VAR_5, "coreaudio_init_buffer", "allocate")) {
  FUNC_2(VAR_5->buf_list);
  VAR_5->buf_list = ((void*)0);
  return 0;
 }

 for (UInt32 VAR_11 = 0; VAR_11 < VAR_5->buf_list->mNumberBuffers; VAR_11++) {
  VAR_7 = VAR_5->buf_list->mBuffers[VAR_11].mDataByteSize;
  VAR_5->buf_list->mBuffers[VAR_11].mData = FUNC_3(VAR_7);
 }

 return 1;
}
