
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ key_length; } ;
struct blake2_mac_data_st {int key; TYPE_1__ params; int ctx; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
    struct blake2_mac_data_st *VAR_3 = VAR_2;


    if (VAR_3->params.key_length == 0) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    return FUNC_0(&VAR_3->ctx, &VAR_3->params, VAR_3->key);
}
