
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_6__ {scalar_t__ tag; } ;
struct TYPE_7__ {TYPE_1__ attrs; } ;
typedef TYPE_2__ DwarfSym ;
typedef int Dwarf ;


 scalar_t__ FUNC_0 (int *,scalar_t__,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (char*,scalar_t__) ;

int
FUNC_3(Dwarf *VAR_0, ulong VAR_1, ulong VAR_2, DwarfSym *VAR_3)
{
 if(FUNC_0(VAR_0, VAR_1, VAR_3) < 0) {
  return -1;
 }

 FUNC_1(VAR_0, VAR_3, 0);
 if(VAR_3->attrs.tag == VAR_2) {
  return 0;
 }
 while(FUNC_1(VAR_0, VAR_3, 1) == 1)
  if(VAR_3->attrs.tag == VAR_2) {
   return 0;
  }
 FUNC_2("symbol with tag 0x%lux not found", VAR_2);
 return -1;
}
