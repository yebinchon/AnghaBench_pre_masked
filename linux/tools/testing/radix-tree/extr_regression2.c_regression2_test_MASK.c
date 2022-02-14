
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct page* FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void***,unsigned long,unsigned long,int ) ;
 int FUNC_7 (int *,int,struct page*) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,unsigned long,unsigned long,int,int ,int ) ;

void FUNC_11(void)
{
 int VAR_4;
 struct page *VAR_5;
 int VAR_6 = VAR_2;
 unsigned long int VAR_7, VAR_8;
 struct page *VAR_9[1];

 FUNC_3(1, "running regression test 2 (should take milliseconds)\n");

 for (VAR_4 = 0; VAR_4 <= VAR_6 - 1; VAR_4++) {
  VAR_5 = FUNC_2();
  FUNC_7(&VAR_3, VAR_4, VAR_5);
 }
 FUNC_9(&VAR_3, VAR_6 - 1, VAR_0);


 VAR_7 = 0;
 VAR_8 = VAR_6 - 2;
 FUNC_10(&VAR_3, VAR_7, VAR_8, 1,
    VAR_0, VAR_1);


 VAR_5 = FUNC_2();
 FUNC_7(&VAR_3, VAR_6, VAR_5);


 FUNC_8(&VAR_3, VAR_6 - 1, VAR_0);


 for (VAR_4 = VAR_6 - 1; VAR_4 >= 0; VAR_4--)
  FUNC_1(FUNC_4(&VAR_3, VAR_4));




 VAR_7 = 1;
 VAR_8 = VAR_6 - 2;
 FUNC_6(&VAR_3, (void ***)VAR_9, VAR_7, VAR_8,
  VAR_1);


 FUNC_1(FUNC_4(&VAR_3, VAR_6));

 FUNC_0(!FUNC_5(&VAR_3));

 FUNC_3(1, "regression test 2, done\n");
}
