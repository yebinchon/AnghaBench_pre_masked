
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ParseState ;
typedef int Oid ;
typedef int Node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *,int *,int ) ;

Node *
FUNC_14(ParseState *VAR_7,
   Node *VAR_8,
   Oid VAR_9,
   int32 VAR_10,
   const char *VAR_11,
   char VAR_12)
{
 Node *VAR_13;

 FUNC_0(VAR_8 != ((void*)0));




 VAR_13 = FUNC_13(VAR_7, VAR_8, VAR_12 ? VAR_6 : VAR_5);

 if (VAR_12)
 {
  FUNC_3(VAR_7, VAR_13);

  if (FUNC_5(VAR_13))
   FUNC_7(VAR_4,
     (FUNC_8(VAR_3),
      FUNC_10("generation expression is not immutable")));
 }
 else
 {




  FUNC_0(!FUNC_6(VAR_13));
 }






 if (FUNC_1(VAR_9))
 {
  Oid VAR_14 = FUNC_11(VAR_13);

  VAR_13 = FUNC_4(VAR_7, VAR_13, VAR_14,
          VAR_9, VAR_10,
          VAR_1,
          VAR_0,
          -1);
  if (VAR_13 == ((void*)0))
   FUNC_7(VAR_4,
     (FUNC_8(VAR_2),
      FUNC_10("column \"%s\" is of type %s"
       " but default expression is of type %s",
       VAR_11,
       FUNC_12(VAR_9),
       FUNC_12(VAR_14)),
      FUNC_9("You will need to rewrite or cast the expression.")));
 }




 FUNC_2(VAR_7, VAR_13);

 return VAR_13;
}
