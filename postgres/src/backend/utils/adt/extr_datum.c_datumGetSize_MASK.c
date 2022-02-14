
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char varlena ;
typedef scalar_t__ Size ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;

Size
FUNC_9(Datum VAR_2, bool VAR_3, int VAR_4)
{
 Size VAR_5;

 if (VAR_3)
 {

  FUNC_0(VAR_4 > 0 && VAR_4 <= sizeof(Datum));
  VAR_5 = (Size) VAR_4;
 }
 else
 {
  if (VAR_4 > 0)
  {

   VAR_5 = (Size) VAR_4;
  }
  else if (VAR_4 == -1)
  {

   struct varlena *VAR_6 = (struct varlena *) FUNC_1(VAR_2);

   if (!FUNC_2(VAR_6))
    FUNC_5(VAR_1,
      (FUNC_6(VAR_0),
       FUNC_7("invalid Datum pointer")));

   VAR_5 = (Size) FUNC_3(VAR_6);
  }
  else if (VAR_4 == -2)
  {

   char *VAR_7 = (char *) FUNC_1(VAR_2);

   if (!FUNC_2(VAR_7))
    FUNC_5(VAR_1,
      (FUNC_6(VAR_0),
       FUNC_7("invalid Datum pointer")));

   VAR_5 = (Size) (FUNC_8(VAR_7) + 1);
  }
  else
  {
   FUNC_4(VAR_1, "invalid typLen: %d", VAR_4);
   VAR_5 = 0;
  }
 }

 return VAR_5;
}
