
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tomoyo_ipaddr_union {int is_ipv6; TYPE_2__* ip; } ;
struct tomoyo_acl_param {int dummy; } ;
struct TYPE_3__ {int * u6_addr8; } ;
struct TYPE_4__ {int * s6_addr32; TYPE_1__ in6_u; } ;


 scalar_t__ FUNC_0 (char const*,int,int * const,char,char const**) ;
 scalar_t__ FUNC_1 (char const*,int,int * const,char,char const**) ;
 int FUNC_2 (int * const,int * const,int) ;
 int FUNC_3 (char*,char) ;
 char* FUNC_4 (struct tomoyo_acl_param*) ;

bool FUNC_5(struct tomoyo_acl_param *VAR_0,
          struct tomoyo_ipaddr_union *VAR_1)
{
 u8 * const VAR_2 = VAR_1->ip[0].in6_u.u6_addr8;
 u8 * const VAR_3 = VAR_1->ip[1].in6_u.u6_addr8;
 char *VAR_4 = FUNC_4(VAR_0);
 const char *VAR_5;

 if (!FUNC_3(VAR_4, ':') &&
     FUNC_0(VAR_4, -1, VAR_2, '-', &VAR_5) > 0) {
  VAR_1->is_ipv6 = 0;
  if (!*VAR_5)
   VAR_1->ip[1].s6_addr32[0] = VAR_1->ip[0].s6_addr32[0];
  else if (*VAR_5++ != '-' ||
    FUNC_0(VAR_5, -1, VAR_3, '\0', &VAR_5) <= 0 || *VAR_5)
   return 0;
  return 1;
 }
 if (FUNC_1(VAR_4, -1, VAR_2, '-', &VAR_5) > 0) {
  VAR_1->is_ipv6 = 1;
  if (!*VAR_5)
   FUNC_2(VAR_3, VAR_2, sizeof(u16) * 8);
  else if (*VAR_5++ != '-' ||
    FUNC_1(VAR_5, -1, VAR_3, '\0', &VAR_5) <= 0 || *VAR_5)
   return 0;
  return 1;
 }
 return 0;
}
