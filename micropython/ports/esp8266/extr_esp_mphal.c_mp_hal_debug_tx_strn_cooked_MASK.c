
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char) ;

void FUNC_1(void *VAR_1, const char *VAR_2, uint32_t VAR_3) {
    (void)VAR_1;
    while (VAR_3--) {
        if (*VAR_2 == '\n') {
            FUNC_0(VAR_0, '\r');
        }
        FUNC_0(VAR_0, *VAR_2++);
    }
}
