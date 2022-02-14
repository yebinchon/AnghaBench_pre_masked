
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ relNode; scalar_t__ dbNode; scalar_t__ spcNode; } ;
typedef TYPE_1__ RelFileNode ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 RelFileNode VAR_2 = *(const RelFileNode *) VAR_0;
 RelFileNode VAR_3 = *(const RelFileNode *) VAR_1;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;
 else
  return 0;
}
