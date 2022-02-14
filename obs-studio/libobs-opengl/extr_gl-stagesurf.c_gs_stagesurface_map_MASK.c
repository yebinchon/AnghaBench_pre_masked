
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int bytes_per_pixel; int width; int pack_buffer; } ;
typedef TYPE_1__ gs_stagesurf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

bool FUNC_4(gs_stagesurf_t *VAR_3, uint8_t **VAR_4,
    uint32_t *VAR_5)
{
 if (!FUNC_2(VAR_0, VAR_3->pack_buffer))
  goto fail;

 *VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!FUNC_3("glMapBuffer"))
  goto fail;

 FUNC_2(VAR_0, 0);

 *VAR_5 = VAR_3->bytes_per_pixel * VAR_3->width;
 return 1;

fail:
 FUNC_0(VAR_2, "stagesurf_map (GL) failed");
 return 0;
}
