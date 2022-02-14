
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sds ;
typedef int lwCanvas ;
struct TYPE_5__ {int argc; int * argv; } ;
typedef TYPE_1__ client ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,long*,int *) ;
 int * FUNC_2 (long,long,long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(client *VAR_2) {
    long VAR_3 = 66;
    long VAR_4 = 8;
    long VAR_5 = 12;


    if (VAR_2->argc > 1 &&
        FUNC_1(VAR_2,VAR_2->argv[1],&VAR_3,((void*)0)) != VAR_0)
        return;

    if (VAR_2->argc > 2 &&
        FUNC_1(VAR_2,VAR_2->argv[2],&VAR_4,((void*)0)) != VAR_0)
        return;

    if (VAR_2->argc > 3 &&
        FUNC_1(VAR_2,VAR_2->argv[3],&VAR_5,((void*)0)) != VAR_0)
        return;



    if (VAR_3 < 1) VAR_3 = 1;
    if (VAR_3 > 1000) VAR_3 = 1000;
    if (VAR_4 < 1) VAR_4 = 1;
    if (VAR_4 > 200) VAR_4 = 200;
    if (VAR_5 < 1) VAR_5 = 1;
    if (VAR_5 > 200) VAR_5 = 200;


    lwCanvas *VAR_6 = FUNC_2(VAR_3,VAR_4,VAR_5);
    sds VAR_7 = FUNC_4(VAR_6);
    VAR_7 = FUNC_5(VAR_7,
        "\nGeorg Nees - schotter, plotter on paper, 1968. Redis ver. ");
    VAR_7 = FUNC_5(VAR_7,VAR_1);
    VAR_7 = FUNC_6(VAR_7,"\n",1);
    FUNC_0(VAR_2,VAR_7,FUNC_8(VAR_7),"txt");
    FUNC_7(VAR_7);
    FUNC_3(VAR_6);
}
