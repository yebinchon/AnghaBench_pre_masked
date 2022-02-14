
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {int argc; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int czero; int syntaxerr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,long*,int *) ;
 unsigned char* FUNC_4 (int *,long*,char*) ;
 int * FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (unsigned char*,long) ;
 TYPE_2__ VAR_3 ;

void FUNC_7(client *VAR_4) {
    robj *VAR_5;
    long VAR_6, VAR_7, VAR_8;
    unsigned char *VAR_9;
    char VAR_10[VAR_1];


    if ((VAR_5 = FUNC_5(VAR_4,VAR_4->argv[1],VAR_3.czero)) == ((void*)0) ||
        FUNC_2(VAR_4,VAR_5,VAR_2)) return;
    VAR_9 = FUNC_4(VAR_5,&VAR_8,VAR_10);


    if (VAR_4->argc == 4) {
        if (FUNC_3(VAR_4,VAR_4->argv[2],&VAR_6,((void*)0)) != VAR_0)
            return;
        if (FUNC_3(VAR_4,VAR_4->argv[3],&VAR_7,((void*)0)) != VAR_0)
            return;

        if (VAR_6 < 0 && VAR_7 < 0 && VAR_6 > VAR_7) {
            FUNC_0(VAR_4,VAR_3.czero);
            return;
        }
        if (VAR_6 < 0) VAR_6 = VAR_8+VAR_6;
        if (VAR_7 < 0) VAR_7 = VAR_8+VAR_7;
        if (VAR_6 < 0) VAR_6 = 0;
        if (VAR_7 < 0) VAR_7 = 0;
        if (VAR_7 >= VAR_8) VAR_7 = VAR_8-1;
    } else if (VAR_4->argc == 2) {

        VAR_6 = 0;
        VAR_7 = VAR_8-1;
    } else {

        FUNC_0(VAR_4,VAR_3.syntaxerr);
        return;
    }



    if (VAR_6 > VAR_7) {
        FUNC_0(VAR_4,VAR_3.czero);
    } else {
        long VAR_11 = VAR_7-VAR_6+1;

        FUNC_1(VAR_4,FUNC_6(VAR_9+VAR_6,VAR_11));
    }
}
