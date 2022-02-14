
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
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,long*,int *) ;
 int * FUNC_3 (long,long,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(client *VAR_2) {
    long VAR_3 = 80;
    long VAR_4 = 20;


    if (VAR_2->argc > 1 &&
        FUNC_2(VAR_2,VAR_2->argv[1],&VAR_3,((void*)0)) != VAR_0)
        return;

    if (VAR_2->argc > 2 &&
        FUNC_2(VAR_2,VAR_2->argv[2],&VAR_4,((void*)0)) != VAR_0)
        return;



    if (VAR_3 < 1) VAR_3 = 1;
    if (VAR_3 > 1000) VAR_3 = 1000;
    if (VAR_4 < 1) VAR_4 = 1;
    if (VAR_4 > 1000) VAR_4 = 1000;


    lwCanvas *VAR_5 = FUNC_3(VAR_3,VAR_4,3);
    FUNC_1(VAR_5);
    sds VAR_6 = FUNC_5(VAR_5);
    VAR_6 = FUNC_6(VAR_6,
        "\nDedicated to the 8 bit game developers of past and present.\n"
        "Original 8 bit image from Plaguemon by hikikomori. Redis ver. ");
    VAR_6 = FUNC_6(VAR_6,VAR_1);
    VAR_6 = FUNC_7(VAR_6,"\n",1);
    FUNC_0(VAR_2,VAR_6,FUNC_9(VAR_6),"txt");
    FUNC_8(VAR_6);
    FUNC_4(VAR_5);
}
