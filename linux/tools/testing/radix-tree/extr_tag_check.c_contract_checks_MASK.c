
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,void**,int ,int,int) ;
 int VAR_2 ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
 struct item *VAR_3;
 int VAR_4;
 FUNC_0(VAR_2, VAR_0);

 VAR_4 = 1<<VAR_1;
 FUNC_3(&VAR_2, VAR_4);
 FUNC_3(&VAR_2, VAR_4+1);
 FUNC_7(&VAR_2, VAR_4, 0);
 FUNC_7(&VAR_2, VAR_4, 1);
 FUNC_7(&VAR_2, VAR_4+1, 0);
 FUNC_2(&VAR_2, VAR_4+1);
 FUNC_5(&VAR_2, VAR_4, 1);

 FUNC_1(FUNC_8(&VAR_2, (void **)&VAR_3, 0, 1, 0) == 1);
 FUNC_1(FUNC_8(&VAR_2, (void **)&VAR_3, 0, 1, 1) == 0);

 FUNC_1(FUNC_6(&VAR_2, VAR_4, 0) == 1);
 FUNC_1(FUNC_6(&VAR_2, VAR_4, 1) == 0);

 FUNC_9(&VAR_2, 0);
 FUNC_4(&VAR_2);
}
