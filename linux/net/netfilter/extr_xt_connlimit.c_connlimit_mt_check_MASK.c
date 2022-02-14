
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xt_mtchk_param {scalar_t__ family; int net; struct xt_connlimit_info* matchinfo; } ;
struct xt_connlimit_info {int data; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_1)
{
 struct xt_connlimit_info *VAR_2 = VAR_1->matchinfo;
 unsigned int VAR_3;

 VAR_3 = sizeof(u32);
 if (VAR_1->family == VAR_0)
  VAR_3 += sizeof(struct in6_addr);
 else
  VAR_3 += sizeof(struct in_addr);


 VAR_2->data = FUNC_1(VAR_1->net, VAR_1->family, VAR_3);

 return FUNC_0(VAR_2->data);
}
