
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int change_context; } ;
typedef int ReorderBufferChange ;
typedef TYPE_1__ ReorderBuffer ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int) ;

ReorderBufferChange *
FUNC_2(ReorderBuffer *VAR_0)
{
 ReorderBufferChange *VAR_1;

 VAR_1 = (ReorderBufferChange *)
  FUNC_0(VAR_0->change_context, sizeof(ReorderBufferChange));

 FUNC_1(VAR_1, 0, sizeof(ReorderBufferChange));
 return VAR_1;
}
