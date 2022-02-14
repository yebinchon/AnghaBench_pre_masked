
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int,void*,int,int) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct kvm_vcpu *VAR_1, gpa_t VAR_2, void *VAR_3, unsigned long VAR_4)
{
 gfn_t VAR_5 = VAR_2 >> VAR_0;
 int VAR_6;
 int VAR_7 = FUNC_2(VAR_2);
 int VAR_8;

 while ((VAR_6 = FUNC_1(VAR_4, VAR_7)) != 0) {
  VAR_8 = FUNC_0(VAR_1, VAR_5, VAR_3, VAR_7, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 = 0;
  VAR_4 -= VAR_6;
  VAR_3 += VAR_6;
  ++VAR_5;
 }
 return 0;
}
