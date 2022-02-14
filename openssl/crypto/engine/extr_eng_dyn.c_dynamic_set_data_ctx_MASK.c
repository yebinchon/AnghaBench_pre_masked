
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* DYNAMIC_F1; char* DYNAMIC_F2; int dir_load; int * dirs; } ;
typedef TYPE_1__ dynamic_data_ctx ;
typedef int ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;

__attribute__((used)) static int FUNC_9(ENGINE *VAR_4, dynamic_data_ctx **VAR_5)
{
    dynamic_data_ctx *VAR_6 = FUNC_6(sizeof(*VAR_6));
    int VAR_7 = 1;

    if (VAR_6 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }
    VAR_6->dirs = FUNC_8();
    if (VAR_6->dirs == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        FUNC_5(VAR_6);
        return 0;
    }
    VAR_6->DYNAMIC_F1 = "v_check";
    VAR_6->DYNAMIC_F2 = "bind_engine";
    VAR_6->dir_load = 1;
    FUNC_1(VAR_3);
    if ((*VAR_5 = (dynamic_data_ctx *)FUNC_2(VAR_4,
                                                       VAR_2))
        == ((void*)0)) {

        VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_6);
        if (VAR_7) {
            *VAR_5 = VAR_6;
            VAR_6 = ((void*)0);
        }
    }
    FUNC_0(VAR_3);




    if (VAR_6)
        FUNC_7(VAR_6->dirs);
    FUNC_5(VAR_6);
    return VAR_7;
}
