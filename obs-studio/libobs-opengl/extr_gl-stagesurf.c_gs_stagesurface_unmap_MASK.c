
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pack_buffer; } ;
typedef TYPE_1__ gs_stagesurf_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(gs_stagesurf_t *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1->pack_buffer))
  return;

 FUNC_0(VAR_0);
 FUNC_2("glUnmapBuffer");

 FUNC_1(VAR_0, 0);
}
