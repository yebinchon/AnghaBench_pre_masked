
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_5__ {int map; } ;
typedef TYPE_1__ mp_obj_dict_t ;
struct TYPE_6__ {int value; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;

mp_obj_t FUNC_5(mp_obj_t VAR_1, mp_obj_t VAR_2, mp_obj_t VAR_3) {
    FUNC_1(FUNC_4(VAR_1));
    mp_obj_dict_t *VAR_4 = FUNC_0(VAR_1);
    FUNC_2(VAR_4);
    FUNC_3(&VAR_4->map, VAR_2, VAR_0)->value = VAR_3;
    return VAR_1;
}
