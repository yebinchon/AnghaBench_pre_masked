
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*,int*) ;

unsigned FUNC_3(void) {
        const char *VAR_3;
        int VAR_4;

        if (VAR_2 > 0)
                return VAR_2;

        VAR_4 = 0;
        VAR_3 = FUNC_1("COLUMNS");
        if (VAR_3)
                (void) FUNC_2(VAR_3, &VAR_4);

        if (VAR_4 <= 0 || VAR_4 > VAR_1) {
                VAR_4 = FUNC_0(VAR_0);
                if (VAR_4 <= 0)
                        VAR_4 = 80;
        }

        VAR_2 = VAR_4;
        return VAR_2;
}
