
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_sym {unsigned long address; int name; } ;
struct dump_data {int sym_count; unsigned long address_call_base; struct kernel_sym* sym_mapping; } ;
typedef int buff ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (struct kernel_sym*) ;
 int VAR_0 ;
 int FUNC_4 (struct kernel_sym*,size_t,int,int ) ;
 void* FUNC_5 (struct kernel_sym*,int,int) ;
 int FUNC_6 (char*,char*,void**,int ) ;
 int FUNC_7 (int ,char*) ;

void FUNC_8(struct dump_data *VAR_1)
{
 struct kernel_sym *VAR_2;
 char VAR_3[256];
 void *VAR_4, *VAR_5;
 FILE *VAR_6;

 VAR_6 = FUNC_2("/proc/kallsyms", "r");
 if (!VAR_6)
  return;

 while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_6)) {
  VAR_4 = FUNC_5(VAR_1->sym_mapping, VAR_1->sym_count + 1,
       sizeof(*VAR_1->sym_mapping));
  if (!VAR_4) {
out:
   FUNC_3(VAR_1->sym_mapping);
   VAR_1->sym_mapping = ((void*)0);
   FUNC_0(VAR_6);
   return;
  }
  VAR_1->sym_mapping = VAR_4;
  VAR_2 = &VAR_1->sym_mapping[VAR_1->sym_count];
  if (FUNC_6(VAR_3, "%p %*c %s", &VAR_5, VAR_2->name) != 2)
   continue;
  VAR_2->address = (unsigned long)VAR_5;
  if (!FUNC_7(VAR_2->name, "__bpf_call_base")) {
   VAR_1->address_call_base = VAR_2->address;

   if (!VAR_2->address)
    goto out;
  }
  if (VAR_2->address)
   VAR_1->sym_count++;
 }

 FUNC_0(VAR_6);

 FUNC_4(VAR_1->sym_mapping, VAR_1->sym_count,
       sizeof(*VAR_1->sym_mapping), VAR_0);
}
