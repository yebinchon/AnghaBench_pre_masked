
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {char* decimal_point; } ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 struct lconv* FUNC_2 () ;
 int FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_6(char* VAR_0)
{
    struct lconv *VAR_1 = FUNC_2();
    const char *VAR_2 = VAR_1->decimal_point;

    if (VAR_2[0] != '.' || VAR_2[1] != 0) {
        size_t VAR_3 = FUNC_4(VAR_2);

        if (*VAR_0 == '+' || *VAR_0 == '-') {
            VAR_0++;
        }
        while (FUNC_1(FUNC_0(*VAR_0))) {
            VAR_0++;
        }
        if (FUNC_5(VAR_0, VAR_2, VAR_3) == 0) {
            *VAR_0 = '.';
            VAR_0++;
            if (VAR_3 > 1) {

                size_t VAR_4 = FUNC_4(VAR_0 + (VAR_3 - 1));
                FUNC_3(VAR_0, VAR_0 + (VAR_3 - 1), VAR_4);
                VAR_0[VAR_4] = 0;
            }
        }
    }
}
