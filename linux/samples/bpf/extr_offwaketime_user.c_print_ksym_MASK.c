
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksym {char* name; } ;
typedef int __u64 ;


 scalar_t__ VAR_0 ;
 struct ksym* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(__u64 VAR_1)
{
 struct ksym *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) {
  FUNC_1("ksym not found. Is kallsyms loaded?\n");
  return;
 }

 if (VAR_0)
  FUNC_1("%s/%llx;", VAR_2->name, VAR_1);
 else
  FUNC_1("%s;", VAR_2->name);
}
