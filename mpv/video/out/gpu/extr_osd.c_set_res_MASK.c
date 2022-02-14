
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_osd_res {int w; int h; } ;
struct mpgl_osd {struct mp_osd_res osd_res; } ;


 int FUNC_0 (int,int*) ;

__attribute__((used)) static void FUNC_1(struct mpgl_osd *VAR_0, struct mp_osd_res VAR_1, int VAR_2)
{
    int VAR_3[2];
    FUNC_0(VAR_2, VAR_3);

    VAR_1.w /= VAR_3[0];
    VAR_1.h /= VAR_3[1];
    VAR_0->osd_res = VAR_1;
}
