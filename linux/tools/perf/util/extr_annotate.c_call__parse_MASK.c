
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map_symbol {struct map* map; } ;
struct map {int (* map_ip ) (struct map*,int ) ;} ;
struct TYPE_4__ {scalar_t__ addr; int sym; int * name; } ;
struct ins_operands {char* raw; TYPE_2__ target; } ;
struct TYPE_3__ {char skip_functions_char; } ;
struct arch {TYPE_1__ objdump; } ;
struct addr_map_symbol {int sym; int addr; struct map* map; } ;


 int FUNC_0 (struct map*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct map*,int ) ;
 scalar_t__ FUNC_2 (struct addr_map_symbol*) ;
 char* FUNC_3 (char*,char) ;
 int * FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 void* FUNC_6 (char*,char**,int) ;
 int FUNC_7 (struct map*,int ) ;

__attribute__((used)) static int FUNC_8(struct arch *VAR_0, struct ins_operands *VAR_1, struct map_symbol *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 struct map *VAR_6 = VAR_2->map;
 struct addr_map_symbol VAR_7 = {
  .map = VAR_6,
 };

 VAR_1->target.addr = FUNC_6(VAR_1->raw, &VAR_3, 16);

 VAR_5 = FUNC_3(VAR_3, '<');
 if (VAR_5 == ((void*)0))
  goto indirect_call;

 VAR_5++;

 if (VAR_0->objdump.skip_functions_char &&
     FUNC_3(VAR_5, VAR_0->objdump.skip_functions_char))
  return -1;

 VAR_4 = FUNC_3(VAR_5, '>');
 if (VAR_4 == ((void*)0))
  return -1;

 *VAR_4 = '\0';
 VAR_1->target.name = FUNC_4(VAR_5);
 *VAR_4 = '>';

 if (VAR_1->target.name == ((void*)0))
  return -1;
find_target:
 VAR_7.addr = FUNC_0(VAR_6, VAR_1->target.addr);

 if (FUNC_2(&VAR_7) == 0 &&
     FUNC_1(VAR_7.map, VAR_6->map_ip(VAR_7.map, VAR_7.addr)) == VAR_1->target.addr)
  VAR_1->target.sym = VAR_7.sym;

 return 0;

indirect_call:
 VAR_4 = FUNC_3(VAR_3, '*');
 if (VAR_4 != ((void*)0)) {
  VAR_3++;



  if (FUNC_5(VAR_3, "(%r") == ((void*)0))
   VAR_1->target.addr = FUNC_6(VAR_3, ((void*)0), 16);
 }
 goto find_target;
}
