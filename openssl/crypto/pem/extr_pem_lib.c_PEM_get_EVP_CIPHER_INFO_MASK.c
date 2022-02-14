
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iv; int const* cipher; } ;
typedef int ProcType ;
typedef TYPE_1__ EVP_CIPHER_INFO ;
typedef int EVP_CIPHER ;
typedef int ENCRYPTED ;
typedef int DEKInfo ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char**,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;

int FUNC_8(char *VAR_8, EVP_CIPHER_INFO *VAR_9)
{
    static const char VAR_10[] = "Proc-Type:";
    static const char VAR_11[] = "ENCRYPTED";
    static const char VAR_12[] = "DEK-Info:";
    const EVP_CIPHER *VAR_13 = ((void*)0);
    int VAR_14;
    char *VAR_15, VAR_16;

    VAR_9->cipher = ((void*)0);
    FUNC_4(VAR_9->iv, 0, sizeof(VAR_9->iv));
    if ((VAR_8 == ((void*)0)) || (*VAR_8 == '\0') || (*VAR_8 == '\n'))
        return 1;

    if (FUNC_6(VAR_8, VAR_10, sizeof(VAR_10)-1) != 0) {
        FUNC_2(VAR_0, VAR_4);
        return 0;
    }
    VAR_8 += sizeof(VAR_10)-1;
    VAR_8 += FUNC_7(VAR_8, " \t");

    if (*VAR_8++ != '4' || *VAR_8++ != ',')
        return 0;
    VAR_8 += FUNC_7(VAR_8, " \t");


    if (FUNC_6(VAR_8, VAR_11, sizeof(VAR_11)-1) != 0 ||
        FUNC_7(VAR_8+sizeof(VAR_11)-1, " \t\r\n") == 0) {
        FUNC_2(VAR_0, VAR_3);
        return 0;
    }
    VAR_8 += sizeof(VAR_11)-1;
    VAR_8 += FUNC_7(VAR_8, " \t\r");
    if (*VAR_8++ != '\n') {
        FUNC_2(VAR_0, VAR_5);
        return 0;
    }





    if (FUNC_6(VAR_8, VAR_12, sizeof(VAR_12)-1) != 0) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }
    VAR_8 += sizeof(VAR_12)-1;
    VAR_8 += FUNC_7(VAR_8, " \t");





    VAR_15 = VAR_8;
    VAR_8 += FUNC_5(VAR_8, " \t,");
    VAR_16 = *VAR_8;
    *VAR_8 = '\0';
    VAR_9->cipher = VAR_13 = FUNC_1(VAR_15);
    *VAR_8 = VAR_16;
    VAR_8 += FUNC_7(VAR_8, " \t");

    if (VAR_13 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_7);
        return 0;
    }
    VAR_14 = FUNC_0(VAR_13);
    if (VAR_14 > 0 && *VAR_8++ != ',') {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    } else if (VAR_14 == 0 && *VAR_8 == ',') {
        FUNC_2(VAR_0, VAR_6);
        return 0;
    }

    if (!FUNC_3(&VAR_8, VAR_9->iv, FUNC_0(VAR_13)))
        return 0;

    return 1;
}
