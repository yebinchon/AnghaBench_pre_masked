
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {int expire_event_source; void* expire_tokens; void* tokens; int where; } ;
typedef TYPE_1__ Automount ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(Unit *VAR_0) {
        Automount *VAR_1 = FUNC_0(VAR_0);

        FUNC_1(VAR_1);

        FUNC_5(VAR_1);

        VAR_1->where = FUNC_2(VAR_1->where);

        VAR_1->tokens = FUNC_4(VAR_1->tokens);
        VAR_1->expire_tokens = FUNC_4(VAR_1->expire_tokens);

        VAR_1->expire_event_source = FUNC_3(VAR_1->expire_event_source);
}
