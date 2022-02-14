
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;


 int FUNC_0 (struct in6_addr const*,struct in6_addr const*,int) ;
 int FUNC_1 (char*,unsigned int const,char*,struct in6_addr const*,char,struct in6_addr const*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, const unsigned int VAR_1,
         const struct in6_addr *VAR_2,
         const struct in6_addr *VAR_3)
{
 FUNC_1(VAR_0, VAR_1, "%pI6c%c%pI6c", VAR_2,
   !FUNC_0(VAR_2, VAR_3, 16) ? '\0' : '-', VAR_3);
}
