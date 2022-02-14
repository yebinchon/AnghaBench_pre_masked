
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double** m; } ;
typedef TYPE_1__ ColorMatrix ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;

__attribute__((used)) static BOOL FUNC_1(const ColorMatrix *VAR_2, int VAR_3[5][5])
{

    BOOL VAR_4 = VAR_1;
    int VAR_5, VAR_6;

    for (VAR_5=0; VAR_5<4; VAR_5++)
        for (VAR_6=0; VAR_6<5; VAR_6++)
        {
            if (VAR_2->m[VAR_6][VAR_5] != (VAR_5 == VAR_6 ? 1.0 : 0.0))
                VAR_4 = VAR_0;
            VAR_3[VAR_6][VAR_5] = FUNC_0(VAR_2->m[VAR_6][VAR_5] * 256.0);
        }

    return VAR_4;
}
