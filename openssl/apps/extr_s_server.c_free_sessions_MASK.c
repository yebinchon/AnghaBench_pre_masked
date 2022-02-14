
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* der; struct TYPE_4__* id; } ;
typedef TYPE_1__ simple_ssl_session ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    simple_ssl_session *VAR_1, *VAR_2;
    for (VAR_1 = VAR_0; VAR_1;) {
        FUNC_0(VAR_1->id);
        FUNC_0(VAR_1->der);
        VAR_2 = VAR_1;
        VAR_1 = VAR_1->next;
        FUNC_0(VAR_2);
    }
    VAR_0 = ((void*)0);
}
