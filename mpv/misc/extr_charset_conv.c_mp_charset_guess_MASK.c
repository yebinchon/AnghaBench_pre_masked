
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
typedef int bstr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mp_log*,char*) ;
 char* FUNC_2 (void*,struct mp_log*,int ) ;
 int FUNC_3 (struct mp_log*,char*,...) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

const char *FUNC_8(void *VAR_1, struct mp_log *VAR_2, bstr VAR_3,
                             const char *VAR_4, int VAR_5)
{
    if (FUNC_5(VAR_4, "enca") == 0 || FUNC_5(VAR_4, "guess") == 0 ||
        FUNC_5(VAR_4, "uchardet") == 0 || FUNC_6(VAR_4, ':'))
    {
        FUNC_1(VAR_2, "This syntax for the --sub-codepage option was deprecated "
                    "and has been removed.\n");
        if (FUNC_7(VAR_4, "utf8:", 5) == 0) {
            VAR_4 = VAR_4 + 5;
        } else {
            VAR_4 = "";
        }
    }

    if (VAR_4[0] == '+') {
        FUNC_3(VAR_2, "Forcing charset '%s'.\n", VAR_4 + 1);
        return VAR_4 + 1;
    }

    const char *VAR_6 = FUNC_4(VAR_3);
    if (VAR_6) {
        FUNC_3(VAR_2, "Data has a BOM, assuming %s as charset.\n", VAR_6);
        return VAR_6;
    }

    int VAR_7 = FUNC_0(VAR_3);
    if (VAR_7 >= 0 || (VAR_7 > -8 && (VAR_5 & VAR_0))) {
        FUNC_3(VAR_2, "Data looks like UTF-8, ignoring user-provided charset.\n");
        return "utf-8";
    }

    const char *VAR_8 = ((void*)0);
    if (FUNC_5(VAR_4, "auto") == 0) {



        if (!VAR_8) {
            FUNC_3(VAR_2, "Charset auto-detection failed.\n");
            VAR_8 = "UTF-8-BROKEN";
        }
    } else {
        VAR_8 = VAR_4;
    }

    FUNC_3(VAR_2, "Using charset '%s'.\n", VAR_8);
    return VAR_8;
}
