
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sds ;
struct TYPE_6__ {TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_5__ {scalar_t__ ptr; } ;


 int FUNC_0 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

void FUNC_4(client *VAR_0) {
    sds VAR_1 = FUNC_2((char*) VAR_0->argv[0]->ptr);
    FUNC_3(VAR_1);
    FUNC_0(VAR_0,
        "Unknown subcommand or wrong number of arguments for '%s'. Try %s HELP.",
        (char*)VAR_0->argv[1]->ptr,VAR_1);
    FUNC_1(VAR_1);
}
