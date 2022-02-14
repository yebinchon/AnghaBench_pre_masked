
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct lfs2_gstate {int dummy; } ;



__attribute__((used)) static inline bool FUNC_0(const struct lfs2_gstate *VAR_0) {
    for (int VAR_1 = 0; VAR_1 < 3; VAR_1++) {
        if (((uint32_t*)VAR_0)[VAR_1] != 0) {
            return 0;
        }
    }
    return 1;
}
