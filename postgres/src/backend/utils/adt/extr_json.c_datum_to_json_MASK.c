
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char text ;
typedef int StringInfo ;
typedef int Oid ;
typedef int JsonTypeCategory ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(Datum VAR_6, bool VAR_7, StringInfo VAR_8,
     JsonTypeCategory VAR_9, Oid VAR_10,
     bool VAR_11)
{
 char *VAR_12;
 text *VAR_13;

 FUNC_10();


 FUNC_0(!(VAR_11 && VAR_7));

 if (VAR_7)
 {
  FUNC_8(VAR_8, "null");
  return;
 }

 if (VAR_11 &&
  (VAR_9 == 136 ||
   VAR_9 == 133 ||
   VAR_9 == 131 ||
   VAR_9 == 134))
  FUNC_12(VAR_2,
    (FUNC_13(VAR_1),
     FUNC_14("key value must be scalar, not array, composite, or json")));

 switch (VAR_9)
 {
  case 136:
   FUNC_9(VAR_6, VAR_8, 0);
   break;
  case 133:
   FUNC_11(VAR_6, VAR_8, 0);
   break;
  case 135:
   VAR_12 = FUNC_1(VAR_6) ? "true" : "false";
   if (VAR_11)
    FUNC_15(VAR_8, VAR_12);
   else
    FUNC_8(VAR_8, VAR_12);
   break;
  case 130:
   VAR_12 = FUNC_6(VAR_10, VAR_6);





   if (!VAR_11 && FUNC_3(VAR_12, FUNC_17(VAR_12)))
    FUNC_8(VAR_8, VAR_12);
   else
    FUNC_15(VAR_8, VAR_12);
   FUNC_16(VAR_12);
   break;
  case 132:
   {
    char VAR_14[VAR_3 + 1];

    FUNC_4(VAR_14, VAR_6, VAR_0, ((void*)0));
    FUNC_7(VAR_8, "\"%s\"", VAR_14);
   }
   break;
  case 129:
   {
    char VAR_15[VAR_3 + 1];

    FUNC_4(VAR_15, VAR_6, VAR_4, ((void*)0));
    FUNC_7(VAR_8, "\"%s\"", VAR_15);
   }
   break;
  case 128:
   {
    char VAR_16[VAR_3 + 1];

    FUNC_4(VAR_16, VAR_6, VAR_5, ((void*)0));
    FUNC_7(VAR_8, "\"%s\"", VAR_16);
   }
   break;
  case 131:

   VAR_12 = FUNC_6(VAR_10, VAR_6);
   FUNC_8(VAR_8, VAR_12);
   FUNC_16(VAR_12);
   break;
  case 134:

   VAR_13 = FUNC_2(FUNC_5(VAR_10, VAR_6));
   VAR_12 = FUNC_18(VAR_13);
   FUNC_8(VAR_8, VAR_12);
   FUNC_16(VAR_12);
   FUNC_16(VAR_13);
   break;
  default:
   VAR_12 = FUNC_6(VAR_10, VAR_6);
   FUNC_15(VAR_8, VAR_12);
   FUNC_16(VAR_12);
   break;
 }
}
