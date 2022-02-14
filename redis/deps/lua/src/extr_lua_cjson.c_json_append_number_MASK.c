
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int strbuf_t ;
typedef int lua_State ;
struct TYPE_4__ {int encode_invalid_numbers; int encode_number_precision; } ;
typedef TYPE_1__ json_config_t ;


 int VAR_0 ;
 int FUNC_0 (int ,double,int ) ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int,char*) ;
 double FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(lua_State *VAR_1, json_config_t *VAR_2,
                               strbuf_t *VAR_3, int VAR_4)
{
    double VAR_5 = FUNC_4(VAR_1, VAR_4);
    int VAR_6;

    if (VAR_2->encode_invalid_numbers == 0) {

        if (FUNC_1(VAR_5) || FUNC_2(VAR_5))
            FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, "must not be NaN or Inf");
    } else if (VAR_2->encode_invalid_numbers == 1) {


        if (FUNC_2(VAR_5)) {
            FUNC_5(VAR_3, "nan", 3);
            return;
        }
    } else {

        if (FUNC_1(VAR_5) || FUNC_2(VAR_5)) {
            FUNC_5(VAR_3, "null", 4);
            return;
        }
    }

    FUNC_7(VAR_3, VAR_0);
    VAR_6 = FUNC_0(FUNC_6(VAR_3), VAR_5, VAR_2->encode_number_precision);
    FUNC_8(VAR_3, VAR_6);
}
