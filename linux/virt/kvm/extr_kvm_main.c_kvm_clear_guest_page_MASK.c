
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kvm*,int ,void const*,int,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct kvm *VAR_0, gfn_t VAR_1, int VAR_2, int VAR_3)
{
 const void *VAR_4 = (const void *) FUNC_1(FUNC_3(FUNC_0(0)));

 return FUNC_2(VAR_0, VAR_1, VAR_4, VAR_2, VAR_3);
}
