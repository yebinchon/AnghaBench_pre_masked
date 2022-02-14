
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum lockdown_reason { ____Placeholder_lockdown_reason } lockdown_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, enum lockdown_reason VAR_3)
{
 if (VAR_1 >= VAR_3)
  return -VAR_0;

 VAR_1 = VAR_3;
 FUNC_0("Kernel is locked down from %s; see man kernel_lockdown.7\n",
    VAR_2);
 return 0;
}
