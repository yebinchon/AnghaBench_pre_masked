
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_hw_breakpoint {int version; scalar_t__ condition_value; void* addr2; void* addr; int condition_mode; int addr_mode; int trigger_type; } ;
typedef void* __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,struct ppc_hw_breakpoint*) ;

__attribute__((used)) static int FUNC_3(void *VAR_6, int VAR_7)
{
 int VAR_8;

 struct ppc_hw_breakpoint VAR_9;

 VAR_9.version = 1;
 VAR_9.trigger_type = VAR_3;
 VAR_9.addr_mode = VAR_1;
 if (VAR_7 > 0)
  VAR_9.addr_mode = VAR_2;
 VAR_9.condition_mode = VAR_0;
 VAR_9.addr = (__u64)VAR_6;
 VAR_9.addr2 = (__u64)VAR_6 + VAR_7;
 VAR_9.condition_value = 0;

 VAR_8 = FUNC_2(VAR_4, VAR_5, 0, &VAR_9);
 if (VAR_8 < 0) {
  FUNC_1("Can't set breakpoint\n");
  FUNC_0(-1);
 }
 return VAR_8;
}
