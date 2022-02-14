
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * hlibiconv; } ;
typedef TYPE_1__ rec_iconv_t ;
typedef int outbuf ;
typedef scalar_t__ iconv_t ;
typedef int dllpath ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (scalar_t__,char const**,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char const*,int) ;
 scalar_t__ VAR_3 ;

void
FUNC_8(const char *VAR_4, const char *VAR_5, int VAR_6, const char *VAR_7, const char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    char VAR_13[VAR_0];
    const char *VAR_14;
    char *VAR_15;
    size_t VAR_16;
    size_t VAR_17;
    iconv_t VAR_18;
    size_t VAR_19;




    VAR_18 = FUNC_4(VAR_7, VAR_4);
    if (VAR_18 == (iconv_t)(-1))
    {
        FUNC_5("%s -> %s: NG: INVALID ENCODING NAME: line=%d\n", VAR_4, VAR_7, VAR_12);
        FUNC_2(1);
    }
    VAR_2 = 0;

    VAR_14 = (char *)VAR_5;
    VAR_15 = VAR_13;
    VAR_16 = VAR_6;
    VAR_17 = VAR_11;
    VAR_19 = FUNC_3(VAR_18, &VAR_14, &VAR_16, &VAR_15, &VAR_17);
    if (VAR_19 != (size_t)(-1))
        VAR_19 = FUNC_3(VAR_18, ((void*)0), ((void*)0), &VAR_15, &VAR_17);
    *VAR_15 = 0;





    FUNC_5("%s(%s) -> ", VAR_4, FUNC_7(VAR_5, VAR_6));
    FUNC_5("%s(%s%s%s): ", VAR_7, FUNC_7(VAR_8, VAR_9),
            VAR_10 == 0 ? "" : ":",
            VAR_10 == 0 ? "" : FUNC_1(VAR_10));
    if (FUNC_6(VAR_13, VAR_8) == 0 && VAR_2 == VAR_10)
        FUNC_5("OK\n");
    else
    {
        FUNC_5("RESULT(%s:%s): ", FUNC_7(VAR_13, sizeof(VAR_13) - VAR_17),
                FUNC_1(VAR_2));
        FUNC_5("NG: line=%d\n", VAR_12);
        FUNC_2(1);
    }
}
