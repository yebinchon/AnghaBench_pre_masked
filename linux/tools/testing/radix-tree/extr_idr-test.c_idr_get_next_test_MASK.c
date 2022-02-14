
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct item*,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int) ;
 struct item* FUNC_7 (int,int ) ;
 int VAR_2 ;

void FUNC_8(int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 FUNC_0(VAR_1);
 FUNC_6(&VAR_1, VAR_3);

 int VAR_6[] = {4, 7, 9, 15, 65, 128, 1000, 99999, 0};

 for(VAR_4 = 0; VAR_6[VAR_4]; VAR_4++) {
  struct item *VAR_7 = FUNC_7(VAR_6[VAR_4], 0);
  FUNC_1(FUNC_2(&VAR_1, VAR_7, VAR_6[VAR_4], VAR_6[VAR_4+1],
     VAR_0) == VAR_6[VAR_4]);
 }

 for(VAR_4 = 0, VAR_5 = 0; VAR_6[VAR_4]; VAR_4++) {
  FUNC_5(&VAR_1, &VAR_5);
  FUNC_1(VAR_5 == VAR_6[VAR_4]);
  VAR_5++;
 }

 FUNC_4(&VAR_1, VAR_2, &VAR_1);
 FUNC_3(&VAR_1);
}
