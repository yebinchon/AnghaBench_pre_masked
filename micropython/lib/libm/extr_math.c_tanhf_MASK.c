
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int) ;

float FUNC_1(float VAR_0) {
    int VAR_1 = 0;
    if (VAR_0 < 0) {
        VAR_1 = 1;
        VAR_0 = -VAR_0;
    }
    VAR_0 = FUNC_0(-2 * VAR_0);
    VAR_0 = VAR_0 / (VAR_0 + 2);
    return VAR_1 ? VAR_0 : -VAR_0;
}
