
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 unsigned int FUNC_2 (int *,struct item*,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 struct item* FUNC_7 (unsigned int,int ) ;
 int VAR_3 ;

void FUNC_8(void)
{
 unsigned int VAR_4;
 FUNC_0(VAR_2);

 FUNC_5(VAR_0);

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  struct item *VAR_5 = FUNC_7(VAR_4, 0);
  FUNC_1(FUNC_2(&VAR_2, VAR_5, VAR_4, VAR_4 + 1, VAR_1) == VAR_4);
 }

 FUNC_6();

 FUNC_4(&VAR_2, VAR_3, &VAR_2);
 FUNC_3(&VAR_2);
}
