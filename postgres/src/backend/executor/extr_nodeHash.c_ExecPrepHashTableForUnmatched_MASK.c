
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hj_CurTuple; scalar_t__ hj_CurSkewBucketNo; scalar_t__ hj_CurBucketNo; } ;
typedef TYPE_1__ HashJoinState ;



void
FUNC_0(HashJoinState *VAR_0)
{
 VAR_0->hj_CurBucketNo = 0;
 VAR_0->hj_CurSkewBucketNo = 0;
 VAR_0->hj_CurTuple = ((void*)0);
}
