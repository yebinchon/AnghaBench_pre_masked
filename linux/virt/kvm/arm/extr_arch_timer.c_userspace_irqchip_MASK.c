
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_3(struct kvm *VAR_1)
{
 return FUNC_1(&VAR_0) &&
  FUNC_2(!FUNC_0(VAR_1));
}
