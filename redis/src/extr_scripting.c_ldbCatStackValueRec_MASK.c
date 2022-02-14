
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int const FUNC_7 (int *,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,char*,size_t) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int) ;

sds FUNC_17(sds VAR_1, lua_State *VAR_2, int VAR_3, int VAR_4) {
    int VAR_5 = FUNC_7(VAR_2,VAR_3);

    if (VAR_4++ == VAR_0)
        return FUNC_8(VAR_1,"<max recursion level reached! Nested table?>");

    switch(VAR_5) {
    case 131:
        {
        size_t VAR_6;
        char *VAR_7 = (char*)FUNC_4(VAR_2,VAR_3,&VAR_6);
        VAR_1 = FUNC_11(VAR_1,VAR_7,VAR_6);
        }
        break;
    case 136:
        VAR_1 = FUNC_8(VAR_1,FUNC_3(VAR_2,VAR_3) ? "true" : "false");
        break;
    case 132:
        VAR_1 = FUNC_10(VAR_1,"%g",(double)FUNC_5(VAR_2,VAR_3));
        break;
    case 133:
        VAR_1 = FUNC_9(VAR_1,"nil",3);
        break;
    case 130:
        {
        int VAR_8 = 1;
        int VAR_9 = 1;



        sds VAR_10 = FUNC_13();
        sds VAR_11 = FUNC_13();
        FUNC_2(VAR_2);
        while (FUNC_0(VAR_2,VAR_3-1)) {

            if (VAR_9 &&
                (FUNC_7(VAR_2,-2) != 132 ||
                 FUNC_5(VAR_2,-2) != VAR_8)) VAR_9 = 0;


            VAR_10 = FUNC_17(VAR_10,VAR_2,-1,VAR_4);
            VAR_10 = FUNC_9(VAR_10,"; ",2);

            VAR_11 = FUNC_9(VAR_11,"[",1);
            VAR_11 = FUNC_17(VAR_11,VAR_2,-2,VAR_4);
            VAR_11 = FUNC_9(VAR_11,"]=",2);
            VAR_11 = FUNC_17(VAR_11,VAR_2,-1,VAR_4);
            VAR_11 = FUNC_9(VAR_11,"; ",2);
            FUNC_1(VAR_2,1);
            VAR_8++;
        }

        if (FUNC_15(VAR_10)) FUNC_16(VAR_10,0,-3);
        if (FUNC_15(VAR_11)) FUNC_16(VAR_11,0,-3);

        VAR_1 = FUNC_9(VAR_1,"{",1);
        VAR_1 = FUNC_12(VAR_1,VAR_9 ? VAR_10 : VAR_11);
        VAR_1 = FUNC_9(VAR_1,"}",1);
        FUNC_14(VAR_10);
        FUNC_14(VAR_11);
        }
        break;
    case 135:
    case 128:
    case 129:
    case 134:
        {
        const void *VAR_12 = FUNC_6(VAR_2,VAR_3);
        char *VAR_13 = "unknown";
        if (VAR_5 == 135) VAR_13 = "function";
        else if (VAR_5 == 128) VAR_13 = "userdata";
        else if (VAR_5 == 129) VAR_13 = "thread";
        else if (VAR_5 == 134) VAR_13 = "light-userdata";
        VAR_1 = FUNC_10(VAR_1,"\"%s@%p\"",VAR_13,VAR_12);
        }
        break;
    default:
        VAR_1 = FUNC_8(VAR_1,"\"<unknown-lua-type>\"");
        break;
    }
    return VAR_1;
}
