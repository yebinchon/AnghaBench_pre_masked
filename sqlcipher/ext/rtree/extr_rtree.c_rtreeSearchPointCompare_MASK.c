
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rScore; scalar_t__ iLevel; } ;
typedef TYPE_1__ RtreeSearchPoint ;



__attribute__((used)) static int FUNC_0(
  const RtreeSearchPoint *VAR_0,
  const RtreeSearchPoint *VAR_1
){
  if( VAR_0->rScore<VAR_1->rScore ) return -1;
  if( VAR_0->rScore>VAR_1->rScore ) return +1;
  if( VAR_0->iLevel<VAR_1->iLevel ) return -1;
  if( VAR_0->iLevel>VAR_1->iLevel ) return +1;
  return 0;
}
