
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sourceState; scalar_t__ colorTrgm; scalar_t__ targetState; } ;
typedef TYPE_1__ TrgmPackArcInfo ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const TrgmPackArcInfo *VAR_2 = (const TrgmPackArcInfo *) VAR_0;
 const TrgmPackArcInfo *VAR_3 = (const TrgmPackArcInfo *) VAR_1;

 if (VAR_2->sourceState < VAR_3->sourceState)
  return -1;
 if (VAR_2->sourceState > VAR_3->sourceState)
  return 1;
 if (VAR_2->colorTrgm < VAR_3->colorTrgm)
  return -1;
 if (VAR_2->colorTrgm > VAR_3->colorTrgm)
  return 1;
 if (VAR_2->targetState < VAR_3->targetState)
  return -1;
 if (VAR_2->targetState > VAR_3->targetState)
  return 1;
 return 0;
}
