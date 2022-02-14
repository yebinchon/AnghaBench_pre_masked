
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
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int,scalar_t__*,int) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static Datum
FUNC_10(DefElem *VAR_7, int VAR_8)
{
 List *VAR_9 = FUNC_2(VAR_7);
 Oid VAR_10[3];
 Oid VAR_11;
 int VAR_12;
 Oid VAR_13;

 VAR_11 = VAR_3;
 VAR_10[0] = VAR_3;
 switch (VAR_8)
 {
  case 129:
   VAR_12 = 2;
   VAR_10[1] = VAR_2;
   break;
  case 128:
   VAR_12 = 3;
   VAR_10[1] = VAR_3;
   VAR_10[2] = VAR_3;
   break;
  case 132:
   VAR_12 = 1;
   VAR_11 = VAR_6;
   break;
  case 131:
   VAR_12 = 3;
   VAR_10[1] = VAR_3;
   VAR_10[2] = VAR_5;
   break;
  case 130:
   VAR_12 = 1;






   break;
  default:

   FUNC_3(VAR_1, "unrecognized attribute for text search parser: %d",
     VAR_8);
   VAR_12 = 0;
 }

 VAR_13 = FUNC_0(VAR_9, VAR_12, VAR_10, 0);
 if (FUNC_9(VAR_13) != VAR_11)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("function %s should return type %s",
      FUNC_8(VAR_9, VAR_12, VAR_4, VAR_10),
      FUNC_7(VAR_11))));

 return FUNC_1(VAR_13);
}
