
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int,int ,int ,int ) ;

__attribute__((used)) static PGresult *
FUNC_7(PGconn *VAR_5)
{




 while (FUNC_2(VAR_5))
 {
  int VAR_6;






  VAR_6 = FUNC_6(VAR_0,
          VAR_2 | VAR_4 |
          VAR_3,
          FUNC_3(VAR_5),
          0,
          VAR_1);


  if (VAR_6 & VAR_3)
  {
   FUNC_5(VAR_0);
   FUNC_4();
  }


  if (FUNC_0(VAR_5) == 0)
  {

   return ((void*)0);
  }
 }


 return FUNC_1(VAR_5);
}
