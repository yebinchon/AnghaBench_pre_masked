
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_err_t ;
struct TYPE_3__ {int log_error; int log; } ;
typedef TYPE_1__ ngx_connection_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(ngx_connection_t *VAR_73, int VAR_74, ngx_err_t VAR_75,
    char *VAR_76)
{
    int VAR_77;
    ngx_uint_t VAR_78;

    VAR_78 = VAR_10;

    if (VAR_74 == VAR_14) {

        if (VAR_75 == VAR_2



            || VAR_75 == VAR_8
            || VAR_75 == VAR_7
            || VAR_75 == VAR_9
            || VAR_75 == VAR_1
            || VAR_75 == VAR_5
            || VAR_75 == VAR_6
            || VAR_75 == VAR_3
            || VAR_75 == VAR_4)
        {
            switch (VAR_73->log_error) {

            case 129:
            case 128:
                VAR_78 = VAR_12;
                break;

            case 130:
                VAR_78 = VAR_11;
                break;

            default:
                break;
            }
        }

    } else if (VAR_74 == VAR_13) {

        VAR_77 = FUNC_0(FUNC_1());


        if (VAR_77 == VAR_15






            || VAR_77 == VAR_16
            || VAR_77 == VAR_21
            || VAR_77 == VAR_22
            || VAR_77 == VAR_23
            || VAR_77 == VAR_24
            || VAR_77 == VAR_25
            || VAR_77 == VAR_27



            || VAR_77 == VAR_29
            || VAR_77 == VAR_31
            || VAR_77 == VAR_32
            || VAR_77 == VAR_37
            || VAR_77 == VAR_65
            || VAR_77 == VAR_66
            || VAR_77 == VAR_67
            || VAR_77 == VAR_68



            || VAR_77 == VAR_70



            || VAR_77 == VAR_72
            || VAR_77 == VAR_20
            || VAR_77 == 1000
            )
        {
            switch (VAR_73->log_error) {

            case 129:
            case 128:
                VAR_78 = VAR_12;
                break;

            case 130:
                VAR_78 = VAR_11;
                break;

            default:
                break;
            }
        }
    }

    FUNC_2(VAR_78, VAR_73->log, VAR_75, VAR_76);
}
