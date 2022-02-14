
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* processor ) (char const*,VAR_0,char const*,void*) ;size_t rechecks; int name; } ;
typedef TYPE_1__ ARL_BASE ;


 void FUNC_0 (char const*,VAR_1,char const*,void*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;

ARL_BASE *FUNC_3(const char *VAR_2, void (*VAR_3)(const char *, VAR_4, const char *, void *), size_t VAR_5) {
    ARL_BASE *VAR_6 = FUNC_1(1, sizeof(ARL_BASE));

    VAR_6->name = FUNC_2(VAR_2);

    if(!VAR_3)
        VAR_6->processor = FUNC_0;
    else
        VAR_6->processor = VAR_3;

    VAR_6->rechecks = VAR_5;

    return VAR_6;
}
