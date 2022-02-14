
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct sockaddr {int dummy; } ;
struct sadb_address {int dummy; } ;


 int FUNC_0 (struct sockaddr*,int *) ;

__attribute__((used)) static
int FUNC_1(const struct sadb_address *VAR_0, xfrm_address_t *VAR_1)
{
 return FUNC_0((struct sockaddr *)(VAR_0 + 1),
          VAR_1);
}
