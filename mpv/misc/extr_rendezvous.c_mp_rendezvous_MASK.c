
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiter {void* tag; intptr_t* value; struct waiter* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct waiter* VAR_1 ;
 int VAR_2 ;

intptr_t FUNC_4(void *VAR_3, intptr_t VAR_4)
{
    struct waiter VAR_5 = { .tag = VAR_3, .value = &VAR_4 };
    FUNC_2(&VAR_0);
    struct waiter **VAR_6 = &VAR_1;
    while (*VAR_6) {
        if ((*VAR_6)->tag == VAR_3) {
            intptr_t VAR_7 = *(*VAR_6)->value;
            *(*VAR_6)->value = VAR_4;
            VAR_4 = VAR_7;
            (*VAR_6)->value = ((void*)0);
            *VAR_6 = (*VAR_6)->next;
            FUNC_0(&VAR_2);
            goto done;
        }
        VAR_6 = &(*VAR_6)->next;
    }
    *VAR_6 = &VAR_5;
    while (VAR_5.value)
        FUNC_1(&VAR_2, &VAR_0);
done:
    FUNC_3(&VAR_0);
    return VAR_4;
}
