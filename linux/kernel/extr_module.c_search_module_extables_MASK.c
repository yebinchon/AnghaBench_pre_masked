
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int num_exentries; int extable; } ;
struct exception_table_entry {int dummy; } ;


 struct module* FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct exception_table_entry* FUNC_3 (int ,int ,unsigned long) ;

const struct exception_table_entry *FUNC_4(unsigned long VAR_0)
{
 const struct exception_table_entry *VAR_1 = ((void*)0);
 struct module *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  goto out;

 if (!VAR_2->num_exentries)
  goto out;

 VAR_1 = FUNC_3(VAR_2->extable,
      VAR_2->num_exentries,
      VAR_0);
out:
 FUNC_2();





 return VAR_1;
}
