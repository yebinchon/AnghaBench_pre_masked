
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
struct v4l2_requestbuffers {int count; int index; TYPE_1__ m; int length; int memory; int type; } ;
struct v4l2_mmap_info {int dummy; } ;
struct v4l2_buffer_data {int count; TYPE_2__* info; } ;
struct v4l2_buffer {int count; int index; TYPE_1__ m; int length; int memory; int type; } ;
typedef int req ;
typedef int map ;
typedef int int_fast32_t ;
struct TYPE_4__ {scalar_t__ start; int length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (struct v4l2_requestbuffers*,int ,int) ;
 scalar_t__ FUNC_3 (int,int ,struct v4l2_requestbuffers*) ;
 scalar_t__ FUNC_4 (int *,int ,int,int ,int,int ) ;

int_fast32_t FUNC_5(int_fast32_t VAR_9, struct v4l2_buffer_data *VAR_10)
{
 struct v4l2_requestbuffers VAR_11;
 struct v4l2_buffer VAR_12;

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.count = 4;
 VAR_11.type = VAR_5;
 VAR_11.memory = VAR_6;

 if (FUNC_3(VAR_9, VAR_8, &VAR_11) < 0) {
  FUNC_0(VAR_0, "Request for buffers failed !");
  return -1;
 }

 if (VAR_11.count < 2) {
  FUNC_0(VAR_0, "Device returned less than 2 buffers");
  return -1;
 }

 VAR_10->count = VAR_11.count;
 VAR_10->info = FUNC_1(VAR_11.count * sizeof(struct v4l2_mmap_info));

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.type = VAR_11.type;
 VAR_12.memory = VAR_11.memory;

 for (VAR_12.index = 0; VAR_12.index < VAR_11.count; ++VAR_12.index) {
  if (FUNC_3(VAR_9, VAR_7, &VAR_12) < 0) {
   FUNC_0(VAR_0, "Failed to query buffer details");
   return -1;
  }

  VAR_10->info[VAR_12.index].length = VAR_12.length;
  VAR_10->info[VAR_12.index].start =
   FUNC_4(((void*)0), VAR_12.length, VAR_3 | VAR_4,
      VAR_2, VAR_9, VAR_12.m.offset);

  if (VAR_10->info[VAR_12.index].start == VAR_1) {
   FUNC_0(VAR_0, "mmap for buffer failed");
   return -1;
  }
 }

 return 0;
}
