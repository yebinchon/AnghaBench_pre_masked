
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {int unmappedsig; int signal; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct aa_profile*,struct aa_label*,int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct aa_label*,struct aa_label*,struct aa_profile*,int ,int ) ;

int FUNC_5(struct aa_label *VAR_5, struct aa_label *VAR_6, int VAR_7)
{
 struct aa_profile *VAR_8;
 FUNC_0(VAR_4, VAR_0, VAR_3);

 FUNC_1(&VAR_4)->signal = FUNC_2(VAR_7);
 FUNC_1(&VAR_4)->unmappedsig = VAR_7;
 return FUNC_4(VAR_5, VAR_6, VAR_8,
   FUNC_3(VAR_8, VAR_6, VAR_2, &VAR_4),
   FUNC_3(VAR_8, VAR_5, VAR_1, &VAR_4));
}
