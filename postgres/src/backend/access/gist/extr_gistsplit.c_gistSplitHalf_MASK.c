
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* spl_left; int* spl_right; scalar_t__ spl_nleft; scalar_t__ spl_nright; } ;
typedef int OffsetNumber ;
typedef TYPE_1__ GIST_SPLITVEC ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(GIST_SPLITVEC *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_0->spl_nright = VAR_0->spl_nleft = 0;
 VAR_0->spl_left = (OffsetNumber *) FUNC_0(VAR_1 * sizeof(OffsetNumber));
 VAR_0->spl_right = (OffsetNumber *) FUNC_0(VAR_1 * sizeof(OffsetNumber));
 for (VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++)
  if (VAR_2 < VAR_1 / 2)
   VAR_0->spl_right[VAR_0->spl_nright++] = VAR_2;
  else
   VAR_0->spl_left[VAR_0->spl_nleft++] = VAR_2;


}
