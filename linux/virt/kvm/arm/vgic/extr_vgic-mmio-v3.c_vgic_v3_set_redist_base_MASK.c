
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*,int ,int ,int ) ;

int FUNC_2(struct kvm *VAR_0, u32 VAR_1, u64 VAR_2, u32 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;





 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4)
  return VAR_4;

 return 0;
}
