
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_pcb {struct udp_pcb* next; } ;
struct TYPE_4__ {TYPE_1__* memp; } ;
struct TYPE_3__ {scalar_t__ used; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;
 struct udp_pcb* VAR_2 ;
 int FUNC_1 (struct udp_pcb*) ;

__attribute__((used)) static void
FUNC_2(void)
{
  struct udp_pcb *VAR_3 = VAR_2;
  struct udp_pcb *VAR_4;

  while(VAR_3 != ((void*)0)) {
    VAR_4 = VAR_3;
    VAR_3 = VAR_3->next;
    FUNC_1(VAR_4);
  }
  FUNC_0(VAR_1.memp[VAR_0].used == 0);
}
