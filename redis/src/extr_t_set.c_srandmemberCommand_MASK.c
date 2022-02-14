
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sds ;
typedef int robj ;
typedef int int64_t ;
struct TYPE_10__ {int argc; size_t resp; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_11__ {int * null; int syntaxerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 int * FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int *) ;
 TYPE_4__ VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(client *VAR_3) {
    robj *VAR_4;
    sds VAR_5;
    int64_t VAR_6;
    int VAR_7;

    if (VAR_3->argc == 3) {
        FUNC_7(VAR_3);
        return;
    } else if (VAR_3->argc > 3) {
        FUNC_0(VAR_3,VAR_2.syntaxerr);
        return;
    }

    if ((VAR_4 = FUNC_4(VAR_3,VAR_3->argv[1],VAR_2.null[VAR_3->resp]))
        == ((void*)0) || FUNC_3(VAR_3,VAR_4,VAR_1)) return;

    VAR_7 = FUNC_6(VAR_4,&VAR_5,&VAR_6);
    if (VAR_7 == VAR_0) {
        FUNC_2(VAR_3,VAR_6);
    } else {
        FUNC_1(VAR_3,VAR_5,FUNC_5(VAR_5));
    }
}
