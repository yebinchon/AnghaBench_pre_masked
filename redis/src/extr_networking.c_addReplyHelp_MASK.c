
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sds ;
struct TYPE_9__ {TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_8__ {scalar_t__ ptr; } ;


 void* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,void*,int) ;

void FUNC_7(client *VAR_0, const char **VAR_1) {
    sds VAR_2 = FUNC_4((char*) VAR_0->argv[0]->ptr);
    void *VAR_3 = FUNC_0(VAR_0);
    int VAR_4 = 0;

    FUNC_5(VAR_2);
    FUNC_2(VAR_0,
        "%s <subcommand> arg arg ... arg. Subcommands are:",VAR_2);
    FUNC_3(VAR_2);

    while (VAR_1[VAR_4]) FUNC_1(VAR_0,VAR_1[VAR_4++]);

    VAR_4++;
    FUNC_6(VAR_0,VAR_3,VAR_4);
}
