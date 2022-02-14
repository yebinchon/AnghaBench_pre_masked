
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int taints; } ;
struct load_info {int dummy; } ;
struct kernel_symbol {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 struct kernel_symbol* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct load_info const*,char const*,struct module*,int const*) ;
 struct kernel_symbol* FUNC_2 (char const*,struct module**,int const**,int,int) ;
 int VAR_3 ;
 int FUNC_3 (struct module*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct module*,struct module*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct load_info const*,struct kernel_symbol const*,struct module*) ;

__attribute__((used)) static const struct kernel_symbol *FUNC_10(struct module *VAR_4,
        const struct load_info *VAR_5,
        const char *VAR_6,
        char VAR_7[])
{
 struct module *VAR_8;
 const struct kernel_symbol *VAR_9;
 const s32 *VAR_10;
 int VAR_11;






 FUNC_7();
 FUNC_4(&VAR_3);
 VAR_9 = FUNC_2(VAR_6, &VAR_8, &VAR_10,
     !(VAR_4->taints & (1 << VAR_2)), 1);
 if (!VAR_9)
  goto unlock;

 if (!FUNC_1(VAR_5, VAR_6, VAR_4, VAR_10)) {
  VAR_9 = FUNC_0(-VAR_0);
  goto getname;
 }

 VAR_11 = FUNC_9(VAR_5, VAR_9, VAR_4);
 if (VAR_11) {
  VAR_9 = FUNC_0(VAR_11);
  goto getname;
 }

 VAR_11 = FUNC_6(VAR_4, VAR_8);
 if (VAR_11) {
  VAR_9 = FUNC_0(VAR_11);
  goto getname;
 }

getname:

 FUNC_8(VAR_7, FUNC_3(VAR_8), VAR_1);
unlock:
 FUNC_5(&VAR_3);
 return VAR_9;
}
