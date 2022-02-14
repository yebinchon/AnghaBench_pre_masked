
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ta_header {scalar_t__ canary; TYPE_1__* leak_prev; TYPE_2__* leak_next; } ;
struct TYPE_4__ {TYPE_1__* leak_prev; } ;
struct TYPE_3__ {TYPE_2__* leak_next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ta_header*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ta_header *VAR_1)
{
    FUNC_2(VAR_1);
    if (VAR_1->leak_next) {
        FUNC_0(&VAR_0);
        VAR_1->leak_next->leak_prev = VAR_1->leak_prev;
        VAR_1->leak_prev->leak_next = VAR_1->leak_next;
        FUNC_1(&VAR_0);
        VAR_1->leak_next = VAR_1->leak_prev = ((void*)0);
    }
    VAR_1->canary = 0;
}
