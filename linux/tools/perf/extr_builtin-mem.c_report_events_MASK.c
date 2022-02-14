
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_mem {int operation; scalar_t__ phys_addr; scalar_t__ dump_raw; } ;


 int VAR_0 ;
 char** FUNC_0 (int,int) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (struct perf_mem*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, const char **VAR_2, struct perf_mem *VAR_3)
{
 const char **VAR_4;
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8;

 if (VAR_3->dump_raw)
  return FUNC_3(VAR_3);

 VAR_8 = VAR_1 + 3;
 VAR_4 = FUNC_0(VAR_8 + 1, sizeof(char *));
 if (!VAR_4)
  return -1;

 VAR_4[VAR_6++] = "report";
 VAR_4[VAR_6++] = "--mem-mode";
 VAR_4[VAR_6++] = "-n";





 if (!(VAR_3->operation & VAR_0)) {
  if (VAR_3->phys_addr)
   VAR_4[VAR_6++] = "--sort=mem,sym,dso,symbol_daddr,"
     "dso_daddr,tlb,locked,phys_daddr";
  else
   VAR_4[VAR_6++] = "--sort=mem,sym,dso,symbol_daddr,"
     "dso_daddr,tlb,locked";
 } else if (VAR_3->phys_addr)
  VAR_4[VAR_6++] = "--sort=local_weight,mem,sym,dso,symbol_daddr,"
    "dso_daddr,snoop,tlb,locked,phys_daddr";

 for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7++, VAR_6++)
  VAR_4[VAR_6] = VAR_2[VAR_7];

 VAR_5 = FUNC_1(VAR_6, VAR_4);
 FUNC_2(VAR_4);
 return VAR_5;
}
