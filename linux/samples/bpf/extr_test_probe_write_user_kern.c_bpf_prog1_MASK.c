
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct pt_regs {int dummy; } ;
typedef int orig_addr ;
typedef int new_addr ;


 scalar_t__ FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 struct sockaddr_in* FUNC_2 (int *,struct sockaddr_in*) ;
 scalar_t__ FUNC_3 (struct sockaddr_in*,int,void*) ;
 int FUNC_4 (void*,struct sockaddr_in*,int) ;
 int VAR_0 ;
 int FUNC_5 (struct sockaddr_in*,struct sockaddr_in*,int) ;

int FUNC_6(struct pt_regs *VAR_1)
{
 struct sockaddr_in VAR_2, VAR_3 = {};
 struct sockaddr_in *VAR_4;
 void *VAR_5 = (void *)FUNC_0(VAR_1);
 int VAR_6 = (int)FUNC_1(VAR_1);

 if (VAR_6 > sizeof(VAR_3))
  return 0;

 if (FUNC_3(&VAR_3, sizeof(VAR_3), VAR_5) != 0)
  return 0;

 VAR_4 = FUNC_2(&VAR_0, &VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_5(&VAR_2, VAR_4, sizeof(VAR_2));
  FUNC_4(VAR_5, &VAR_2,
         sizeof(VAR_2));
 }
 return 0;
}
