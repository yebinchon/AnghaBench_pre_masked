
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int** VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 unsigned long* FUNC_1 (struct kvm_vcpu*) ;
 int* FUNC_2 (struct kvm_vcpu*) ;
 int* FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_6, u32 VAR_7, u32 VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10 = *FUNC_1(VAR_6);
 bool VAR_11 = (VAR_10 & VAR_2);
 u32 VAR_12 = VAR_5[VAR_8 >> 2][VAR_11];
 u32 VAR_13 = FUNC_0(VAR_6, VAR_4);

 VAR_9 = VAR_7 | VAR_1;

 if (VAR_13 & (1 << 30))
  VAR_9 |= VAR_2;
 if (VAR_13 & (1 << 25))
  VAR_9 |= VAR_0;

 *FUNC_1(VAR_6) = VAR_9;


 FUNC_4(VAR_6, VAR_10);
 *FUNC_3(VAR_6, 14) = *FUNC_2(VAR_6) + VAR_12;


 if (VAR_13 & (1 << 13))
  VAR_8 += 0xffff0000;
 else
  VAR_8 += FUNC_0(VAR_6, VAR_3);

 *FUNC_2(VAR_6) = VAR_8;
}
