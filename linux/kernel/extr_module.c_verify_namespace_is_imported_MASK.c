
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int name; } ;
struct load_info {int dummy; } ;
struct kernel_symbol {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct load_info const*,char*) ;
 char* FUNC_1 (struct load_info const*,char*,char*) ;
 int FUNC_2 (struct kernel_symbol const*) ;
 char* FUNC_3 (struct kernel_symbol const*) ;
 int FUNC_4 (char*,int ,int ,char const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const struct load_info *VAR_1,
     const struct kernel_symbol *VAR_2,
     struct module *VAR_3)
{
 const char *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_1, "import_ns");
  while (VAR_5) {
   if (FUNC_6(VAR_4, VAR_5) == 0)
    return 0;
   VAR_5 = FUNC_1(
    VAR_1, "import_ns", VAR_5);
  }



  FUNC_4(

   "%s: module uses symbol (%s) from namespace %s, but does not import it.\n",
   VAR_3->name, FUNC_2(VAR_2), VAR_4);

  return -VAR_0;

 }
 return 0;
}
