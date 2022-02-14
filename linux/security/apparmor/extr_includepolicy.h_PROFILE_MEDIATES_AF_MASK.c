
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int dfa; } ;
struct aa_profile {TYPE_1__ policy; } ;
typedef int __be16 ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct aa_profile*,int ) ;
 unsigned int FUNC_1 (int ,unsigned int,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct aa_profile *VAR_1,
            u16 VAR_2) {
 unsigned int VAR_3 = FUNC_0(VAR_1, VAR_0);
 __be16 VAR_4 = FUNC_2(VAR_2);

 if (!VAR_3)
  return 0;
 return FUNC_1(VAR_1->policy.dfa, VAR_3, (char *) &VAR_4, 2);
}
