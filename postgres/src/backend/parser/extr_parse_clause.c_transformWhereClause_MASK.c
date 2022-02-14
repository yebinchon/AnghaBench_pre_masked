
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int ParseExprKind ;
typedef int Node ;


 int * FUNC_0 (int *,int *,char const*) ;
 int * FUNC_1 (int *,int *,int ) ;

Node *
FUNC_2(ParseState *VAR_0, Node *VAR_1,
      ParseExprKind VAR_2, const char *VAR_3)
{
 Node *VAR_4;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_4 = FUNC_0(VAR_0, VAR_4, VAR_3);

 return VAR_4;
}
