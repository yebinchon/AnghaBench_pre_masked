
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_vb_data {int dummy; } ;
typedef int gs_vertbuffer_t ;
struct TYPE_3__ {int (* gs_vertexbuffer_flush_direct ) (int *,struct gs_vb_data const*) ;} ;
struct TYPE_4__ {TYPE_1__ exports; } ;


 int FUNC_0 (char*,int *,struct gs_vb_data const*) ;
 int FUNC_1 (int *,struct gs_vb_data const*) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_vertbuffer_t *VAR_1,
      const struct gs_vb_data *VAR_2)
{
 if (!FUNC_0("gs_vertexbuffer_flush_direct", VAR_1, VAR_2))
  return;

 VAR_0->exports.gs_vertexbuffer_flush_direct(VAR_1, VAR_2);
}
