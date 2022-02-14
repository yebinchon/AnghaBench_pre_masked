
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect_f {int y1; int x1; int y0; int x0; } ;
struct gl_transform {int dummy; } ;


 int FUNC_0 (struct gl_transform,int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct gl_transform VAR_0, struct mp_rect_f *VAR_1)
{
    FUNC_0(VAR_0, &VAR_1->x0, &VAR_1->y0);
    FUNC_0(VAR_0, &VAR_1->x1, &VAR_1->y1);
}
