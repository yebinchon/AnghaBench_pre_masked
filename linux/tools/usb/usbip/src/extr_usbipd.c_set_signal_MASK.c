
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_mask; } ;
typedef int act ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sigaction*,int ,int) ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct sigaction VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.sa_handler = VAR_4;
 FUNC_2(&VAR_5.sa_mask);
 FUNC_1(VAR_2, &VAR_5, ((void*)0));
 FUNC_1(VAR_1, &VAR_5, ((void*)0));
 VAR_5.sa_handler = VAR_3;
 FUNC_1(VAR_0, &VAR_5, ((void*)0));
}
