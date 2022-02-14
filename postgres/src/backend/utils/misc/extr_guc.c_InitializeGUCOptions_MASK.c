
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int ,int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;

void
FUNC_5(void)
{
 int VAR_6;





 FUNC_4();




 FUNC_3();





 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  FUNC_1(VAR_3[VAR_6]);
 }

 VAR_2 = 0;

 VAR_5 = 0;





 FUNC_2("transaction_isolation", "read committed",
     VAR_0, VAR_1);
 FUNC_2("transaction_read_only", "no",
     VAR_0, VAR_1);
 FUNC_2("transaction_deferrable", "no",
     VAR_0, VAR_1);





 FUNC_0();
}
