
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int ,char const*,int *,int ,int,int) ;
 int FUNC_1 (struct aa_profile*,int *,int ,int ,int) ;
 int FUNC_2 (struct aa_label*,struct aa_profile*,int ) ;
 int VAR_0 ;

int FUNC_3(struct aa_label *VAR_1, const char *VAR_2, u32 VAR_3, u16 VAR_4,
        int VAR_5, int VAR_6)
{
 struct aa_profile *VAR_7;
 FUNC_0(VAR_0, VAR_2, ((void*)0), VAR_4, VAR_5, VAR_6);

 return FUNC_2(VAR_1, VAR_7,
   FUNC_1(VAR_7, &VAR_0, VAR_3, VAR_4,
        VAR_5));
}
