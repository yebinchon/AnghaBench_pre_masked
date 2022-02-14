
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; void* next; } ;
typedef TYPE_1__ LINK ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void **VAR_0)
{
    LINK *VAR_1;

    while (*VAR_0) {
 VAR_1 = (LINK *) * VAR_0;
 *VAR_0 = VAR_1->next;

 FUNC_0(VAR_1->data);
 FUNC_0(VAR_1);




    }
}
