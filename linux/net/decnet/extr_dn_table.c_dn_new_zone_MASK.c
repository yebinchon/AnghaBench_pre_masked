
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_zone {int dz_divisor; int dz_hashmask; int dz_order; struct dn_zone* dz_next; int dz_mask; int dz_hash; } ;
struct dn_hash {struct dn_zone** dh_zones; struct dn_zone* dh_zone_list; } ;
struct dn_fib_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct dn_zone*) ;
 struct dn_zone* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct dn_zone *FUNC_6(struct dn_hash *VAR_2, int VAR_3)
{
 int VAR_4;
 struct dn_zone *VAR_5 = FUNC_3(sizeof(struct dn_zone), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_3) {
  VAR_5->dz_divisor = 16;
  VAR_5->dz_hashmask = 0x0F;
 } else {
  VAR_5->dz_divisor = 1;
  VAR_5->dz_hashmask = 0;
 }

 VAR_5->dz_hash = FUNC_1(VAR_5->dz_divisor, sizeof(struct dn_fib_node *), VAR_0);
 if (!VAR_5->dz_hash) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 VAR_5->dz_order = VAR_3;
 VAR_5->dz_mask = FUNC_0(VAR_3);

 for(VAR_4 = VAR_3 + 1; VAR_4 <= 16; VAR_4++)
  if (VAR_2->dh_zones[VAR_4])
   break;

 FUNC_4(&VAR_1);
 if (VAR_4>16) {
  VAR_5->dz_next = VAR_2->dh_zone_list;
  VAR_2->dh_zone_list = VAR_5;
 } else {
  VAR_5->dz_next = VAR_2->dh_zones[VAR_4]->dz_next;
  VAR_2->dh_zones[VAR_4]->dz_next = VAR_5;
 }
 VAR_2->dh_zones[VAR_3] = VAR_5;
 FUNC_5(&VAR_1);
 return VAR_5;
}
