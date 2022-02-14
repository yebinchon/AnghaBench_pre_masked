
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;

bool
FUNC_3(Datum VAR_0, Datum VAR_1, bool VAR_2, int VAR_3)
{
 bool VAR_4;

 if (VAR_2)
 {






  VAR_4 = (VAR_0 == VAR_1);
 }
 else
 {
  Size VAR_5,
     VAR_6;
  char *VAR_7,
       *VAR_8;




  VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3);
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
  if (VAR_5 != VAR_6)
   return 0;
  VAR_7 = (char *) FUNC_0(VAR_0);
  VAR_8 = (char *) FUNC_0(VAR_1);
  VAR_4 = (FUNC_2(VAR_7, VAR_8, VAR_5) == 0);
 }
 return VAR_4;
}
