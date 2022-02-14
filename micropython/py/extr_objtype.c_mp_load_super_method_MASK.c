
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qstr ;
typedef int mp_obj_t ;
struct TYPE_4__ {int * member_0; } ;
struct TYPE_5__ {int member_2; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_2__ mp_obj_super_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_0 ;

void FUNC_2(qstr VAR_1, mp_obj_t *VAR_2) {
    mp_obj_super_t VAR_3 = {VAR_0, VAR_2[1], &VAR_2[2]};
    FUNC_1(FUNC_0(&VAR_3), VAR_1, VAR_2);
}
