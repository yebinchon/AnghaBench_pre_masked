
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirs; struct TYPE_3__* engine_id; struct TYPE_3__* DYNAMIC_LIBNAME; int dynamic_dso; } ;
typedef TYPE_1__ dynamic_data_ctx ;
typedef int CRYPTO_EX_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2,
                                       CRYPTO_EX_DATA *VAR_3, int VAR_4, long VAR_5,
                                       void *VAR_6)
{
    if (VAR_2) {
        dynamic_data_ctx *VAR_7 = (dynamic_data_ctx *)VAR_2;
        FUNC_0(VAR_7->dynamic_dso);
        FUNC_1(VAR_7->DYNAMIC_LIBNAME);
        FUNC_1(VAR_7->engine_id);
        FUNC_2(VAR_7->dirs, VAR_0);
        FUNC_1(VAR_7);
    }
}
