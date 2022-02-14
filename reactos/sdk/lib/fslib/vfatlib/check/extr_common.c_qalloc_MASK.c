
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* data; void* next; } ;
typedef TYPE_1__ LINK ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;

void *FUNC_2(void **VAR_0, int VAR_1)
{
    LINK *VAR_2;


    VAR_2 = FUNC_0(sizeof(LINK));



    VAR_2->next = *VAR_0;
    *VAR_0 = VAR_2;

    return VAR_2->data = FUNC_0(VAR_1);



}
