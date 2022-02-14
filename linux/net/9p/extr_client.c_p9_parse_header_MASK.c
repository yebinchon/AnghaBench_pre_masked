
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fcall {int offset; int size; int tag; int id; } ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (struct p9_fcall*,int ,char*,int*,int *,int *) ;

int
FUNC_2(struct p9_fcall *VAR_2, int32_t *VAR_3, int8_t *VAR_4, int16_t *VAR_5,
        int VAR_6)
{
 int8_t VAR_7;
 int16_t VAR_8;
 int32_t VAR_9;
 int VAR_10 = VAR_2->offset;
 int VAR_11;

 VAR_2->offset = 0;

 VAR_11 = FUNC_1(VAR_2, 0, "dbw", &VAR_9, &VAR_7, &VAR_8);
 if (VAR_11)
  goto rewind_and_exit;

 if (VAR_4)
  *VAR_4 = VAR_7;
 if (VAR_5)
  *VAR_5 = VAR_8;
 if (VAR_3)
  *VAR_3 = VAR_9;

 if (VAR_2->size != VAR_9 || VAR_9 < 7) {
  VAR_11 = -VAR_0;
  goto rewind_and_exit;
 }

 VAR_2->id = VAR_7;
 VAR_2->tag = VAR_8;

 FUNC_0(VAR_1, "<<< size=%d type: %d tag: %d\n",
   VAR_2->size, VAR_2->id, VAR_2->tag);

rewind_and_exit:
 if (VAR_6)
  VAR_2->offset = VAR_10;
 return VAR_11;
}
