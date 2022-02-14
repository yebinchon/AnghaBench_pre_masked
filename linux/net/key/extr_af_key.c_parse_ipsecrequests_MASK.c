
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_policy {int dummy; } ;
struct sadb_x_policy {int sadb_x_policy_len; } ;
struct sadb_x_ipsecrequest {int sadb_x_ipsecrequest_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_policy*,struct sadb_x_ipsecrequest*) ;

__attribute__((used)) static int
FUNC_1(struct xfrm_policy *VAR_1, struct sadb_x_policy *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->sadb_x_policy_len*8 - sizeof(struct sadb_x_policy);
 struct sadb_x_ipsecrequest *VAR_5 = (void*)(VAR_2+1);

 if (VAR_2->sadb_x_policy_len * 8 < sizeof(struct sadb_x_policy))
  return -VAR_0;

 while (VAR_4 >= sizeof(*VAR_5)) {
  if (VAR_4 < VAR_5->sadb_x_ipsecrequest_len ||
      VAR_5->sadb_x_ipsecrequest_len < sizeof(*VAR_5))
   return -VAR_0;

  if ((VAR_3 = FUNC_0(VAR_1, VAR_5)) < 0)
   return VAR_3;
  VAR_4 -= VAR_5->sadb_x_ipsecrequest_len;
  VAR_5 = (void*)((u8*)VAR_5 + VAR_5->sadb_x_ipsecrequest_len);
 }
 return 0;
}
