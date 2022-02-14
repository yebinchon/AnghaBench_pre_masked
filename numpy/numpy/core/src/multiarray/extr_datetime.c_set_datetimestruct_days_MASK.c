
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_int64 ;
struct TYPE_3__ {int month; int day; int year; } ;
typedef TYPE_1__ npy_datetimestruct ;


 int** VAR_0 ;
 int FUNC_0 (int*) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(npy_int64 VAR_1, npy_datetimestruct *VAR_2)
{
    int *VAR_3, VAR_4;

    VAR_2->year = FUNC_0(&VAR_1);
    VAR_3 = VAR_0[FUNC_1(VAR_2->year)];

    for (VAR_4 = 0; VAR_4 < 12; ++VAR_4) {
        if (VAR_1 < VAR_3[VAR_4]) {
            VAR_2->month = VAR_4 + 1;
            VAR_2->day = (int)VAR_1 + 1;
            return;
        }
        else {
            VAR_1 -= VAR_3[VAR_4];
        }
    }
}
