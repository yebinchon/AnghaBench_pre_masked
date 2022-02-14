
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
typedef int llstr ;
struct TYPE_9__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_10__ {scalar_t__ replstate; } ;
typedef TYPE_2__ client ;
typedef int aux ;
struct TYPE_12__ {int slaveseldb; int * repl_backlog; int * masterhost; } ;
struct TYPE_11__ {int ** select; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (char*,int,long) ;
 int FUNC_11 (int ,char*,int,char*) ;
 int FUNC_12 () ;
 TYPE_4__ VAR_4 ;
 int FUNC_13 (int) ;
 TYPE_3__ VAR_5 ;
 long FUNC_14 (int *) ;

void FUNC_15(list *VAR_6, int VAR_7, robj **VAR_8, int VAR_9) {
    listNode *VAR_10;
    listIter VAR_11;
    int VAR_12, VAR_13;
    char VAR_14[VAR_0];






    if (VAR_4.masterhost != ((void*)0)) return;



    if (VAR_4.repl_backlog == ((void*)0) && FUNC_7(VAR_6) == 0) return;


    FUNC_13(!(FUNC_7(VAR_6) != 0 && VAR_4.repl_backlog == ((void*)0)));


    if (VAR_4.slaveseldb != VAR_7) {
        robj *VAR_15;


        if (VAR_7 >= 0 && VAR_7 < VAR_2) {
            VAR_15 = VAR_5.select[VAR_7];
        } else {
            int VAR_16;

            VAR_16 = FUNC_10(VAR_14,sizeof(VAR_14),VAR_7);
            VAR_15 = FUNC_3(VAR_1,
                FUNC_11(FUNC_12(),
                "*2\r\n$6\r\nSELECT\r\n$%d\r\n%s\r\n",
                VAR_16, VAR_14));
        }


        if (VAR_4.repl_backlog) FUNC_6(VAR_15);


        FUNC_9(VAR_6,&VAR_11);
        while((VAR_10 = FUNC_8(&VAR_11))) {
            client *VAR_17 = VAR_10->value;
            if (VAR_17->replstate == VAR_3) continue;
            FUNC_0(VAR_17,VAR_15);
        }

        if (VAR_7 < 0 || VAR_7 >= VAR_2)
            FUNC_4(VAR_15);
    }
    VAR_4.slaveseldb = VAR_7;


    if (VAR_4.repl_backlog) {
        char VAR_18[VAR_0+3];


        VAR_18[0] = '*';
        VAR_13 = FUNC_10(VAR_18+1,sizeof(VAR_18)-1,VAR_9);
        VAR_18[VAR_13+1] = '\r';
        VAR_18[VAR_13+2] = '\n';
        FUNC_5(VAR_18,VAR_13+3);

        for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
            long VAR_19 = FUNC_14(VAR_8[VAR_12]);




            VAR_18[0] = '$';
            VAR_13 = FUNC_10(VAR_18+1,sizeof(VAR_18)-1,VAR_19);
            VAR_18[VAR_13+1] = '\r';
            VAR_18[VAR_13+2] = '\n';
            FUNC_5(VAR_18,VAR_13+3);
            FUNC_6(VAR_8[VAR_12]);
            FUNC_5(VAR_18+VAR_13+1,2);
        }
    }


    FUNC_9(VAR_6,&VAR_11);
    while((VAR_10 = FUNC_8(&VAR_11))) {
        client *VAR_20 = VAR_10->value;


        if (VAR_20->replstate == VAR_3) continue;






        FUNC_1(VAR_20,VAR_9);



        for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
            FUNC_2(VAR_20,VAR_8[VAR_12]);
    }
}
