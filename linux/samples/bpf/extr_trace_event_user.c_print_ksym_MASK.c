
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksym {char* name; } ;
typedef int __u64 ;


 struct ksym* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(__u64 VAR_2)
{
 struct ksym *VAR_3;

 if (!VAR_2)
  return;
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {
  FUNC_1("ksym not found. Is kallsyms loaded?\n");
  return;
 }

 FUNC_1("%s;", VAR_3->name);
 if (!FUNC_2(VAR_3->name, "sys_read"))
  VAR_0 = 1;
 else if (!FUNC_2(VAR_3->name, "sys_write"))
  VAR_1 = 1;
}
