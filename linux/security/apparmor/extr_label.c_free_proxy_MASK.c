
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_proxy {int label; } ;
struct aa_label {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct aa_label*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aa_proxy*) ;
 int FUNC_3 (struct aa_proxy*,int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct aa_proxy *VAR_1)
{
 if (VAR_1) {

  FUNC_1(FUNC_4(VAR_1->label, 1));
  FUNC_3(VAR_1, 0, sizeof(*VAR_1));
  FUNC_0(VAR_1->label, (struct aa_label *)VAR_0);
  FUNC_2(VAR_1);
 }
}
