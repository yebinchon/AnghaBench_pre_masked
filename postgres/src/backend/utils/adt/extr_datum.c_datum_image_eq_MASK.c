
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;
typedef scalar_t__ Size ;
typedef scalar_t__ Pointer ;
typedef scalar_t__ Datum ;


 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 struct varlena* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (struct varlena*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (struct varlena*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

bool
FUNC_9(Datum VAR_2, Datum VAR_3, bool VAR_4, int VAR_5)
{
 Size VAR_6,
    VAR_7;
 bool VAR_8 = 1;

 if (VAR_4)
 {
  VAR_8 = (VAR_2 == VAR_3);
 }
 else if (VAR_5 > 0)
 {
  VAR_8 = (FUNC_5(FUNC_1(VAR_2),
       FUNC_1(VAR_3),
       VAR_5) == 0);
 }
 else if (VAR_5 == -1)
 {
  VAR_6 = FUNC_8(VAR_2);
  VAR_7 = FUNC_8(VAR_3);

  if (VAR_6 != VAR_7)
   VAR_8 = 0;
  else
  {
   struct varlena *VAR_9;
   struct varlena *VAR_10;

   VAR_9 = FUNC_2(VAR_2);
   VAR_10 = FUNC_2(VAR_3);

   VAR_8 = (FUNC_5(FUNC_3(VAR_9),
        FUNC_3(VAR_10),
        VAR_6 - VAR_1) == 0);


   if ((Pointer) VAR_9 != (Pointer) VAR_2)
    FUNC_6(VAR_9);
   if ((Pointer) VAR_10 != (Pointer) VAR_3)
    FUNC_6(VAR_10);
  }
 }
 else if (VAR_5 == -2)
 {
  char *VAR_11,
       *VAR_12;


  VAR_11 = FUNC_0(VAR_2);
  VAR_12 = FUNC_0(VAR_3);
  VAR_6 = FUNC_7(VAR_11) + 1;
  VAR_7 = FUNC_7(VAR_12) + 1;
  if (VAR_6 != VAR_7)
   return 0;
  VAR_8 = (FUNC_5(VAR_11, VAR_12, VAR_6) == 0);
 }
 else
  FUNC_4(VAR_0, "unexpected typLen: %d", VAR_5);

 return VAR_8;
}
