
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_filters {int dummy; } ;
struct addr_filter {int dummy; } ;


 int FUNC_0 (struct addr_filter*) ;
 struct addr_filter* FUNC_1 () ;
 int FUNC_2 (struct addr_filters*,struct addr_filter*) ;
 int FUNC_3 (struct addr_filters*) ;
 int FUNC_4 (struct addr_filter*,char const**) ;

int FUNC_5(struct addr_filters *VAR_0,
        const char *VAR_1)
{
 struct addr_filter *VAR_2;
 const char *VAR_3 = VAR_1;
 int VAR_4;

 while (*VAR_3) {
  VAR_2 = FUNC_1();
  VAR_4 = FUNC_4(VAR_2, &VAR_3);
  if (VAR_4) {
   FUNC_0(VAR_2);
   FUNC_3(VAR_0);
   return VAR_4;
  }
  FUNC_2(VAR_0, VAR_2);
 }

 return 0;
}
