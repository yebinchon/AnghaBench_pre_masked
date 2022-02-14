
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tilegx_pipeline ;
struct tilegx_opcode {int pipes; } ;


 int VAR_0 ;

tilegx_pipeline FUNC_0(const struct tilegx_opcode* VAR_1)
{

 int VAR_2;
 for (VAR_2 = 0; ((VAR_1->pipes & (1 << VAR_2)) == 0 && VAR_2 < VAR_0); VAR_2++)
  ;
 return (tilegx_pipeline)(VAR_2);
}
