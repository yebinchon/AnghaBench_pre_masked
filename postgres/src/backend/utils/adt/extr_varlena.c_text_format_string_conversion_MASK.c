
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int FmgrInfo ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_2, char VAR_3,
         FmgrInfo *VAR_4,
         Datum VAR_5, bool VAR_6,
         int VAR_7, int VAR_8)
{
 char *VAR_9;


 if (VAR_6)
 {
  if (VAR_3 == 's')
   FUNC_7(VAR_2, "", VAR_7, VAR_8);
  else if (VAR_3 == 'L')
   FUNC_7(VAR_2, "NULL", VAR_7, VAR_8);
  else if (VAR_3 == 'I')
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("null values cannot be formatted as an SQL identifier")));
  return;
 }


 VAR_9 = FUNC_0(VAR_4, VAR_5);


 if (VAR_3 == 'I')
 {

  FUNC_7(VAR_2, FUNC_5(VAR_9), VAR_7, VAR_8);
 }
 else if (VAR_3 == 'L')
 {
  char *VAR_10 = FUNC_6(VAR_9);

  FUNC_7(VAR_2, VAR_10, VAR_7, VAR_8);

  FUNC_4(VAR_10);
 }
 else
  FUNC_7(VAR_2, VAR_9, VAR_7, VAR_8);


 FUNC_4(VAR_9);
}
