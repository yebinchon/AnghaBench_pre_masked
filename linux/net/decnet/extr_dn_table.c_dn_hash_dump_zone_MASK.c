
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netlink_callback {int* args; } ;
struct dn_zone {int dz_divisor; int ** dz_hash; } ;
struct dn_fib_table {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,struct netlink_callback*,struct dn_fib_table*,struct dn_zone*,int *) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static __inline__ int FUNC_2(struct sk_buff *VAR_0,
    struct netlink_callback *VAR_1,
    struct dn_fib_table *VAR_2,
    struct dn_zone *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_1->args[3];
 for(VAR_4 = 0; VAR_4 < VAR_3->dz_divisor; VAR_4++) {
  if (VAR_4 < VAR_5)
   continue;
  if (VAR_4 > VAR_5)
   FUNC_1(&VAR_1->args[4], 0, sizeof(VAR_1->args) - 4*sizeof(VAR_1->args[0]));
  if (VAR_3->dz_hash == ((void*)0) || VAR_3->dz_hash[VAR_4] == ((void*)0))
   continue;
  if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_3->dz_hash[VAR_4]) < 0) {
   VAR_1->args[3] = VAR_4;
   return -1;
  }
 }
 VAR_1->args[3] = VAR_4;
 return VAR_0->len;
}
