
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {int y1; int x1; int y0; int x0; } ;
struct mp_image {int dummy; } ;


 int FUNC_0 (struct mp_image*,int ,int ,int ,int ) ;

void FUNC_1(struct mp_image *VAR_0, struct mp_rect VAR_1)
{
    FUNC_0(VAR_0, VAR_1.x0, VAR_1.y0, VAR_1.x1, VAR_1.y1);
}
