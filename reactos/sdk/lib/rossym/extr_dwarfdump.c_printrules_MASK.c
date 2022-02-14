
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ DwarfExpr ;
typedef int Dwarf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(Dwarf *VAR_1, ulong VAR_2)
{
 int VAR_3;
 DwarfExpr VAR_4[10];
 DwarfExpr VAR_5, VAR_6;

 if(FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_6, VAR_4, FUNC_1(VAR_4)) < 0)
  FUNC_2("\tcannot unwind from pc 0x%lux: %r\n", VAR_2);

 FUNC_2("\tpc=0x%lux cfa=%R ra=%R", VAR_2, &VAR_5, &VAR_6);
 for(VAR_3=0; VAR_3<FUNC_1(VAR_4); VAR_3++)
  if(VAR_4[VAR_3].type != VAR_0)
   FUNC_2(" r%d=%R", VAR_3, &VAR_4[VAR_3]);
 FUNC_2("\n");
}
