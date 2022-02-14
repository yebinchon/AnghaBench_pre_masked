
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int (*) (void*),void*,int,void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,int,int,int,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(void)
{
 const int VAR_9 = FUNC_5(VAR_8);
 pid_t VAR_10;
 void *VAR_11;


 FUNC_2((void *)0);

 VAR_11 = FUNC_3(((void*)0), 2 * VAR_9, VAR_6|VAR_7, VAR_5|VAR_3, -1, 0);
 FUNC_0(VAR_11 != VAR_4);

 VAR_10 = FUNC_1(FUNC_2, VAR_11 + VAR_9, VAR_1|VAR_0|VAR_2, (void *)1);
 FUNC_0(VAR_10 > 0);
 FUNC_4();

 return 0;
}
