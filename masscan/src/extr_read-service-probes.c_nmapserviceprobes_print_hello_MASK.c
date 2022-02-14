
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char const*,size_t,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3)
{
    size_t VAR_4;



    if (FUNC_0(VAR_1, VAR_2, VAR_3)) {
        static const char *VAR_5 = "|/\"'#*+-!@$%^&()_=";

        for (VAR_4=0; VAR_5[VAR_4]; VAR_4++) {
            VAR_3 = VAR_5[VAR_4];
            if (!FUNC_0(VAR_1, VAR_2, VAR_3))
                break;
        }
    }


    FUNC_1(VAR_0, "%c", VAR_3);


    for (VAR_4=0; VAR_4<VAR_2; VAR_4++) {
        char VAR_6 = VAR_1[VAR_4];

        switch (VAR_6) {
            case '\\':
                FUNC_1(VAR_0, "\\\\");
                break;
            case '\0':
                FUNC_1(VAR_0, "\\0");
                break;
            case '\a':
                FUNC_1(VAR_0, "\\a");
                break;
            case '\b':
                FUNC_1(VAR_0, "\\b");
                break;
            case '\f':
                FUNC_1(VAR_0, "\\f");
                break;
            case '\n':
                FUNC_1(VAR_0, "\\n");
                break;
            case '\r':
                FUNC_1(VAR_0, "\\r");
                break;
            case '\t':
                FUNC_1(VAR_0, "\\t");
                break;
            case '\v':
                FUNC_1(VAR_0, "\\v");
                break;
            default:
                if (FUNC_2(VAR_6))
                    FUNC_1(VAR_0, "%c", VAR_6);
                else
                    FUNC_1(VAR_0, "\\x%02x", ((unsigned)VAR_6)&0xFF);
                break;

        }
    }


    FUNC_1(VAR_0, "%c", VAR_3);

}
