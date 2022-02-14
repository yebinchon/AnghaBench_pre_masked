
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jsonsl_uchar_t ;
typedef TYPE_1__* jsonsl_t ;
struct TYPE_3__ {int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static int
FUNC_2(jsonsl_t VAR_4,
                      const jsonsl_uchar_t **VAR_5, size_t *VAR_6)
{
    const jsonsl_uchar_t *VAR_7 = *VAR_5;
    const jsonsl_uchar_t *VAR_8;
    for (VAR_8 = VAR_7 + *VAR_6; VAR_7 != VAR_8; VAR_7++) {
        if (



                (FUNC_1(*VAR_7))) {
            FUNC_0(VAR_3);
            FUNC_0(VAR_2);
        } else {

            VAR_4->pos += (VAR_7 - *VAR_5);
            *VAR_6 -= (VAR_7 - *VAR_5);
            *VAR_5 = VAR_7;
            return VAR_0;
        }
    }


    VAR_4->pos += (VAR_7 - *VAR_5);
    return VAR_1;
}
