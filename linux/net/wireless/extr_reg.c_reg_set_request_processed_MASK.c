
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulatory_request {int processed; } ;


 int FUNC_0 () ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
 bool VAR_3 = 0;
 struct regulatory_request *VAR_4 = FUNC_1();

 VAR_4->processed = 1;

 FUNC_4(&VAR_1);
 if (!FUNC_2(&VAR_0))
  VAR_3 = 1;
 FUNC_5(&VAR_1);

 FUNC_0();

 if (VAR_3)
  FUNC_3(&VAR_2);
}
