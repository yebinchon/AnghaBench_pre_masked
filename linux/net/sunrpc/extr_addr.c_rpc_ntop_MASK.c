
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;




 size_t FUNC_0 (struct sockaddr const*,char*,size_t const) ;
 size_t FUNC_1 (struct sockaddr const*,char*,size_t const) ;

size_t FUNC_2(const struct sockaddr *VAR_0, char *VAR_1, const size_t VAR_2)
{
 switch (VAR_0->sa_family) {
 case 129:
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 case 128:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 }

 return 0;
}
