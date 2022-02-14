
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef int bits8 ;
struct TYPE_4__ {char attalign; int attlen; scalar_t__ attbyval; } ;
typedef int Size ;
typedef int Pointer ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int ExpandedObjectHeader ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (char*,char) ;
 int FUNC_18 (char*,int ,int) ;
 int FUNC_19 (char*,int ,int) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static inline void
FUNC_21(Form_pg_attribute VAR_4,
   bits8 **VAR_5,
   int *VAR_6,
   char **VAR_7,
   uint16 *VAR_8,
   Datum VAR_9,
   bool VAR_10)
{
 Size VAR_11;
 char *VAR_12 = *VAR_7;





 if (VAR_5 != ((void*)0))
 {
  if (*VAR_6 != VAR_3)
   *VAR_6 <<= 1;
  else
  {
   *VAR_5 += 1;
   **VAR_5 = 0x0;
   *VAR_6 = 1;
  }

  if (VAR_10)
  {
   *VAR_8 |= VAR_1;
   return;
  }

  **VAR_5 |= *VAR_6;
 }





 if (VAR_4->attbyval)
 {

  VAR_12 = (char *) FUNC_17(VAR_12, VAR_4->attalign);
  FUNC_19(VAR_12, VAR_9, VAR_4->attlen);
  VAR_11 = VAR_4->attlen;
 }
 else if (VAR_4->attlen == -1)
 {

  Pointer VAR_13 = FUNC_3(VAR_9);

  *VAR_8 |= VAR_2;
  if (FUNC_9(VAR_13))
  {
   if (FUNC_10(VAR_13))
   {




    ExpandedObjectHeader *VAR_14 = FUNC_2(VAR_9);

    VAR_12 = (char *) FUNC_17(VAR_12,
              VAR_4->attalign);
    VAR_11 = FUNC_5(VAR_14);
    FUNC_4(VAR_14, VAR_12, VAR_11);
   }
   else
   {
    *VAR_8 |= VAR_0;

    VAR_11 = FUNC_15(VAR_13);
    FUNC_18(VAR_12, VAR_13, VAR_11);
   }
  }
  else if (FUNC_11(VAR_13))
  {

   VAR_11 = FUNC_16(VAR_13);
   FUNC_18(VAR_12, VAR_13, VAR_11);
  }
  else if (FUNC_13(VAR_4) &&
     FUNC_7(VAR_13))
  {

   VAR_11 = FUNC_8(VAR_13);
   FUNC_6(VAR_12, VAR_11);
   FUNC_18(VAR_12 + 1, FUNC_12(VAR_13), VAR_11 - 1);
  }
  else
  {

   VAR_12 = (char *) FUNC_17(VAR_12,
             VAR_4->attalign);
   VAR_11 = FUNC_14(VAR_13);
   FUNC_18(VAR_12, VAR_13, VAR_11);
  }
 }
 else if (VAR_4->attlen == -2)
 {

  *VAR_8 |= VAR_2;
  FUNC_0(VAR_4->attalign == 'c');
  VAR_11 = FUNC_20(FUNC_1(VAR_9)) + 1;
  FUNC_18(VAR_12, FUNC_3(VAR_9), VAR_11);
 }
 else
 {

  VAR_12 = (char *) FUNC_17(VAR_12, VAR_4->attalign);
  FUNC_0(VAR_4->attlen > 0);
  VAR_11 = VAR_4->attlen;
  FUNC_18(VAR_12, FUNC_3(VAR_9), VAR_11);
 }

 VAR_12 += VAR_11;
 *VAR_7 = VAR_12;
}
