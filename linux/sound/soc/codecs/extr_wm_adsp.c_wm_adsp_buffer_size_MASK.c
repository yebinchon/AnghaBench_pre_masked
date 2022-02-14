
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wm_adsp_compr_buf {TYPE_3__* regions; TYPE_2__* dsp; } ;
struct TYPE_8__ {TYPE_1__* caps; } ;
struct TYPE_7__ {int cumulative_size; } ;
struct TYPE_6__ {size_t fw; } ;
struct TYPE_5__ {int num_regions; } ;


 TYPE_4__* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct wm_adsp_compr_buf *VAR_1)
{
 int VAR_2 = VAR_0[VAR_1->dsp->fw].caps->num_regions - 1;

 return VAR_1->regions[VAR_2].cumulative_size;
}
