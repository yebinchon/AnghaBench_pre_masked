
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,void**,int,int,int) ;
 int FUNC_7 (int *,unsigned long,int,int,int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(void)
{
 struct item *VAR_5[VAR_0];
 FUNC_0(VAR_4, VAR_1);
 int VAR_6;
 unsigned long VAR_7 = 0;

 FUNC_2(&VAR_4, 0);
 FUNC_5(&VAR_4, 0, 0);
 VAR_6 = FUNC_6(&VAR_4, (void **)VAR_5, 0, VAR_0, 0);
 FUNC_1(VAR_6 == 1);
 VAR_6 = FUNC_6(&VAR_4, (void **)VAR_5, 1, VAR_0, 0);
 FUNC_1(VAR_6 == 0);
 FUNC_8(&VAR_4, 0);
 FUNC_8(&VAR_4, 1);
 VAR_6 = FUNC_7(&VAR_4, VAR_7, 10, 10, VAR_2, VAR_3);
 FUNC_1(VAR_6 == 1);
 VAR_6 = FUNC_6(&VAR_4, (void **)VAR_5, 0, VAR_0, 1);
 FUNC_1(VAR_6 == 1);
 FUNC_4(&VAR_4, 0, 0);
 VAR_6 = FUNC_6(&VAR_4, (void **)VAR_5, 0, VAR_0, 0);
 FUNC_1(VAR_6 == 0);
 FUNC_3(&VAR_4);
}
