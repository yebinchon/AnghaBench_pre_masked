
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ a; int ub; } ;
typedef TYPE_1__ diophantine_term_t ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(PyArrayObject *VAR_0, diophantine_term_t *VAR_1,
                 unsigned int *VAR_2, int VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_0); ++VAR_4) {
        if (VAR_3) {
            if (FUNC_0(VAR_0, VAR_4) <= 1 || FUNC_2(VAR_0, VAR_4) == 0) {
                continue;
            }
        }

        VAR_1[*VAR_2].a = FUNC_2(VAR_0, VAR_4);

        if (VAR_1[*VAR_2].a < 0) {
            VAR_1[*VAR_2].a = -VAR_1[*VAR_2].a;
        }

        if (VAR_1[*VAR_2].a < 0) {

            return 1;
        }

        VAR_1[*VAR_2].ub = FUNC_0(VAR_0, VAR_4) - 1;
        ++*VAR_2;
    }

    return 0;
}
