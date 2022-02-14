
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_tool {int dummy; } ;
struct machine {int pid; } ;


 int FUNC_0 (struct perf_tool*,int ,struct machine*) ;
 int FUNC_1 (struct perf_tool*,int ,struct machine*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct machine *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct perf_tool *VAR_4 = VAR_2;
 VAR_3 = FUNC_1(VAR_4, VAR_0,
          VAR_1);
 if (VAR_3 < 0)
  FUNC_2("Couldn't record guest kernel [%d]'s reference"
         " relocation symbol.\n", VAR_1->pid);





 VAR_3 = FUNC_0(VAR_4, VAR_0,
       VAR_1);
 if (VAR_3 < 0)
  FUNC_2("Couldn't record guest kernel [%d]'s reference"
         " relocation symbol.\n", VAR_1->pid);
}
