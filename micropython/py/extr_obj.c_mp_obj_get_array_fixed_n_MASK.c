
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t*,int **) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

void FUNC_4(mp_obj_t VAR_3, size_t VAR_4, mp_obj_t **VAR_5) {
    size_t VAR_6;
    FUNC_0(VAR_3, &VAR_6, VAR_5);
    if (VAR_6 != VAR_4) {
        if (VAR_0 == VAR_1) {
            FUNC_2("tuple/list has wrong length");
        } else {
            FUNC_3(FUNC_1(&VAR_2,
                "requested length %d but object has length %d", (int)VAR_4, (int)VAR_6));
        }
    }
}
