
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int item ;
typedef int flags ;



__attribute__((used)) static size_t FUNC_0(const uint8_t VAR_0, const unsigned int VAR_1, const int VAR_2,
                     char *VAR_3, uint8_t *VAR_4) {
    if (VAR_1 == 0) {
        *VAR_4 = 0;
    } else {
        *VAR_4 = sizeof(VAR_1);
    }
    return sizeof(item) + VAR_0 + *VAR_4 + VAR_2;
}
