
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int index; } ;


 int FUNC_0 (int ) ;
 struct item* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct item*,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int) ;
 struct item* FUNC_6 (unsigned long,int ) ;
 int VAR_3 ;

void FUNC_7(void)
{
 unsigned long VAR_4;
 FUNC_0(VAR_2);

 FUNC_1(FUNC_2(&VAR_2, VAR_0, 0, 0x4000, VAR_1) == 0);
 FUNC_1(FUNC_2(&VAR_2, VAR_0, 0x3ffd, 0x4000, VAR_1) == 0x3ffd);
 FUNC_5(&VAR_2, 0x3ffd);
 FUNC_5(&VAR_2, 0);

 for (VAR_4 = 0x3ffe; VAR_4 < 0x4003; VAR_4++) {
  int VAR_5;
  struct item *VAR_6;

  if (VAR_4 < 0x4000)
   VAR_6 = FUNC_6(VAR_4, 0);
  else
   VAR_6 = FUNC_6(VAR_4 - 0x3fff, 0);

  VAR_5 = FUNC_2(&VAR_2, VAR_6, 1, 0x4000, VAR_1);
  FUNC_1(VAR_5 == VAR_6->index);
 }

 FUNC_4(&VAR_2, VAR_3, &VAR_2);
 FUNC_3(&VAR_2);
}
