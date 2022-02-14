
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ keepSizeAfter; scalar_t__ streamPos; scalar_t__ pos; scalar_t__ streamEndWasReached; } ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(CMatchFinder *VAR_0)
{
  if (VAR_0->streamEndWasReached)
    return;
  if (VAR_0->keepSizeAfter >= VAR_0->streamPos - VAR_0->pos)
    FUNC_0(VAR_0);
}
