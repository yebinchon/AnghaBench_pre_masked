
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,int) ;

Size
FUNC_5(Datum VAR_0, bool VAR_1, bool VAR_2, int VAR_3)
{
 Size VAR_4 = sizeof(int);

 if (!VAR_1)
 {

  if (VAR_2)
   VAR_4 += sizeof(Datum);
  else if (VAR_3 == -1 &&
     FUNC_3(FUNC_1(VAR_0)))
  {

   VAR_4 += FUNC_2(FUNC_0(VAR_0));
  }
  else
   VAR_4 += FUNC_4(VAR_0, VAR_2, VAR_3);
 }

 return VAR_4;
}
