
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect_f {scalar_t__ y1; scalar_t__ y0; scalar_t__ x1; scalar_t__ x0; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct mp_rect_f VAR_0, struct mp_rect_f VAR_1)
{
    return FUNC_0(VAR_0.x0 - VAR_1.x0) < 1e-6 && FUNC_0(VAR_0.x1 - VAR_1.x1) < 1e-6 &&
           FUNC_0(VAR_0.y0 - VAR_1.y0) < 1e-6 && FUNC_0(VAR_0.y1 - VAR_1.y1) < 1e-6;
}
