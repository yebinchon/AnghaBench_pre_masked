
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

int
FUNC_3(Buffer VAR_3, bool VAR_4)
{
 Page VAR_5;
 int VAR_6 = VAR_1;

 FUNC_2(VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_3);
 if (FUNC_1(VAR_5))
 {
  if (VAR_4 == 0)
  {

   FUNC_2(VAR_3, VAR_2);
   FUNC_2(VAR_3, VAR_0);


   if (!FUNC_1(VAR_5))
   {

    FUNC_2(VAR_3, VAR_2);
    FUNC_2(VAR_3, VAR_1);
   }
   else
    VAR_6 = VAR_0;
  }
 }

 return VAR_6;
}
