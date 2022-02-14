
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ParseState ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int ListCell ;
typedef int List ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_1 (int *,int *,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *,int *,char const*,int,scalar_t__,int ,scalar_t__,int *,int *,int *,int) ;
 scalar_t__ FUNC_10 (int *,int *,scalar_t__,scalar_t__,int ,int *,int *) ;
 scalar_t__ FUNC_11 (scalar_t__*,int *) ;

__attribute__((used)) static Node *
FUNC_12(ParseState *VAR_5,
         Node *VAR_6,
         const char *VAR_7,
         Oid VAR_8,
         int32 VAR_9,
         Oid VAR_10,
         List *VAR_11,
         bool VAR_12,
         List *VAR_13,
         ListCell *VAR_14,
         Node *VAR_15,
         int VAR_16)
{
 Node *VAR_17;
 Oid VAR_18;
 int32 VAR_19;
 Oid VAR_20;
 Oid VAR_21;
 Oid VAR_22;

 FUNC_0(VAR_11 != VAR_4);


 VAR_18 = VAR_8;
 VAR_19 = VAR_9;
 VAR_20 = FUNC_11(&VAR_18, &VAR_19);


 VAR_21 = VAR_12 ? VAR_18 : VAR_20;






 if (VAR_18 == VAR_8)
  VAR_22 = VAR_10;
 else
  VAR_22 = FUNC_7(VAR_18);


 VAR_15 = FUNC_9(VAR_5,
           ((void*)0),
           VAR_7,
           1,
           VAR_21,
           VAR_19,
           VAR_22,
           VAR_13,
           VAR_14,
           VAR_15,
           VAR_16);


 VAR_17 = (Node *) FUNC_10(VAR_5,
               VAR_6,
               VAR_18,
               VAR_20,
               VAR_19,
               VAR_11,
               VAR_15);


 if (VAR_18 != VAR_8)
 {
  Oid VAR_23 = FUNC_5(VAR_17);

  VAR_17 = FUNC_1(VAR_5,
            VAR_17, VAR_23,
            VAR_8, VAR_9,
            VAR_1,
            VAR_0,
            -1);

  if (VAR_17 == ((void*)0))
   FUNC_2(VAR_3,
     (FUNC_3(VAR_2),
      FUNC_4("cannot cast type %s to %s",
       FUNC_6(VAR_23),
       FUNC_6(VAR_8)),
      FUNC_8(VAR_5, VAR_16)));
 }

 return VAR_17;
}
