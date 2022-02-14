
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int visualizer_user_data_t ;
typedef int uint8_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static uint8_t FUNC_2(visualizer_user_data_t* VAR_0) {
    uint8_t VAR_1 = FUNC_0(VAR_0);
    if (VAR_1!=0) {
        for (int VAR_2=VAR_1; VAR_2 < 3; VAR_2++) {
            if (FUNC_1(VAR_0, VAR_2)) {
                return VAR_2 + 1;
            }
        }
    }

    return 0;
}
