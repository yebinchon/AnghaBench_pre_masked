
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_vm {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_vm*) ;

int FUNC_1(const struct sockaddr *VAR_1,
      size_t VAR_2, struct sockaddr_vm **VAR_3)
{
 if (VAR_2 < sizeof(**VAR_3))
  return -VAR_0;

 *VAR_3 = (struct sockaddr_vm *)VAR_1;
 return FUNC_0(*VAR_3);
}
