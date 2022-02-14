
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sigaction*,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2() {
 struct sigaction VAR_2;
 VAR_2.sa_handler = VAR_1;
 VAR_2.sa_flags = 0;
 FUNC_1(&VAR_2.sa_mask);
 FUNC_0(VAR_0, &VAR_2, 0);
 return 0;
}
