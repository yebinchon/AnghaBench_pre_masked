
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int visualizer_user_data_t ;
typedef int uint8_t ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static uint8_t FUNC_1(visualizer_user_data_t* VAR_0) {
    for (int VAR_1=0; VAR_1 < 3; VAR_1++) {
        if (FUNC_0(VAR_0, VAR_1)) {
            return VAR_1 + 1;
        }
    }
    return 0;
}
