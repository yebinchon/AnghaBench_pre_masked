
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ParseState ;
typedef int Oid ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

Node *
FUNC_9(ParseState *VAR_4, Node *VAR_5,
          Oid VAR_6, int32 VAR_7,
          const char *VAR_8)
{
 Oid VAR_9 = FUNC_5(VAR_5);

 if (VAR_9 != VAR_6)
 {
  Node *VAR_10;

  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_9,
          VAR_6, VAR_7,
          VAR_1,
          VAR_0,
          -1);
  if (VAR_10 == ((void*)0))
   FUNC_1(VAR_3,
     (FUNC_2(VAR_2),

      FUNC_3("argument of %s must be type %s, not type %s",
       VAR_8,
       FUNC_7(VAR_6),
       FUNC_7(VAR_9)),
      FUNC_8(VAR_4, FUNC_4(VAR_5))));
  VAR_5 = VAR_10;
 }

 if (FUNC_6(VAR_5))
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),

     FUNC_3("argument of %s must not return a set",
      VAR_8),
     FUNC_8(VAR_4, FUNC_4(VAR_5))));

 return VAR_5;
}
