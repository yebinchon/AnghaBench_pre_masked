
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct net {int dummy; } ;


 size_t FUNC_0 (char const*,size_t const,struct sockaddr*,size_t const) ;
 size_t FUNC_1 (struct net*,char const*,size_t const,struct sockaddr*,size_t const) ;

size_t FUNC_2(struct net *VAR_0, const char *VAR_1, const size_t VAR_2,
  struct sockaddr *VAR_3, const size_t VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (VAR_1[VAR_5] == ':')
   return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
