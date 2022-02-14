
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; void* sa_sigaction; } ;
typedef int sa ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sigaction*,int ,int) ;
 scalar_t__ FUNC_2 (int,struct sigaction*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(int VAR_1, int VAR_2)
{
 struct sigaction VAR_3;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sa_sigaction = (void *)VAR_0;
 VAR_3.sa_flags = VAR_2;
 FUNC_3(&VAR_3.sa_mask);
 if (FUNC_2(VAR_1, &VAR_3, 0))
  FUNC_0(1, "sigaction");
}
