
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {struct aa_label** security; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {int lbs_cred; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(const struct cred *VAR_1,
      struct aa_label *VAR_2)
{
 struct aa_label **VAR_3 = VAR_1->security + VAR_0.lbs_cred;

 FUNC_0(!VAR_3);
 *VAR_3 = VAR_2;
}
