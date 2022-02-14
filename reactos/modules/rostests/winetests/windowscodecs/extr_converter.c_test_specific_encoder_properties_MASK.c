
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ var_type; scalar_t__ initial_var_type; scalar_t__ i_init_val; scalar_t__ f_init_val; scalar_t__ name; scalar_t__ skippable; } ;
typedef TYPE_1__ property_opt_test_data ;
typedef int VARIANT ;
struct TYPE_8__ {scalar_t__ vt; scalar_t__ dwType; scalar_t__ cfType; scalar_t__ pstrName; int member_0; } ;
typedef TYPE_2__ PROPBAG2 ;
typedef scalar_t__ LPOLESTR ;
typedef int IPropertyBag2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int,TYPE_2__*,int *,int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;


 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,TYPE_2__*,int) ;
 int VAR_4 ;
 int FUNC_6 (int,char*,int ,...) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(IPropertyBag2 *VAR_5, const property_opt_test_data* VAR_6, PROPBAG2* VAR_7, int VAR_8)
{
    HRESULT VAR_9;
    int VAR_10 = 0;
    VARIANT VAR_11;
    HRESULT VAR_12 = VAR_1;

    while (VAR_6[VAR_10].name)
    {
        int VAR_13 = FUNC_5(VAR_6[VAR_10].name, VAR_7, VAR_8);
        PROPBAG2 VAR_14 = {0};
        VAR_14.pstrName = (LPOLESTR)VAR_6[VAR_10].name;

        VAR_9 = FUNC_0(VAR_5, 1, &VAR_14, ((void*)0), &VAR_11, &VAR_12);

        if (VAR_6[VAR_10].skippable && VAR_13 == -1)
        {
            FUNC_7("Property %s is not supported on this machine.\n", FUNC_8(VAR_6[VAR_10].name));
            VAR_10++;
            continue;
        }

        FUNC_6(VAR_13 >= 0, "Property %s not in output of GetPropertyInfo\n",
           FUNC_8(VAR_6[VAR_10].name));
        if (VAR_13 >= 0)
        {
            FUNC_6(VAR_7[VAR_13].vt == VAR_6[VAR_10].var_type, "Property %s has unexpected vt type, vt=%i\n",
               FUNC_8(VAR_6[VAR_10].name), VAR_7[VAR_13].vt);
            FUNC_6(VAR_7[VAR_13].dwType == VAR_0, "Property %s has unexpected dw type, vt=%i\n",
               FUNC_8(VAR_6[VAR_10].name), VAR_7[VAR_13].dwType);
            FUNC_6(VAR_7[VAR_13].cfType == 0, "Property %s has unexpected cf type, vt=%i\n",
               FUNC_8(VAR_6[VAR_10].name), VAR_7[VAR_13].cfType);
        }

        FUNC_6(FUNC_1(VAR_9), "Reading property %s from bag failed, hr=%x\n",
           FUNC_8(VAR_6[VAR_10].name), VAR_9);

        if (FUNC_1(VAR_9))
        {

            FUNC_6(FUNC_3(&VAR_11) == VAR_6[VAR_10].initial_var_type || FUNC_3(&VAR_11) == VAR_2,
               "Property %s has unexpected initial type, V_VT=%i\n",
               FUNC_8(VAR_6[VAR_10].name), FUNC_3(&VAR_11));

            if(FUNC_3(&VAR_11) == VAR_6[VAR_10].initial_var_type)
            {
                switch (VAR_6[VAR_10].initial_var_type)
                {
                    case 130:
                    case 128:
                        FUNC_6(FUNC_2(&VAR_11, VAR_3) == VAR_6[VAR_10].i_init_val, "Property %s has an unexpected initial value, pvarValue=%i\n",
                           FUNC_8(VAR_6[VAR_10].name), FUNC_2(&VAR_11, VAR_3));
                        break;
                    case 129:
                        FUNC_6(FUNC_2(&VAR_11, VAR_4) == VAR_6[VAR_10].f_init_val, "Property %s has an unexpected initial value, pvarValue=%f\n",
                           FUNC_8(VAR_6[VAR_10].name), FUNC_2(&VAR_11, VAR_4));
                        break;
                    default:
                        break;
                }
            }

            FUNC_4(&VAR_11);
        }

        VAR_10++;
    }
}
