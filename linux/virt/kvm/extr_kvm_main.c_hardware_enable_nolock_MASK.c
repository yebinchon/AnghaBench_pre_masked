
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
 int VAR_3 = FUNC_6();
 int VAR_4;

 if (FUNC_3(VAR_3, VAR_0))
  return;

 FUNC_2(VAR_3, VAR_0);

 VAR_4 = FUNC_4();

 if (VAR_4) {
  FUNC_1(VAR_3, VAR_0);
  FUNC_0(&VAR_1);
  FUNC_5("kvm: enabling virtualization on CPU%d failed\n", VAR_3);
 }
}
