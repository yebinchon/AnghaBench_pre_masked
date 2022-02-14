
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct image {size_t type; } ;
struct TYPE_5__ {int gamma; } ;
struct TYPE_6__ {TYPE_2__ color; } ;
struct TYPE_4__ {int deband_opts; } ;
struct gl_video {TYPE_3__ image_params; int lfg; TYPE_1__ opts; int sc; } ;
struct gl_transform {int dummy; } ;


 int FUNC_0 (struct gl_video*,char*,int ) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_1, struct image VAR_2,
                        struct gl_transform *VAR_3, void *VAR_4)
{
    FUNC_0(VAR_1, "debanding (%s)", VAR_0[VAR_2.type]);
    FUNC_1(VAR_1->sc, VAR_1->opts.deband_opts, &VAR_1->lfg,
                       VAR_1->image_params.color.gamma);
}
