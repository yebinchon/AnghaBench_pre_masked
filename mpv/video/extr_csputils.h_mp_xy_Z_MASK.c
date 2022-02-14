
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_csp_col_xy {int x; int y; } ;



__attribute__((used)) static inline float FUNC_0(struct mp_csp_col_xy VAR_0) {
    return (1 - VAR_0.x - VAR_0.y) / VAR_0.y;
}
