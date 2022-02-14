
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_zone {int dz_divisor; int dz_nent; int dz_order; int * dz_hash; struct dn_zone* dz_next; } ;
struct dn_hash {struct dn_zone* dh_zone_list; } ;
struct dn_fib_table {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,struct dn_hash*) ;

__attribute__((used)) static int FUNC_1(struct dn_fib_table *VAR_1)
{
 struct dn_hash *VAR_2 = (struct dn_hash *)VAR_1->data;
 struct dn_zone *VAR_3;
 int VAR_4 = 0;

 VAR_0 = 0;
 for(VAR_3 = VAR_2->dh_zone_list; VAR_3; VAR_3 = VAR_3->dz_next) {
  int VAR_5;
  int VAR_6 = 0;
  for(VAR_5 = VAR_3->dz_divisor-1; VAR_5 >= 0; VAR_5--)
   VAR_6 += FUNC_0(&VAR_3->dz_hash[VAR_5], VAR_3->dz_order, VAR_2);
  VAR_3->dz_nent -= VAR_6;
  VAR_4 += VAR_6;
 }

 return VAR_4;
}
