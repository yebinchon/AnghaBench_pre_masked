
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jsonsl_state_st {int nelem; } ;
typedef int jsonsl_uchar_t ;
typedef TYPE_1__* jsonsl_t ;
struct TYPE_3__ {int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(jsonsl_t VAR_4,
                      const jsonsl_uchar_t **VAR_5, size_t *VAR_6,
                      struct jsonsl_state_st *VAR_7)
{
    int VAR_8 = 1;
    size_t VAR_9 = *VAR_6;
    const jsonsl_uchar_t *VAR_10 = *VAR_5;

    for (; VAR_9; VAR_9--, VAR_10++) {
        jsonsl_uchar_t VAR_11 = *VAR_10;
        if (FUNC_1(VAR_11)) {
            FUNC_0(VAR_3);
            FUNC_0(VAR_2);
            VAR_7->nelem = (VAR_7->nelem * 10) + (VAR_11 - 0x30);
        } else {
            VAR_8 = 0;
            break;
        }
    }
    VAR_4->pos += (*VAR_6 - VAR_9);
    if (VAR_8) {
        return VAR_1;
    }
    *VAR_6 = VAR_9;
    *VAR_5 = VAR_10;
    return VAR_0;
}
