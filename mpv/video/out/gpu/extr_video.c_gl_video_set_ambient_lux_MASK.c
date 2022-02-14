
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gamma; scalar_t__ gamma_auto; } ;
struct gl_video {TYPE_1__ opts; } ;


 int FUNC_0 (struct gl_video*,char*,int,int ) ;
 int FUNC_1 (double,double,double,double,int) ;

void FUNC_2(struct gl_video *VAR_0, int VAR_1)
{
    if (VAR_0->opts.gamma_auto) {
        VAR_0->opts.gamma = FUNC_1(16.0, 256.0, 1.0, 1.2, VAR_1);
        FUNC_0(VAR_0, "ambient light changed: %d lux (gamma: %f)\n", VAR_1,
                 VAR_0->opts.gamma);
    }
}
