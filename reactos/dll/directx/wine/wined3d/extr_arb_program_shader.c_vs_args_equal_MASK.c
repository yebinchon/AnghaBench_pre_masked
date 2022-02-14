
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ samplers_compare; } ;
struct TYPE_5__ {scalar_t__ boolclip_compare; } ;
struct TYPE_4__ {int const swizzle_map; scalar_t__ clip_enabled; scalar_t__ fog_src; } ;
struct arb_vs_compile_args {scalar_t__ ps_signature; int loop_ctrl; TYPE_3__ vertex; TYPE_2__ clip; TYPE_1__ super; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline BOOL FUNC_1(const struct arb_vs_compile_args *VAR_2, const struct arb_vs_compile_args *VAR_3,
                                 const DWORD VAR_4, BOOL VAR_5) {
    if((VAR_2->super.swizzle_map & VAR_4) != VAR_3->super.swizzle_map) return VAR_0;
    if(VAR_2->super.clip_enabled != VAR_3->super.clip_enabled) return VAR_0;
    if(VAR_2->super.fog_src != VAR_3->super.fog_src) return VAR_0;
    if(VAR_2->clip.boolclip_compare != VAR_3->clip.boolclip_compare) return VAR_0;
    if(VAR_2->ps_signature != VAR_3->ps_signature) return VAR_0;
    if(VAR_2->vertex.samplers_compare != VAR_3->vertex.samplers_compare) return VAR_0;
    if(VAR_5) return VAR_1;

    return !FUNC_0(VAR_2->loop_ctrl, VAR_3->loop_ctrl, sizeof(VAR_2->loop_ctrl));
}
