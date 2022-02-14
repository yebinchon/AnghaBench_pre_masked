
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_tmpl {int encap_family; } ;
struct xfrm_policy {int xfrm_nr; struct xfrm_tmpl* xfrm_vec; int family; } ;
struct sadb_x_policy {int dummy; } ;
struct sadb_x_ipsecrequest {int dummy; } ;
struct sadb_msg {int dummy; } ;
struct sadb_lifetime {int dummy; } ;
struct sadb_address {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfrm_policy const*) ;

__attribute__((used)) static int FUNC_3(const struct xfrm_policy *VAR_0)
{
 const struct xfrm_tmpl *VAR_1;
 int VAR_2 = FUNC_1(VAR_0->family);
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4=0; VAR_4<VAR_0->xfrm_nr; VAR_4++) {
  VAR_1 = VAR_0->xfrm_vec + VAR_4;
  VAR_3 += FUNC_0(VAR_1->encap_family);
 }

 return sizeof(struct sadb_msg) +
  (sizeof(struct sadb_lifetime) * 3) +
  (sizeof(struct sadb_address) * 2) +
  (VAR_2 * 2) +
  sizeof(struct sadb_x_policy) +
  (VAR_0->xfrm_nr * sizeof(struct sadb_x_ipsecrequest)) +
  (VAR_3 * 2) +
  FUNC_2(VAR_0);
}
