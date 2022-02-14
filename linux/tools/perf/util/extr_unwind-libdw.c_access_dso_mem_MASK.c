
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct unwind_info {int machine; int thread; } ;
struct addr_location {TYPE_1__* map; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dso; } ;
typedef int Dwarf_Word ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ,scalar_t__,int *,int) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (int ,int ,scalar_t__,struct addr_location*) ;

__attribute__((used)) static int FUNC_3(struct unwind_info *VAR_1, Dwarf_Addr VAR_2,
     Dwarf_Word *VAR_3)
{
 struct addr_location VAR_4;
 ssize_t VAR_5;

 if (!FUNC_2(VAR_1->thread, VAR_0, VAR_2, &VAR_4)) {
  FUNC_1("unwind: no map for %lx\n", (unsigned long)VAR_2);
  return -1;
 }

 if (!VAR_4.map->dso)
  return -1;

 VAR_5 = FUNC_0(VAR_4.map->dso, VAR_4.map, VAR_1->machine,
       VAR_2, (u8 *) VAR_3, sizeof(*VAR_3));

 return !(VAR_5 == sizeof(*VAR_3));
}
