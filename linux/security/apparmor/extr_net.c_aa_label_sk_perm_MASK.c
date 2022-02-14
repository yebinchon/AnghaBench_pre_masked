
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,struct sock*) ;
 int FUNC_2 (struct aa_profile*,int *,int ,struct sock*) ;
 int FUNC_3 (struct aa_label*,struct aa_profile*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct aa_label*) ;

__attribute__((used)) static int FUNC_5(struct aa_label *VAR_1, const char *VAR_2, u32 VAR_3,
       struct sock *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_4);

 if (!FUNC_4(VAR_1)) {
  struct aa_profile *VAR_6;
  FUNC_1(VAR_0, VAR_2, VAR_4);

  VAR_5 = FUNC_3(VAR_1, VAR_6,
       FUNC_2(VAR_6, &VAR_0, VAR_3, VAR_4));
 }

 return VAR_5;
}
