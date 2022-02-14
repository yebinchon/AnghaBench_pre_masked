
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdhost_system_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,struct rrdhost_system_info*,int) ;
 int FUNC_10 () ;
 int VAR_17 ;
 int FUNC_11 () ;

void FUNC_12(char *VAR_18, struct rrdhost_system_info *VAR_19) {
    VAR_17 = FUNC_1(VAR_1, "cleanup obsolete charts after seconds", VAR_17);
    VAR_11 = (int)FUNC_1(VAR_1, "gap when lost iterations above", VAR_11);
    if (VAR_11 < 1)
        VAR_11 = 1;

    FUNC_3();
    FUNC_6();
    FUNC_10();

    FUNC_2(VAR_2, "Initializing localhost with hostname '%s'", VAR_18);
    FUNC_8();
    VAR_12 = FUNC_9(
            VAR_18
            , FUNC_5()
            , FUNC_4()
            , VAR_14
            , VAR_13
            , FUNC_0(VAR_0, "host tags", "")
            , VAR_15
            , VAR_16
            , VAR_6
            , VAR_4
            , VAR_5
            , VAR_3
            , VAR_9
            , VAR_8
            , VAR_7
            , VAR_10
            , VAR_19
            , 1
    );
    FUNC_7();
 FUNC_11();
}
