
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int sds ;
typedef int lua_State ;
struct TYPE_18__ {size_t resp; } ;
typedef TYPE_2__ client ;
struct TYPE_20__ {TYPE_1__* lua_client; } ;
struct TYPE_19__ {int * null; int cone; } ;
struct TYPE_17__ {int resp; } ;



 int VAR_0 ;



 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 void* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,long long) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 scalar_t__ FUNC_17 (int *,int) ;
 scalar_t__ FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,char*,char*,int) ;
 int FUNC_24 (scalar_t__) ;
 TYPE_7__ VAR_1 ;
 int FUNC_25 (TYPE_2__*,void*,int) ;
 int FUNC_26 (TYPE_2__*,void*,int) ;
 int FUNC_27 (TYPE_2__*,void*,int) ;
 TYPE_3__ VAR_2 ;

void FUNC_28(client *VAR_3, lua_State *VAR_4) {
    int VAR_5 = FUNC_19(VAR_4,-1);

    switch(VAR_5) {
    case 129:
        FUNC_2(VAR_3,(char*)FUNC_18(VAR_4,-1),FUNC_15(VAR_4,-1));
        break;
    case 131:
        if (VAR_1.lua_client->resp == 2)
            FUNC_0(VAR_3,FUNC_16(VAR_4,-1) ? VAR_2.cone :
                                               VAR_2.null[VAR_3->resp]);
        else
            FUNC_1(VAR_3,FUNC_16(VAR_4,-1));
        break;
    case 130:
        FUNC_5(VAR_3,(long long)FUNC_17(VAR_4,-1));
        break;
    case 128:






        FUNC_13(VAR_4,"err");
        FUNC_8(VAR_4,-2);
        VAR_5 = FUNC_19(VAR_4,-1);
        if (VAR_5 == 129) {
            sds VAR_6 = FUNC_24(FUNC_18(VAR_4,-1));
            FUNC_23(VAR_6,"\r\n","  ",2);
            FUNC_7(VAR_3,FUNC_20(FUNC_21(),"-%s\r\n",VAR_6));
            FUNC_22(VAR_6);
            FUNC_10(VAR_4,2);
            return;
        }
        FUNC_10(VAR_4,1);


        FUNC_13(VAR_4,"ok");
        FUNC_8(VAR_4,-2);
        VAR_5 = FUNC_19(VAR_4,-1);
        if (VAR_5 == 129) {
            sds VAR_7 = FUNC_24(FUNC_18(VAR_4,-1));
            FUNC_23(VAR_7,"\r\n","  ",2);
            FUNC_7(VAR_3,FUNC_20(FUNC_21(),"+%s\r\n",VAR_7));
            FUNC_22(VAR_7);
            FUNC_10(VAR_4,2);
            return;
        }
        FUNC_10(VAR_4,1);


        FUNC_13(VAR_4,"double");
        FUNC_8(VAR_4,-2);
        VAR_5 = FUNC_19(VAR_4,-1);
        if (VAR_5 == 130) {
            FUNC_4(VAR_3,FUNC_17(VAR_4,-1));
            FUNC_10(VAR_4,2);
            return;
        }
        FUNC_10(VAR_4,1);


        FUNC_13(VAR_4,"map");
        FUNC_8(VAR_4,-2);
        VAR_5 = FUNC_19(VAR_4,-1);
        if (VAR_5 == 128) {
            int VAR_8 = 0;
            void *VAR_9 = FUNC_3(VAR_3);
            FUNC_11(VAR_4);
            while (FUNC_9(VAR_4,-2)) {

                FUNC_28(VAR_3, VAR_4);
                FUNC_14(VAR_4,-1);
                FUNC_28(VAR_3, VAR_4);

                VAR_8++;
            }
            FUNC_26(VAR_3,VAR_9,VAR_8);
            FUNC_10(VAR_4,2);
            return;
        }
        FUNC_10(VAR_4,1);


        FUNC_13(VAR_4,"set");
        FUNC_8(VAR_4,-2);
        VAR_5 = FUNC_19(VAR_4,-1);
        if (VAR_5 == 128) {
            int VAR_10 = 0;
            void *VAR_11 = FUNC_3(VAR_3);
            FUNC_11(VAR_4);
            while (FUNC_9(VAR_4,-2)) {

                FUNC_10(VAR_4,1);
                FUNC_14(VAR_4,-1);
                FUNC_28(VAR_3, VAR_4);

                VAR_10++;
            }
            FUNC_27(VAR_3,VAR_11,VAR_10);
            FUNC_10(VAR_4,2);
            return;
        }
        FUNC_10(VAR_4,1);


        void *VAR_12 = FUNC_3(VAR_3);
        int VAR_13 = 1, VAR_14 = 0;
        while(1) {
            FUNC_12(VAR_4,VAR_13++);
            FUNC_8(VAR_4,-2);
            VAR_5 = FUNC_19(VAR_4,-1);
            if (VAR_5 == VAR_0) {
                FUNC_10(VAR_4,1);
                break;
            }
            FUNC_28(VAR_3, VAR_4);
            VAR_14++;
        }
        FUNC_25(VAR_3,VAR_12,VAR_14);
        break;
    default:
        FUNC_6(VAR_3);
    }
    FUNC_10(VAR_4,1);
}
