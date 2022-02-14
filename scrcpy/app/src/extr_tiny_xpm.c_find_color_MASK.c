
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct index {char c; scalar_t__ color; } ;



__attribute__((used)) static bool
FUNC_0(struct index *VAR_0, int VAR_1, char VAR_2, uint32_t *VAR_3) {

    for (int VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
        if (VAR_0[VAR_4].c == VAR_2) {
            *VAR_3 = VAR_0[VAR_4].color;
            return 1;
        }
    }
    *VAR_3 = 0;
    return 0;
}
