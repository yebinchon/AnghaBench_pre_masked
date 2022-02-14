
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int argc; int ** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int syntaxerr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int **,int,int ,int ,int *) ;
 TYPE_3__ VAR_1 ;

void FUNC_2(client *VAR_2) {
    if (VAR_2->argc > 3) {
        FUNC_0(VAR_2,VAR_1.syntaxerr);
        return;
    }
    FUNC_1(VAR_2,&VAR_2->argv[1],1,VAR_0,0,
        VAR_2->argc == 3 ? VAR_2->argv[2] : ((void*)0));
}
