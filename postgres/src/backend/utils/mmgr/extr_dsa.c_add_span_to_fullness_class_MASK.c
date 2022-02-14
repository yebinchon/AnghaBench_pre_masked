
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* dsa_pointer ;
struct TYPE_4__ {int fclass; void* nextspan; void* prevspan; void* pool; } ;
typedef TYPE_1__ dsa_area_span ;
struct TYPE_5__ {void** spans; } ;
typedef TYPE_2__ dsa_area_pool ;
typedef int dsa_area ;


 scalar_t__ FUNC_0 (void*) ;
 void* VAR_0 ;
 void* FUNC_1 (int *,void*) ;

__attribute__((used)) static void
FUNC_2(dsa_area *VAR_1, dsa_area_span *VAR_2,
         dsa_pointer VAR_3,
         int VAR_4)
{
 dsa_area_pool *VAR_5 = FUNC_1(VAR_1, VAR_2->pool);

 if (FUNC_0(VAR_5->spans[VAR_4]))
 {
  dsa_area_span *VAR_6 = FUNC_1(VAR_1,
             VAR_5->spans[VAR_4]);

  VAR_6->prevspan = VAR_3;
 }
 VAR_2->prevspan = VAR_0;
 VAR_2->nextspan = VAR_5->spans[VAR_4];
 VAR_5->spans[VAR_4] = VAR_3;
 VAR_2->fclass = VAR_4;
}
