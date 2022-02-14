
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aa_profile*,struct aa_label*,int,int *) ;
 int FUNC_2 (struct aa_profile*,struct aa_label*,int,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct aa_label*,struct aa_label*,struct aa_profile*,int ,int ) ;

int FUNC_4(struct aa_label *VAR_4, struct aa_label *VAR_5,
    u32 VAR_6)
{
 struct aa_profile *VAR_7;
 u32 VAR_8 = VAR_6 << VAR_2;
 FUNC_0(VAR_3, VAR_0, VAR_1);

 return FUNC_3(VAR_4, VAR_5, VAR_7,
   FUNC_2(VAR_7, VAR_5, VAR_6, &VAR_3),
   FUNC_1(VAR_7, VAR_4, VAR_8, &VAR_3));
}
