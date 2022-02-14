
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef struct kvm file ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kvm*) ;
 struct kvm* FUNC_2 (char*,int *,struct kvm*,int ) ;
 int FUNC_3 (int,struct kvm*) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct kvm*) ;
 struct kvm* FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (struct kvm*,int) ;
 int FUNC_9 (struct kvm*) ;
 int FUNC_10 (int ,struct kvm*) ;
 int VAR_4 ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(unsigned long VAR_5)
{
 int VAR_6;
 struct kvm *VAR_7;
 struct file *VAR_8;

 VAR_7 = FUNC_7(VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);





 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6 < 0)
  goto put_kvm;

 VAR_8 = FUNC_2("kvm-vm", &VAR_4, VAR_7, VAR_3);
 if (FUNC_0(VAR_8)) {
  FUNC_11(VAR_6);
  VAR_6 = FUNC_1(VAR_8);
  goto put_kvm;
 }







 if (FUNC_8(VAR_7, VAR_6) < 0) {
  FUNC_11(VAR_6);
  FUNC_4(VAR_8);
  return -VAR_0;
 }
 FUNC_10(VAR_1, VAR_7);

 FUNC_3(VAR_6, VAR_8);
 return VAR_6;

put_kvm:
 FUNC_9(VAR_7);
 return VAR_6;
}
