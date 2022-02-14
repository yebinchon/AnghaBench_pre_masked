
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct sigaction VAR_4 = {
  .sa_handler = VAR_3,
 };

 FUNC_0(VAR_0, &VAR_4, ((void*)0));
 FUNC_1(VAR_1, VAR_2);
}
