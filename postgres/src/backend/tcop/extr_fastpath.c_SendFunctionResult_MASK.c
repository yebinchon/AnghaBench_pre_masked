
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef char bytea ;
typedef int StringInfoData ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,int *,int*) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,char) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int *,char*,int ,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(Datum VAR_4, bool VAR_5, Oid VAR_6, int16 VAR_7)
{
 bool VAR_8 = (FUNC_2(VAR_2) >= 3);
 StringInfoData VAR_9;

 FUNC_11(&VAR_9, 'V');

 if (VAR_5)
 {
  if (VAR_8)
   FUNC_16(&VAR_9, -1);
 }
 else
 {
  if (!VAR_8)
   FUNC_13(&VAR_9, 'G');

  if (VAR_7 == 0)
  {
   Oid VAR_10;
   bool VAR_11;
   char *VAR_12;

   FUNC_9(VAR_6, &VAR_10, &VAR_11);
   VAR_12 = FUNC_0(VAR_10, VAR_4);
   FUNC_15(&VAR_9, VAR_12, FUNC_17(VAR_12), 0);
   FUNC_10(VAR_12);
  }
  else if (VAR_7 == 1)
  {
   Oid VAR_13;
   bool VAR_14;
   bytea *VAR_15;

   FUNC_8(VAR_6, &VAR_13, &VAR_14);
   VAR_15 = FUNC_1(VAR_13, VAR_4);
   FUNC_16(&VAR_9, FUNC_4(VAR_15) - VAR_3);
   FUNC_14(&VAR_9, FUNC_3(VAR_15),
       FUNC_4(VAR_15) - VAR_3);
   FUNC_10(VAR_15);
  }
  else
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("unsupported format code: %d", VAR_7)));
 }

 if (!VAR_8)
  FUNC_13(&VAR_9, '0');

 FUNC_12(&VAR_9);
}
