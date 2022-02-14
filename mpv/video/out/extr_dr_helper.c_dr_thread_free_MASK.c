
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct free_dr_context {int ref; TYPE_1__* dr; } ;
struct TYPE_2__ {int dr_in_flight; } ;


 int FUNC_0 (unsigned long long) ;
 unsigned long long FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct free_dr_context*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
    struct free_dr_context *VAR_1 = VAR_0;

    unsigned long long VAR_2 = FUNC_1(&VAR_1->dr->dr_in_flight, -1);
    FUNC_0(VAR_2);

    FUNC_2(&VAR_1->ref);
    FUNC_3(VAR_1);
}
