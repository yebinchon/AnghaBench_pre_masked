
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ra_fbo {TYPE_2__* tex; scalar_t__ flip; } ;
struct gl_transform {int dummy; } ;
struct TYPE_3__ {int h; int w; } ;
struct TYPE_4__ {TYPE_1__ params; } ;


 int FUNC_0 (struct gl_transform*,int ,int ,int ,int) ;

void FUNC_1(struct gl_transform *VAR_0, struct ra_fbo VAR_1)
{
    int VAR_2 = VAR_1.flip ? -1 : 1;
    FUNC_0(VAR_0, 0, VAR_1.tex->params.w, 0, VAR_1.tex->params.h * VAR_2);
}
