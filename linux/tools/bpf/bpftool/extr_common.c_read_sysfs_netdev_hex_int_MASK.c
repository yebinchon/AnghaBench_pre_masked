
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int full_path ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const char *VAR_1)
{
 char VAR_2[64];

 FUNC_1(VAR_2, sizeof(VAR_2), "/sys/class/net/%s/device/%s",
   VAR_0, VAR_1);

 return FUNC_0(VAR_2);
}
