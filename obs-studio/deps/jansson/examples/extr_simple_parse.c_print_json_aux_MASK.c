
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int VAR_0 ;

void FUNC_10(json_t *VAR_1, int VAR_2) {
    switch (FUNC_1(VAR_1)) {
    case 131:
        FUNC_6(VAR_1, VAR_2);
        break;
    case 135:
        FUNC_2(VAR_1, VAR_2);
        break;
    case 129:
        FUNC_8(VAR_1, VAR_2);
        break;
    case 133:
        FUNC_4(VAR_1, VAR_2);
        break;
    case 130:
        FUNC_7(VAR_1, VAR_2);
        break;
    case 128:
        FUNC_9(VAR_1, VAR_2);
        break;
    case 134:
        FUNC_3(VAR_1, VAR_2);
        break;
    case 132:
        FUNC_5(VAR_1, VAR_2);
        break;
    default:
        FUNC_0(VAR_0, "unrecognized JSON type %d\n", FUNC_1(VAR_1));
    }
}
