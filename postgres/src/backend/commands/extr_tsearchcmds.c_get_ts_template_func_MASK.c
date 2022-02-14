
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int List ;
typedef int DefElem ;
typedef int Datum ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,scalar_t__*,int) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static Datum
FUNC_10(DefElem *VAR_4, int VAR_5)
{
 List *VAR_6 = FUNC_2(VAR_4);
 Oid VAR_7[4];
 Oid VAR_8;
 int VAR_9;
 Oid VAR_10;

 VAR_8 = VAR_2;
 VAR_7[0] = VAR_2;
 VAR_7[1] = VAR_2;
 VAR_7[2] = VAR_2;
 VAR_7[3] = VAR_2;
 switch (VAR_5)
 {
  case 129:
   VAR_9 = 1;
   break;
  case 128:
   VAR_9 = 4;
   break;
  default:

   FUNC_3(VAR_1, "unrecognized attribute for text search template: %d",
     VAR_5);
   VAR_9 = 0;
 }

 VAR_10 = FUNC_0(VAR_6, VAR_9, VAR_7, 0);
 if (FUNC_9(VAR_10) != VAR_8)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("function %s should return type %s",
      FUNC_8(VAR_6, VAR_9, VAR_3, VAR_7),
      FUNC_7(VAR_8))));

 return FUNC_1(VAR_10);
}
