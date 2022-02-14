
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
typedef int allocnode ;
typedef TYPE_1__* adns_query ;
struct TYPE_4__ {size_t interim_allocd; scalar_t__ expires; int allocations; int final_allocspace; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int) ;

void FUNC_4(adns_query VAR_0, adns_query VAR_1, void *VAR_2, size_t VAR_3) {
  allocnode *VAR_4;

  if (!VAR_2) return;
  VAR_4= (void*)((byte*)VAR_2 - FUNC_2(sizeof(*VAR_4)));

  FUNC_3(!VAR_1->final_allocspace);
  FUNC_3(!VAR_0->final_allocspace);

  FUNC_1(VAR_0->allocations,VAR_4);
  FUNC_0(VAR_1->allocations,VAR_4);

  VAR_3= FUNC_2(VAR_3);
  VAR_0->interim_allocd -= VAR_3;
  VAR_1->interim_allocd += VAR_3;

  if (VAR_1->expires > VAR_0->expires) VAR_1->expires= VAR_0->expires;
}
