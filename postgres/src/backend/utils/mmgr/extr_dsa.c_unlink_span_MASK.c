
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t fclass; int nextspan; int pool; int prevspan; } ;
typedef TYPE_1__ dsa_area_span ;
struct TYPE_5__ {int * spans; } ;
typedef TYPE_2__ dsa_area_pool ;
typedef int dsa_area ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(dsa_area *VAR_0, dsa_area_span *VAR_1)
{
 if (FUNC_0(VAR_1->nextspan))
 {
  dsa_area_span *VAR_2 = FUNC_1(VAR_0, VAR_1->nextspan);

  VAR_2->prevspan = VAR_1->prevspan;
 }
 if (FUNC_0(VAR_1->prevspan))
 {
  dsa_area_span *VAR_3 = FUNC_1(VAR_0, VAR_1->prevspan);

  VAR_3->nextspan = VAR_1->nextspan;
 }
 else
 {
  dsa_area_pool *VAR_4 = FUNC_1(VAR_0, VAR_1->pool);

  VAR_4->spans[VAR_1->fclass] = VAR_1->nextspan;
 }
}
