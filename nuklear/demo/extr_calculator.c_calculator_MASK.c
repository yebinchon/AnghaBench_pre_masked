
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nk_context*,char*,int ,int) ;
 scalar_t__ FUNC_2 (struct nk_context*,char*) ;
 scalar_t__ FUNC_3 (struct nk_context*,char const*,int) ;
 int FUNC_4 (struct nk_context*,int ,char*,int*,int,int ) ;
 int FUNC_5 (struct nk_context*) ;
 int VAR_4 ;
 int FUNC_6 (struct nk_context*,int,int) ;
 int FUNC_7 (int,int,int,int) ;
 int FUNC_8 (char*,int,char*,double) ;

__attribute__((used)) static void
FUNC_9(struct nk_context *VAR_5)
{
    if (FUNC_1(VAR_5, "Calculator", FUNC_7(10, 10, 180, 250),
        VAR_1|VAR_3|VAR_2))
    {
        static int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
        static const char VAR_9[] = "789456123";
        static const char VAR_10[] = "+-*/";
        static double VAR_11 = 0, VAR_12 = 0;
        static double *VAR_13 = &VAR_11;

        size_t VAR_14 = 0;
        int VAR_15 = 0;
        {int VAR_16; char VAR_17[256];
        FUNC_6(VAR_5, 35, 1);
        VAR_16 = FUNC_8(VAR_17, 256, "%.2f", *VAR_13);
        FUNC_4(VAR_5, VAR_0, VAR_17, &VAR_16, 255, VAR_4);
        VAR_17[VAR_16] = 0;
        *VAR_13 = FUNC_0(VAR_17);}

        FUNC_6(VAR_5, 35, 4);
        for (VAR_14 = 0; VAR_14 < 16; ++VAR_14) {
            if (VAR_14 >= 12 && VAR_14 < 15) {
                if (VAR_14 > 12) continue;
                if (FUNC_2(VAR_5, "C")) {
                    VAR_11 = VAR_12 = VAR_8 = 0; VAR_13 = &VAR_11; VAR_6 = 0;
                } if (FUNC_2(VAR_5, "0")) {
                    *VAR_13 = *VAR_13*10.0f; VAR_6 = 0;
                } if (FUNC_2(VAR_5, "=")) {
                    VAR_15 = 1; VAR_7 = VAR_8; VAR_8 = 0;
                }
            } else if (((VAR_14+1) % 4)) {
                if (FUNC_3(VAR_5, &VAR_9[(VAR_14/4)*3+VAR_14%4], 1)) {
                    *VAR_13 = *VAR_13 * 10.0f + VAR_9[(VAR_14/4)*3+VAR_14%4] - '0';
                    VAR_6 = 0;
                }
            } else if (FUNC_3(VAR_5, &VAR_10[VAR_14/4], 1)) {
                if (!VAR_6) {
                    if (VAR_13 != &VAR_12) {
                        VAR_13 = &VAR_12;
                    } else {
                        VAR_7 = VAR_8;
                        VAR_15 = 1;
                    }
                }
                VAR_8 = VAR_10[VAR_14/4];
                VAR_6 = 1;
            }
        }
        if (VAR_15) {
            if (VAR_7 == '+') VAR_11 = VAR_11 + VAR_12;
            if (VAR_7 == '-') VAR_11 = VAR_11 - VAR_12;
            if (VAR_7 == '*') VAR_11 = VAR_11 * VAR_12;
            if (VAR_7 == '/') VAR_11 = VAR_11 / VAR_12;
            VAR_13 = &VAR_11;
            if (VAR_6) VAR_13 = &VAR_12;
            VAR_12 = 0; VAR_6 = 0;
        }
    }
    FUNC_5(VAR_5);
}
