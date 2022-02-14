
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int buf ;







 double FUNC_0 (int *) ;
 double FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned short FUNC_5 (char const*,int) ;
 int FUNC_6 (char*,int,char*,double) ;

unsigned short FUNC_7(zval *VAR_0) {
    const char *VAR_1;
    char VAR_2[255];
    int VAR_3;


    switch(FUNC_4(VAR_0)) {
        case 128:
            VAR_1 = FUNC_3(VAR_0);
            VAR_3 = FUNC_2(VAR_0);
            break;
        case 130:
            VAR_3 = FUNC_6(VAR_2,sizeof(VAR_2),"%ld",FUNC_1(VAR_0));
            VAR_1 = (const char *)VAR_2;
            break;
        case 131:
            VAR_3 = FUNC_6(VAR_2,sizeof(VAR_2),"%f",FUNC_0(VAR_0));
            VAR_1 = (const char *)VAR_2;
            break;
        case 132:
            VAR_1 = "Array";
            VAR_3 = sizeof("Array")-1;
            break;
        case 129:
            VAR_1 = "Object";
            VAR_3 = sizeof("Object")-1;
            break;
        default:
            VAR_1 = "";
            VAR_3 = 0;
    }


    return FUNC_5(VAR_1, VAR_3);
}
