
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int robj ;
struct TYPE_12__ {int argc; size_t resp; TYPE_4__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_14__ {int ptr; } ;
struct TYPE_13__ {int * null; int syntaxerr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,double) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (double,double*) ;
 double FUNC_5 (TYPE_1__*,TYPE_4__*) ;
 double FUNC_6 (double,double,double,double) ;
 int * FUNC_7 (TYPE_1__*,TYPE_4__*,int ) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_8 (int *,int ,double*) ;

void FUNC_9(client *VAR_3) {
    double VAR_4 = 1;


    if (VAR_3->argc == 5) {
        VAR_4 = FUNC_5(VAR_3,VAR_3->argv[4]);
        if (VAR_4 < 0) return;
    } else if (VAR_3->argc > 5) {
        FUNC_0(VAR_3,VAR_2.syntaxerr);
        return;
    }


    robj *VAR_5 = ((void*)0);
    if ((VAR_5 = FUNC_7(VAR_3, VAR_3->argv[1], VAR_2.null[VAR_3->resp]))
        == ((void*)0) || FUNC_3(VAR_3, VAR_5, VAR_1)) return;


    double VAR_6, VAR_7, VAR_8[4];
    if (FUNC_8(VAR_5, VAR_3->argv[2]->ptr, &VAR_6) == VAR_0 ||
        FUNC_8(VAR_5, VAR_3->argv[3]->ptr, &VAR_7) == VAR_0)
    {
        FUNC_2(VAR_3);
        return;
    }


    if (!FUNC_4(VAR_6,VAR_8) || !FUNC_4(VAR_7,VAR_8+2))
        FUNC_2(VAR_3);
    else
        FUNC_1(VAR_3,
            FUNC_6(VAR_8[0],VAR_8[1],VAR_8[2],VAR_8[3]) / VAR_4);
}
