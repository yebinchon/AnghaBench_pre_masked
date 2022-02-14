
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct sigaction VAR_5, VAR_6;

 FUNC_1(&VAR_5.sa_mask);
 VAR_5.sa_flags = 0;
 VAR_5.sa_handler = VAR_4;
 FUNC_0(VAR_2, &VAR_5, ((void*)0));
 FUNC_0(VAR_1, &VAR_5, ((void*)0));
 FUNC_0(VAR_0, ((void*)0), &VAR_6);
 if (VAR_6.sa_handler == VAR_3) {
  FUNC_0(VAR_0, &VAR_5, ((void*)0));
 }
}
