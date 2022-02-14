
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int sk_type; int sk_family; } ;
struct common_audit_data {int dummy; } ;
struct aa_profile {int dummy; } ;


 int FUNC_0 (struct aa_profile*,struct common_audit_data*,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct aa_profile *VAR_0,
     struct common_audit_data *VAR_1,
     u32 VAR_2,
     struct sock *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->sk_family,
      VAR_3->sk_type);
}
