
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_track ;
typedef char const FILE ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char const*,char const*,char const*) ;

void FUNC_5(sd_bus_track *VAR_0, FILE *VAR_1, const char *VAR_2) {
        const char *VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        for (VAR_3 = FUNC_2(VAR_0); VAR_3; VAR_3 = FUNC_3(VAR_0)) {
                int VAR_4, VAR_5;

                VAR_4 = FUNC_1(VAR_0, VAR_3);
                for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
                        (void) FUNC_4(VAR_1, VAR_2, VAR_3);
        }
}
