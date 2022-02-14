
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_handle {TYPE_1__* func_map; scalar_t__ func_count; } ;
struct TYPE_2__ {char* mod; int func; int addr; } ;


 int FUNC_0 (struct tep_handle*) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(struct tep_handle *VAR_0)
{
 int VAR_1;

 if (!VAR_0->func_map)
  FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < (int)VAR_0->func_count; VAR_1++) {
  FUNC_1("%016llx %s",
         VAR_0->func_map[VAR_1].addr,
         VAR_0->func_map[VAR_1].func);
  if (VAR_0->func_map[VAR_1].mod)
   FUNC_1(" [%s]\n", VAR_0->func_map[VAR_1].mod);
  else
   FUNC_1("\n");
 }
}
