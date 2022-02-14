
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGI_varlist ;
typedef int CGI_value ;


 int * FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 scalar_t__ FUNC_2 (char*,int*) ;
 int * FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,int*,char const*) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*,int) ;
 char* FUNC_9 (char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_10 (char*,char*) ;
 char* FUNC_11 (int *,char*) ;
 char* FUNC_12 (char*,int,char const*) ;
 int * FUNC_13 (int ) ;
 int * FUNC_14 (int ,char*) ;
 int * FUNC_15 (int ) ;
 int * FUNC_16 (int *,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char,int ) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (char*,int,int,int ) ;
 int FUNC_21 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (char*) ;

int
FUNC_24(int VAR_1, char **VAR_2) {
    CGI_varlist *VAR_3;
    char *VAR_4;
    CGI_value *VAR_5;
    int VAR_6;

    if (FUNC_22(VAR_2[1], "CGI_get_cookie") == 0) {
        VAR_3 = FUNC_13(0);
        FUNC_17(VAR_3);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_get_query") == 0) {
        VAR_3 = FUNC_15(0);
        FUNC_17(VAR_3);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_decode_query") == 0) {
        VAR_3 = FUNC_3(0, VAR_2[2]);
        FUNC_17(VAR_3);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_get_post") == 0) {
        VAR_3 = FUNC_14(0, 0);
        FUNC_17(VAR_3);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "upload") == 0) {
        VAR_3 = FUNC_14(0, "./cgi-upload-XXXXXX");
        VAR_5 = FUNC_16(VAR_3, "upload");
        FUNC_17(VAR_3);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_add_var") == 0) {
        VAR_3 = 0;
        for (VAR_6 = 2; VAR_6 + 1 < VAR_1; VAR_6 += 2) {
            VAR_3 = FUNC_0(VAR_3, VAR_2[VAR_6], VAR_2[VAR_6 + 1]);
        }
        FUNC_17(VAR_3);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_encode_varlist") == 0) {
        VAR_3 = 0;
        for (VAR_6 = 2; VAR_6 + 1 < VAR_1; VAR_6 += 2) {
            VAR_3 = FUNC_0(VAR_3, VAR_2[VAR_6], VAR_2[VAR_6 + 1]);
        }
        FUNC_17(VAR_3);
        VAR_4 = FUNC_11(VAR_3, ".-_");
        FUNC_19(VAR_4, VAR_0);
        FUNC_18('\n', VAR_0);
        return 0;
    }


    if (FUNC_22(VAR_2[1], "CGI_encode_url") == 0) {
        VAR_4 = FUNC_10(VAR_2[2], ".-_");
        FUNC_19(VAR_4, VAR_0);
        FUNC_18('\n', VAR_0);
        VAR_4 = FUNC_4(VAR_4);
        FUNC_19(VAR_4, VAR_0);
        FUNC_18('\n', VAR_0);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_encode_query") == 0) {
        VAR_4 = FUNC_9(".-_", VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5],
            VAR_2[6], VAR_2[7], VAR_2[8], VAR_2[9], VAR_2[10], VAR_2[11],
            VAR_2[12], VAR_2[13], VAR_2[14], VAR_2[15], VAR_2[16], VAR_2[17],
            VAR_2[18], VAR_2[19], VAR_2[20], VAR_2[21], (char *)0);
        FUNC_19(VAR_4, VAR_0);
        FUNC_18('\n', VAR_0);
        VAR_3 = FUNC_3(0, VAR_4);
        FUNC_17(VAR_3);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_encode_base64") == 0) {
        VAR_4 = VAR_2[2];
        VAR_4 = FUNC_6(VAR_4, FUNC_23(VAR_4));
        FUNC_19(VAR_4, VAR_0);
        FUNC_18('\n', VAR_0);
        VAR_4 = (char *) FUNC_1(VAR_4, &VAR_6);
        FUNC_20(VAR_4, VAR_6, 1, VAR_0);
        FUNC_18('\n', VAR_0);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_encode_hex") == 0) {
        VAR_4 = VAR_2[2];
        VAR_4 = FUNC_8(VAR_4, FUNC_23(VAR_4));
        FUNC_19(VAR_4, VAR_0);
        FUNC_18('\n', VAR_0);
        VAR_4 = (char *) FUNC_2(VAR_4, &VAR_6);
        FUNC_20(VAR_4, VAR_6, 1, VAR_0);
        FUNC_18('\n', VAR_0);
        return 0;
    }

    if (FUNC_22(VAR_2[1], "CGI_encode_entity") == 0) {
        VAR_4 = FUNC_7(VAR_2[2]);
        FUNC_19(VAR_4, VAR_0);
        FUNC_18('\n', VAR_0);
        return 0;
    }
    if (FUNC_22(VAR_2[1], "CGI_encrypt") == 0) {
        const char *VAR_7 = "This is my C CGI test password";
        VAR_4 = VAR_2[2];
        VAR_4 = FUNC_12(VAR_4, FUNC_23(VAR_4), VAR_7);
  FUNC_21("enc len = %d\n", FUNC_23(VAR_4));
        VAR_4 = FUNC_5(VAR_4 , &VAR_6, VAR_7);
  FUNC_21("dec len = %d %s\n", VAR_6, VAR_4);
        return 0;
    }
    return 0;
}
