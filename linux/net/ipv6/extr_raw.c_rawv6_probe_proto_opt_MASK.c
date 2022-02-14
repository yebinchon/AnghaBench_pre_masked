
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw6_frag_vec {int hlen; int * c; int msg; } ;
struct flowi6 {int flowi6_proto; int fl6_mh_type; int fl6_icmp_code; int fl6_icmp_type; } ;




 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct raw6_frag_vec *VAR_0, struct flowi6 *VAR_1)
{
 int VAR_2 = 0;
 switch (VAR_1->flowi6_proto) {
 case 129:
  VAR_0->hlen = 2;
  VAR_2 = FUNC_0(VAR_0->c, VAR_0->msg, VAR_0->hlen);
  if (!VAR_2) {
   VAR_1->fl6_icmp_type = VAR_0->c[0];
   VAR_1->fl6_icmp_code = VAR_0->c[1];
  }
  break;
 case 128:
  VAR_0->hlen = 4;
  VAR_2 = FUNC_0(VAR_0->c, VAR_0->msg, VAR_0->hlen);
  if (!VAR_2)
   VAR_1->fl6_mh_type = VAR_0->c[2];
 }
 return VAR_2;
}
