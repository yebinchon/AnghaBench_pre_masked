
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int name; } ;
struct load_info {int dummy; } ;
struct kernel_symbol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kernel_symbol const*) ;
 int VAR_2 ;
 int FUNC_1 (struct kernel_symbol const*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,char*) ;
 struct kernel_symbol* FUNC_3 (struct module*,struct load_info const*,char const*,char*) ;
 scalar_t__ FUNC_4 (int ,int,int) ;

__attribute__((used)) static const struct kernel_symbol *
FUNC_5(struct module *VAR_4,
      const struct load_info *VAR_5,
      const char *VAR_6)
{
 const struct kernel_symbol *VAR_7;
 char VAR_8[VAR_2];

 if (FUNC_4(VAR_3,
   !FUNC_0(VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8))
   || FUNC_1(VAR_7) != -VAR_0,
          30 * VAR_1) <= 0) {
  FUNC_2("%s: gave up waiting for init of module %s.\n",
   VAR_4->name, VAR_8);
 }
 return VAR_7;
}
