
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_14__ {TYPE_2__ info; } ;
struct TYPE_11__ {scalar_t__ p; } ;
struct TYPE_13__ {TYPE_1__ b; } ;
typedef TYPE_3__ DwarfSym ;
typedef TYPE_4__ Dwarf ;


 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;

int
FUNC_2(Dwarf *VAR_0, ulong VAR_1, ulong VAR_2, DwarfSym *VAR_3)
{
 if(FUNC_0(VAR_0, VAR_1, VAR_3) < 0)
  return -1;
 VAR_3->b.p = VAR_0->info.data + VAR_1 + VAR_2;
 if(FUNC_1(VAR_0, VAR_3, 0) != 1)
  return -1;
 return 0;
}
