
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,char const*,int,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1, bool VAR_2)
{
 FUNC_0("is_kernel_module",
   (!!FUNC_1(VAR_0, VAR_1)) == (!!VAR_2));
 FUNC_2("%s (cpumode: %d) - is_kernel_module: %s\n",
   VAR_0, VAR_1, VAR_2 ? "true" : "false");
 return 0;
}
