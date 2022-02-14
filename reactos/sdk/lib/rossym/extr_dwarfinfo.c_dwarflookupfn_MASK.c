
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_6__ {scalar_t__ tag; scalar_t__ lowpc; scalar_t__ highpc; } ;
struct TYPE_7__ {TYPE_1__ attrs; } ;
typedef TYPE_2__ DwarfSym ;
typedef int Dwarf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (char*,scalar_t__) ;

int
FUNC_3(Dwarf *VAR_1, ulong VAR_2, ulong VAR_3, DwarfSym *VAR_4)
{
 if(FUNC_0(VAR_1, VAR_2, VAR_4) < 0)
  return -1;

 if(FUNC_1(VAR_1, VAR_4, 0) != 1)
  return -1;


 while(FUNC_1(VAR_1, VAR_4, 1) == 1){
  if(VAR_4->attrs.tag != VAR_0)
   continue;
  if(VAR_4->attrs.lowpc <= VAR_3 && VAR_3 < VAR_4->attrs.highpc)
   return 0;
 }
 FUNC_2("fn containing pc 0x%lux not found", VAR_3);
 return -1;
}
