
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void)

{
    const char *VAR_1;
    int VAR_2;

    if (VAR_0 < 0) {
 VAR_1 = (const char *) FUNC_2("COLUMNS");
 if (VAR_1 != ((void*)0)) {
     VAR_2 = FUNC_1(VAR_1);
     if (VAR_2 > 20)
         FUNC_6(VAR_2);
 }
 VAR_1 = (const char *) FUNC_2("ROWS");
 if (VAR_1 != ((void*)0)) {
     VAR_2 = FUNC_1(VAR_1);
     if (VAR_2 > 10)
         FUNC_5(VAR_2);
 }
        FUNC_7();
    }
    if (FUNC_0(0) == 0 || FUNC_0(1) == 0)
 FUNC_4("\n*** Error: getline(): not interactive, use stdio.\n");
    FUNC_3();
    VAR_0 = 1;
}
