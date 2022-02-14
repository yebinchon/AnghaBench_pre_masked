
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (int,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

int FUNC_3(char *VAR_1, const char *VAR_2, FILE **VAR_3) {
        int VAR_4;
        FILE *VAR_5;

        VAR_4 = FUNC_1(VAR_1);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_5 = FUNC_0(VAR_4, VAR_2);
        if (!VAR_5) {
                FUNC_2(VAR_4);
                return -VAR_0;
        }

        *VAR_3 = VAR_5;
        return 0;
}
