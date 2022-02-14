
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_proxy {int dummy; } ;
struct aa_label {struct aa_proxy* proxy; } ;


 int FUNC_0 (struct aa_label*,struct aa_label*) ;
 struct aa_proxy* FUNC_1 (struct aa_proxy*) ;
 int FUNC_2 (struct aa_proxy*) ;

__attribute__((used)) static void FUNC_3(struct aa_label *VAR_0, struct aa_label *VAR_1)
{
 struct aa_proxy *VAR_2 = VAR_1->proxy;

 VAR_1->proxy = FUNC_1(VAR_0->proxy);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2);
}
