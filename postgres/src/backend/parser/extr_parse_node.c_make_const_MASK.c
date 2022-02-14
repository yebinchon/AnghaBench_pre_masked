
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
typedef int Value ;
struct TYPE_4__ {int location; } ;
typedef int ParseState ;
typedef int ParseCallbackState ;
typedef int Oid ;
typedef int Datum ;
typedef TYPE_1__ Const ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;





 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int ,int,int ,int,int ,int,int) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *) ;

Const *
FUNC_13(ParseState *VAR_10, Value *VAR_11, int VAR_12)
{
 Const *VAR_13;
 Datum VAR_14;
 int64 VAR_15;
 Oid VAR_16;
 int VAR_17;
 bool VAR_18;
 ParseCallbackState VAR_19;

 switch (FUNC_9(VAR_11))
 {
  case 130:
   VAR_14 = FUNC_2(FUNC_7(VAR_11));

   VAR_16 = VAR_3;
   VAR_17 = sizeof(int32);
   VAR_18 = 1;
   break;

  case 131:

   if (FUNC_10(FUNC_12(VAR_11), 1, &VAR_15))
   {




    int32 VAR_20 = (int32) VAR_15;

    if (VAR_15 == (int64) VAR_20)
    {
     VAR_14 = FUNC_2(VAR_20);

     VAR_16 = VAR_3;
     VAR_17 = sizeof(int32);
     VAR_18 = 1;
    }
    else
    {
     VAR_14 = FUNC_3(VAR_15);

     VAR_16 = VAR_4;
     VAR_17 = sizeof(int64);
     VAR_18 = VAR_2;
    }
   }
   else
   {

    FUNC_11(&VAR_19, VAR_10, VAR_12);
    VAR_14 = FUNC_1(VAR_9,
            FUNC_0(FUNC_12(VAR_11)),
            FUNC_4(VAR_5),
            FUNC_2(-1));
    FUNC_5(&VAR_19);

    VAR_16 = VAR_6;
    VAR_17 = -1;
    VAR_18 = 0;
   }
   break;

  case 128:





   VAR_14 = FUNC_0(FUNC_12(VAR_11));

   VAR_16 = VAR_7;
   VAR_17 = -2;
   VAR_18 = 0;
   break;

  case 132:

   FUNC_11(&VAR_19, VAR_10, VAR_12);
   VAR_14 = FUNC_1(VAR_8,
           FUNC_0(FUNC_12(VAR_11)),
           FUNC_4(VAR_5),
           FUNC_2(-1));
   FUNC_5(&VAR_19);
   VAR_16 = VAR_0;
   VAR_17 = -1;
   VAR_18 = 0;
   break;

  case 129:

   VAR_13 = FUNC_8(VAR_7,
       -1,
       VAR_5,
       -2,
       (Datum) 0,
       1,
       0);
   VAR_13->location = VAR_12;
   return VAR_13;

  default:
   FUNC_6(VAR_1, "unrecognized node type: %d", (int) FUNC_9(VAR_11));
   return ((void*)0);
 }

 VAR_13 = FUNC_8(VAR_16,
     -1,
     VAR_5,
     VAR_17,
     VAR_14,
     0,
     VAR_18);
 VAR_13->location = VAR_12;

 return VAR_13;
}
