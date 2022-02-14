
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_chain {TYPE_1__* track; } ;
struct mp_image_params {int imgfmt; int member_0; } ;
struct m_property {int dummy; } ;
struct TYPE_4__ {struct vo_chain* vo_chain; } ;
struct TYPE_3__ {int dec; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mp_image_params*) ;
 int FUNC_1 (struct mp_image_params,int,void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct m_property *VAR_2,
                                    int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    struct mp_image_params VAR_6 = {0};
    struct vo_chain *VAR_7 = VAR_5->vo_chain;
    if (VAR_7 && VAR_7->track)
        FUNC_0(VAR_7->track->dec, &VAR_6);
    if (!VAR_6.imgfmt)
        return VAR_0;
    return FUNC_1(VAR_6, VAR_3, VAR_4);
}
