
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_cpuid2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int,int ) ;
 struct kvm_cpuid2* FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,struct kvm_cpuid2*) ;
 int FUNC_5 (int ,int ) ;

struct kvm_cpuid2 *FUNC_6(void)
{
 static struct kvm_cpuid2 *VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1();
 VAR_7 = FUNC_5(VAR_1, VAR_3);
 if (VAR_7 < 0)
  FUNC_3(VAR_0);

 VAR_6 = FUNC_4(VAR_7, VAR_2, VAR_5);
 FUNC_0(VAR_6 == 0, "KVM_GET_SUPPORTED_CPUID failed %d %d\n",
      VAR_6, VAR_4);

 FUNC_2(VAR_7);
 return VAR_5;
}
