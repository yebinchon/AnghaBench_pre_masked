
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int init; } ;
typedef TYPE_1__ effect_params_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(effect_params_t *VAR_3) {
    if (!VAR_3->init) {
        return 0;
    }

    FUNC_0(VAR_2, VAR_1);
    for (uint8_t VAR_4 = VAR_2; VAR_4 < VAR_1; VAR_4++) {
        FUNC_1(VAR_4, 0, 0, 0);
    }
    return VAR_1 < VAR_0;
}
