
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u64 ;
struct trace_entry {scalar_t__ data; } ;


 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct trace_entry *VAR_0)
{
 u64 *VAR_1, *VAR_2, *VAR_3;
 char *VAR_4;

 VAR_1 = (u64 *)VAR_0->data;
 VAR_2 = VAR_1++;
 VAR_3 = VAR_1;

 VAR_4 = FUNC_1(*VAR_2);
 if (VAR_4)
  FUNC_0("register %-10s = 0x%016llx\n", VAR_4, *VAR_3);
 else
  FUNC_0("register %lld = 0x%016llx\n", *VAR_2, *VAR_3);
}
