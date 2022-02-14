
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef scalar_t__ Oid ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int *,scalar_t__,scalar_t__,int,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int ) ;

Node *
FUNC_9(ParseState *VAR_5, Node *VAR_6,
      const char *VAR_7)
{
 Oid VAR_8 = FUNC_5(VAR_6);

 if (VAR_8 != VAR_0)
 {
  Node *VAR_9;

  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_8,
          VAR_0, -1,
          VAR_2,
          VAR_1,
          -1);
  if (VAR_9 == ((void*)0))
   FUNC_1(VAR_4,
     (FUNC_2(VAR_3),

      FUNC_3("argument of %s must be type %s, not type %s",
       VAR_7, "boolean",
       FUNC_7(VAR_8)),
      FUNC_8(VAR_5, FUNC_4(VAR_6))));
  VAR_6 = VAR_9;
 }

 if (FUNC_6(VAR_6))
  FUNC_1(VAR_4,
    (FUNC_2(VAR_3),

     FUNC_3("argument of %s must not return a set",
      VAR_7),
     FUNC_8(VAR_5, FUNC_4(VAR_6))));

 return VAR_6;
}
