
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_in const*,struct sockaddr_in const*,struct sockaddr_in const*) ;
 int FUNC_1 (struct sockaddr_in6 const*,struct sockaddr_in6 const*,struct sockaddr_in6 const*) ;

int
FUNC_2(const struct sockaddr_storage *VAR_2,
      const struct sockaddr_storage *VAR_3,
      const struct sockaddr_storage *VAR_4)
{
 if (VAR_2->ss_family == VAR_0)
  return FUNC_0((const struct sockaddr_in *) VAR_2,
           (const struct sockaddr_in *) VAR_3,
           (const struct sockaddr_in *) VAR_4);






 else
  return 0;
}
