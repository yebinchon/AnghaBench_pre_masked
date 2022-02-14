
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int * name; } ;
struct addr_location {int dummy; } ;


 unsigned long FUNC_0 (struct symbol*,struct addr_location*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct symbol *VAR_0, struct addr_location *VAR_1,
        bool VAR_2, char *VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_0 || !VAR_0->name[0])
  return FUNC_1(VAR_3, VAR_4, "%s", "[unknown]");

 if (!VAR_2)
  return FUNC_1(VAR_3, VAR_4, "%s", VAR_0->name);

 VAR_5 = FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_3, VAR_4, "%s+0x%x", VAR_0->name, VAR_5);
}
