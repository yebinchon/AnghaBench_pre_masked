
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void *FUNC_6(void *VAR_2)
{
 time_t VAR_3 = FUNC_4(((void*)0));
 int VAR_4 = *(int *)VAR_2;

 FUNC_2();
 do {
  FUNC_0(&VAR_1, FUNC_5(VAR_4), VAR_4, VAR_4 + 1, VAR_0);
  FUNC_1(&VAR_1, VAR_4);
 } while (FUNC_4(((void*)0)) < VAR_3 + 10);
 FUNC_3();

 return ((void*)0);
}
