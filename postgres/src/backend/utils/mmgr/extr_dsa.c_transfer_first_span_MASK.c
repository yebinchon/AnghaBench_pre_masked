
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* dsa_pointer ;
struct TYPE_5__ {void* nextspan; int fclass; void* prevspan; } ;
typedef TYPE_1__ dsa_area_span ;
struct TYPE_6__ {void** spans; } ;
typedef TYPE_2__ dsa_area_pool ;
typedef int dsa_area ;


 scalar_t__ FUNC_0 (void*) ;
 void* VAR_0 ;
 TYPE_1__* FUNC_1 (int *,void*) ;

__attribute__((used)) static bool
FUNC_2(dsa_area *VAR_1,
     dsa_area_pool *VAR_2, int VAR_3, int VAR_4)
{
 dsa_pointer VAR_5;
 dsa_area_span *VAR_6;
 dsa_area_span *VAR_7;


 VAR_5 = VAR_2->spans[VAR_3];
 if (!FUNC_0(VAR_5))
  return 0;


 VAR_6 = FUNC_1(VAR_1, VAR_5);
 VAR_2->spans[VAR_3] = VAR_6->nextspan;
 if (FUNC_0(VAR_6->nextspan))
 {
  VAR_7 = (dsa_area_span *)
   FUNC_1(VAR_1, VAR_6->nextspan);
  VAR_7->prevspan = VAR_0;
 }


 VAR_6->nextspan = VAR_2->spans[VAR_4];
 VAR_2->spans[VAR_4] = VAR_5;
 if (FUNC_0(VAR_6->nextspan))
 {
  VAR_7 = (dsa_area_span *)
   FUNC_1(VAR_1, VAR_6->nextspan);
  VAR_7->prevspan = VAR_5;
 }
 VAR_6->fclass = VAR_4;

 return 1;
}
