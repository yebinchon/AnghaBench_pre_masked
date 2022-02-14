
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ allocnode ;
typedef TYPE_2__* adns_query ;
struct TYPE_9__ {TYPE_1__* head; } ;
struct TYPE_8__ {TYPE_1__* query_dgram; int search_vb; int vb; TYPE_6__ allocations; } ;


 int FUNC_0 (TYPE_6__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(adns_query VAR_0) {
  allocnode *VAR_1, *VAR_2;

  FUNC_2(VAR_0);
  for (VAR_1= VAR_0->allocations.head; VAR_1; VAR_1= VAR_2) { VAR_2= VAR_1->next; FUNC_3(VAR_1); }
  FUNC_0(VAR_0->allocations);
  FUNC_1(&VAR_0->vb);
  FUNC_1(&VAR_0->search_vb);
  FUNC_3(VAR_0->query_dgram);
  VAR_0->query_dgram= 0;
}
