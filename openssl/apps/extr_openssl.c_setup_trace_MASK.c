
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_3 ;
 char* FUNC_7 (char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(const char *VAR_5)
{
    char *VAR_6;






    FUNC_3(VAR_2);

    VAR_4 = FUNC_6();
    VAR_6 = FUNC_1(VAR_5);

    if (VAR_6 != ((void*)0)) {
        char *VAR_7 = VAR_6;
        char *VAR_8;

        for (VAR_7 = VAR_6; (VAR_8 = FUNC_7(VAR_7, ",")) != ((void*)0); VAR_7 = ((void*)0)) {
            int VAR_9 = FUNC_2(VAR_8);

            if (VAR_9 == VAR_0) {
                while (++VAR_9 < VAR_1)
                    FUNC_5(VAR_9);
                break;
            } else if (VAR_9 > 0) {
                FUNC_5(VAR_9);
            } else {
                FUNC_4(VAR_3,
                        "warning: unknown trace category: '%s'.\n", VAR_8);
            }
        }
    }

    FUNC_0(VAR_6);
}
