
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ,int ,struct timespec*,int *) ;
 int VAR_3 ;
 int FUNC_2 (struct timespec,struct timespec) ;
 int FUNC_3 (char*) ;
 struct timespec FUNC_4 (struct timespec,int) ;

void FUNC_5(void)
{
 struct timespec VAR_4, VAR_5;

 FUNC_0(VAR_0, &VAR_4);
 VAR_5 = FUNC_4(VAR_4, VAR_1/2);
 FUNC_1(VAR_0, VAR_2, &VAR_5, ((void*)0));
 FUNC_0(VAR_0, &VAR_4);

 if (!FUNC_2(VAR_5, VAR_4)) {
  FUNC_3("ERROR: hrtimer early expiration failure observed.\n");
  VAR_3 = 1;
 }
}
