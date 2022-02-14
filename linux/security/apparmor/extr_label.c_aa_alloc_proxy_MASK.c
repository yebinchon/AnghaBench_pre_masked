
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_proxy {int label; int count; } ;
struct aa_label {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct aa_label*) ;
 int FUNC_1 (int *) ;
 struct aa_proxy* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;

struct aa_proxy *FUNC_4(struct aa_label *VAR_0, gfp_t VAR_1)
{
 struct aa_proxy *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct aa_proxy), VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_2->count);
  FUNC_3(VAR_2->label, FUNC_0(VAR_0));
 }
 return VAR_2;
}
