
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parameters; int * named_curve; } ;
struct TYPE_8__ {int type; TYPE_1__ value; } ;
typedef int EC_GROUP ;
typedef TYPE_2__ ECPKPARAMETERS ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int * FUNC_6 (int const*,int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_8 (int) ;

ECPKPARAMETERS *FUNC_9(const EC_GROUP *VAR_2,
                                            ECPKPARAMETERS *VAR_3)
{
    int VAR_4 = 1, VAR_5;
    ECPKPARAMETERS *VAR_6 = VAR_3;

    if (VAR_6 == ((void*)0)) {
        if ((VAR_6 = FUNC_3()) == ((void*)0)) {
            FUNC_7(VAR_0, VAR_1);
            return ((void*)0);
        }
    } else {
        if (VAR_6->type == 0)
            FUNC_0(VAR_6->value.named_curve);
        else if (VAR_6->type == 1 && VAR_6->value.parameters)
            FUNC_1(VAR_6->value.parameters);
    }

    if (FUNC_4(VAR_2)) {



        VAR_5 = FUNC_5(VAR_2);
        if (VAR_5) {
            VAR_6->type = 0;
            if ((VAR_6->value.named_curve = FUNC_8(VAR_5)) == ((void*)0))
                VAR_4 = 0;
        } else

            VAR_4 = 0;
    } else {

        VAR_6->type = 1;
        if ((VAR_6->value.parameters =
             FUNC_6(VAR_2, ((void*)0))) == ((void*)0))
            VAR_4 = 0;
    }

    if (!VAR_4) {
        FUNC_2(VAR_6);
        return ((void*)0);
    }
    return VAR_6;
}
