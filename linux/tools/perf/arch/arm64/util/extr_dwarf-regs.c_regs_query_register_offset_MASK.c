
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs_dwarfnum {int dwarfnum; int * name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct pt_regs_dwarfnum* VAR_1 ;
 int FUNC_1 (int *,char const*) ;

int FUNC_2(const char *VAR_2)
{
 const struct pt_regs_dwarfnum *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); VAR_3++)
  if (!FUNC_1(VAR_3->name, VAR_2))
   return FUNC_0(VAR_3->dwarfnum);
 return -VAR_0;
}
