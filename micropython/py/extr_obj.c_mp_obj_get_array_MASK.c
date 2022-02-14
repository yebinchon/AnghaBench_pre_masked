
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,size_t*,int **) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ,size_t*,int **) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

void FUNC_7(mp_obj_t VAR_5, size_t *VAR_6, mp_obj_t **VAR_7) {
    if (FUNC_1(VAR_5, &VAR_4)) {
        FUNC_4(VAR_5, VAR_6, VAR_7);
    } else if (FUNC_1(VAR_5, &VAR_3)) {
        FUNC_2(VAR_5, VAR_6, VAR_7);
    } else {
        if (VAR_0 == VAR_1) {
            FUNC_5("expected tuple/list");
        } else {
            FUNC_6(FUNC_3(&VAR_2,
                "object '%s' isn't a tuple or list", FUNC_0(VAR_5)));
        }
    }
}
