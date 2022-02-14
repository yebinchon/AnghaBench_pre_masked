
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_scheduler {int dummy; } ;


 struct ip_vs_scheduler* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;

struct ip_vs_scheduler *FUNC_2(const char *VAR_0)
{
 struct ip_vs_scheduler *VAR_1;




 VAR_1 = FUNC_0(VAR_0);




 if (VAR_1 == ((void*)0)) {
  FUNC_1("ip_vs_%s", VAR_0);
  VAR_1 = FUNC_0(VAR_0);
 }

 return VAR_1;
}
