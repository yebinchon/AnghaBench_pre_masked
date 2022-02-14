
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int **) ;
 int VAR_1 ;
 int * FUNC_2 (char const*,char const*) ;

int FUNC_3(const char *VAR_2, const char *VAR_3, FILE **VAR_4) {
        FUNC_1(VAR_4);

        FILE *VAR_5 = FUNC_2(VAR_2, VAR_3);
        if (!VAR_5)
                return -VAR_1;

        (void) FUNC_0(VAR_5, VAR_0);

        *VAR_4 = VAR_5;
        return 0;
}
