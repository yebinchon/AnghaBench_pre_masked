
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int MultiXactOffset ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void
FUNC_6(MultiXactOffset VAR_5, int VAR_6)
{






 while (VAR_6 > 0)
 {
  int VAR_7;
  int VAR_8;
  uint32 VAR_9;




  VAR_7 = FUNC_3(VAR_5);
  VAR_8 = FUNC_2(VAR_5);
  if (VAR_7 == 0 && VAR_8 == 0)
  {
   int VAR_10;

   VAR_10 = FUNC_4(VAR_5);

   FUNC_0(VAR_4, VAR_0);


   FUNC_5(VAR_10, 1);

   FUNC_1(VAR_4);
  }







  if (VAR_5 + VAR_1 < VAR_5)
  {





   VAR_9 = VAR_3 - VAR_5 + 1;
  }
  else
   VAR_9 = VAR_2 - VAR_5 % VAR_2;





  VAR_6 -= VAR_9;
  VAR_5 += VAR_9;
 }
}
