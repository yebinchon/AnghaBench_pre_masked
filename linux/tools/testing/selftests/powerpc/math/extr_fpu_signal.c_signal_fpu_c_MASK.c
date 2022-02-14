
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 long FUNC_0 (int *,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 long FUNC_3 (int ,struct sigaction*,int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

void *FUNC_5(void *VAR_6)
{
 int VAR_7;
 long VAR_8;
 struct sigaction VAR_9;
 VAR_9.sa_sigaction = VAR_4;
 VAR_9.sa_flags = VAR_0;
 VAR_8 = FUNC_3(VAR_1, &VAR_9, ((void*)0));
 if (VAR_8)
  return VAR_6;

 FUNC_4(FUNC_1());
 for (VAR_7 = 0; VAR_7 < 21; VAR_7++)
  VAR_2[VAR_7] = FUNC_2();

 VAR_8 = FUNC_0(VAR_2, &VAR_5, &VAR_3);

 return (void *) VAR_8;
}
