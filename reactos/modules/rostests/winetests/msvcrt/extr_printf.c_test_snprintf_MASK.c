
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (struct snprintf_test const*) ;
 int FUNC_1 (char*,int const,char const*) ;
 int FUNC_2 (char const*,char*,int const) ;
 int FUNC_3 (int,char*,char const*,int const,...) ;

__attribute__((used)) static void FUNC_4 (void)
{
    struct snprintf_test {
        const char *format;
        int expected;
    };

    const struct snprintf_test VAR_0[] = {{"short", 5},
                                          {"justfit", 7},
                                          {"justfits", 8},
                                          {"muchlonger", -1}};
    char VAR_1[8];
    const int VAR_2 = sizeof VAR_1;
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        const char *VAR_4 = VAR_0[VAR_3].format;
        const int VAR_5 = VAR_0[VAR_3].expected;
        const int VAR_6 = FUNC_1 (VAR_1, VAR_2, VAR_4);
        const int VAR_7 = VAR_6 < 0 ? VAR_2 : (VAR_6 == VAR_2 ? VAR_6 : VAR_6+1);

        FUNC_3 (VAR_6 == VAR_5, "\"%s\": expected %d, returned %d\n",
            VAR_4, VAR_5, VAR_6);
        FUNC_3 (!FUNC_2 (VAR_4, VAR_1, VAR_7),
            "\"%s\": rendered \"%.*s\"\n", VAR_4, VAR_7, VAR_1);
    }
}
