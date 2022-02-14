
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int alen; TYPE_1__** active; } ;
typedef TYPE_2__ fz_gel ;
typedef int fz_context ;
struct TYPE_5__ {int x; scalar_t__ ydir; } ;


 int FUNC_0 (int *,TYPE_2__*,int*,int,int,int,int) ;

__attribute__((used)) static inline void
FUNC_1(fz_context *VAR_0, fz_gel *VAR_1, int *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1->alen; VAR_7++)
 {
  if (!VAR_5 && (VAR_5 + VAR_1->active[VAR_7]->ydir))
   VAR_6 = VAR_1->active[VAR_7]->x;
  if (VAR_5 && !(VAR_5 + VAR_1->active[VAR_7]->ydir))
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6, VAR_1->active[VAR_7]->x, VAR_3, VAR_4);
  VAR_5 += VAR_1->active[VAR_7]->ydir;
 }
}
