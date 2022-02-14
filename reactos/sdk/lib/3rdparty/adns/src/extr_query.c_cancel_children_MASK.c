
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* adns_query ;
struct TYPE_7__ {TYPE_3__* next; } ;
struct TYPE_6__ {TYPE_3__* head; } ;
struct TYPE_8__ {TYPE_2__ siblings; TYPE_1__ children; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(adns_query VAR_0) {
  adns_query VAR_1, VAR_2;

  for (VAR_1= VAR_0->children.head; VAR_1; VAR_1= VAR_2) {
    VAR_2= VAR_1->siblings.next;
    FUNC_0(VAR_1);
  }
}
