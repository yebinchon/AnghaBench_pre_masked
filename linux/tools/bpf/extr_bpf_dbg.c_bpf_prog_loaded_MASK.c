
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(void)
{
 if (VAR_0 == 0)
  FUNC_0("no bpf program loaded!\n");

 return VAR_0 > 0;
}
