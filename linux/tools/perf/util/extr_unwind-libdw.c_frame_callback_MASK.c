
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_info {int max_stack; } ;
typedef int Dwfl_Frame ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int*) ;
 scalar_t__ FUNC_2 (int ,struct unwind_info*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,struct unwind_info*) ;

__attribute__((used)) static int
FUNC_5(Dwfl_Frame *VAR_2, void *VAR_3)
{
 struct unwind_info *VAR_4 = VAR_3;
 Dwarf_Addr VAR_5;
 bool VAR_6;

 if (!FUNC_1(VAR_2, &VAR_5, ((void*)0))) {
  FUNC_3("%s", FUNC_0(-1));
  return VAR_0;
 }


 FUNC_4(VAR_5, VAR_4);

 if (!FUNC_1(VAR_2, &VAR_5, &VAR_6)) {
  FUNC_3("%s", FUNC_0(-1));
  return VAR_0;
 }

 if (!VAR_6)
  --VAR_5;

 return FUNC_2(VAR_5, VAR_4) || !(--VAR_4->max_stack) ?
        VAR_0 : VAR_1;
}
