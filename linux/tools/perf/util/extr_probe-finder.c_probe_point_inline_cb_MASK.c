
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct probe_finder {scalar_t__ addr; TYPE_1__* pev; } ;
struct perf_probe_point {scalar_t__ offset; scalar_t__ lazy_line; } ;
struct TYPE_2__ {struct perf_probe_point point; } ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int FUNC_0 (int *,struct probe_finder*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,struct probe_finder*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(Dwarf_Die *VAR_1, void *VAR_2)
{
 struct probe_finder *VAR_3 = VAR_2;
 struct perf_probe_point *VAR_4 = &VAR_3->pev->point;
 Dwarf_Addr VAR_5;
 int VAR_6;

 if (VAR_4->lazy_line)
  VAR_6 = FUNC_3(VAR_1, VAR_3);
 else {

  if (FUNC_2(VAR_1, &VAR_5) != 0) {
   FUNC_5("Failed to get entry address of %s.\n",
       FUNC_1(VAR_1));
   return -VAR_0;
  }
  if (VAR_5 == 0) {
   FUNC_4("%s has no valid entry address. skipped.\n",
     FUNC_1(VAR_1));
   return -VAR_0;
  }
  VAR_3->addr = VAR_5;
  VAR_3->addr += VAR_4->offset;
  FUNC_4("found inline addr: 0x%jx\n",
    (uintmax_t)VAR_3->addr);

  VAR_6 = FUNC_0(VAR_1, VAR_3);
 }

 return VAR_6;
}
