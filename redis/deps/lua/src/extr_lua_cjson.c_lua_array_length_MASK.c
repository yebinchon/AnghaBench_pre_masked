
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int strbuf_t ;
typedef int lua_State ;
struct TYPE_4__ {int encode_sparse_ratio; int encode_sparse_safe; int encode_sparse_convert; } ;
typedef TYPE_1__ json_config_t ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (double) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 double FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1, json_config_t *VAR_2, strbuf_t *VAR_3)
{
    double VAR_4;
    int VAR_5;
    int VAR_6;

    VAR_5 = 0;
    VAR_6 = 0;

    FUNC_4(VAR_1);

    while (FUNC_2(VAR_1, -2) != 0) {

        if (FUNC_6(VAR_1, -2) == VAR_0 &&
            (VAR_4 = FUNC_5(VAR_1, -2))) {

            if (FUNC_0(VAR_4) == VAR_4 && VAR_4 >= 1) {
                if (VAR_4 > VAR_5)
                    VAR_5 = VAR_4;
                VAR_6++;
                FUNC_3(VAR_1, 1);
                continue;
            }
        }


        FUNC_3(VAR_1, 2);
        return -1;
    }


    if (VAR_2->encode_sparse_ratio > 0 &&
        VAR_5 > VAR_6 * VAR_2->encode_sparse_ratio &&
        VAR_5 > VAR_2->encode_sparse_safe) {
        if (!VAR_2->encode_sparse_convert)
            FUNC_1(VAR_1, VAR_2, VAR_3, -1, "excessively sparse array");

        return -1;
    }

    return VAR_5;
}
