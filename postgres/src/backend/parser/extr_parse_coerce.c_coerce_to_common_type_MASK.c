
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int Oid ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int *,int *,int ) ;
 int * FUNC_1 (int *,int *,int ,int ,int,int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

Node *
FUNC_9(ParseState *VAR_4, Node *VAR_5,
       Oid VAR_6, const char *VAR_7)
{
 Oid VAR_8 = FUNC_6(VAR_5);

 if (VAR_8 == VAR_6)
  return VAR_5;
 if (FUNC_0(1, &VAR_8, &VAR_6, VAR_1))
  VAR_5 = FUNC_1(VAR_4, VAR_5, VAR_8, VAR_6, -1,
         VAR_1, VAR_0, -1);
 else
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),

     FUNC_4("%s could not convert type %s to %s",
      VAR_7,
      FUNC_7(VAR_8),
      FUNC_7(VAR_6)),
     FUNC_8(VAR_4, FUNC_5(VAR_5))));
 return VAR_5;
}
