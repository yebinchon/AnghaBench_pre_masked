
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*,char*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_4, const char *VAR_5, char **VAR_6) {
        const char *VAR_7, *VAR_8;
        char **VAR_9;



        for (;;) {
                if (!*VAR_6)
                        return;

                if (!FUNC_3(*VAR_6, VAR_5))
                        break;

                VAR_6++;
        }

        VAR_7 = FUNC_4(VAR_4, FUNC_2(VAR_3));
        VAR_8 = FUNC_4(VAR_4, FUNC_2(VAR_2));

        for (;;) {
                bool VAR_10 = 0;

                if (!*VAR_6 || !FUNC_0(*VAR_6, VAR_5))
                        break;

                VAR_9 = VAR_6 + 1;
                for (;;) {
                        if (!*VAR_9 || !FUNC_0(*VAR_9, VAR_5))
                                break;

                        if (!FUNC_0(*VAR_9, *VAR_6)) {
                                VAR_10 = 1;
                                break;
                        }

                        VAR_9++;
                }

                FUNC_1("%s%s%s\n", VAR_4, FUNC_2(VAR_10 ? VAR_0 : VAR_1), *VAR_6);

                FUNC_5(VAR_10 ? VAR_7 : VAR_8, *VAR_6, VAR_6);
                VAR_6 = VAR_9;
        }
}
