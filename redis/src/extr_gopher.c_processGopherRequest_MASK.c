
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_12__ {scalar_t__ argc; int db; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,char*,char*,int *,int *,int ) ;
 TYPE_1__* FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;

void FUNC_5(client *VAR_1) {
    robj *VAR_2 = VAR_1->argc == 0 ? FUNC_2("/",1) : VAR_1->argv[0];
    robj *VAR_3 = FUNC_4(VAR_1->db,VAR_2);


    if (VAR_3 == ((void*)0) || VAR_3->type != VAR_0) {
        char *VAR_4;
        if (VAR_3 == ((void*)0))
            VAR_4 = "Error: no content at the specified key";
        else
            VAR_4 = "Error: selected key type is invalid "
                     "for Gopher output";
        FUNC_1(VAR_1,"i",VAR_4,((void*)0),((void*)0),0);
        FUNC_1(VAR_1,"i","Redis Gopher server",((void*)0),((void*)0),0);
    } else {
        FUNC_0(VAR_1,VAR_3);
    }





    if (VAR_1->argc == 0) FUNC_3(VAR_2);
}
