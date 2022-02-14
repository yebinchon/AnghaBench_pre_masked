
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int ParseExprKind ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*) ;
 int * FUNC_1 (int *,int *,int ,char const*) ;
 int * FUNC_2 (int *,int *,int ) ;

Node *
FUNC_3(ParseState *VAR_1, Node *VAR_2,
      ParseExprKind VAR_3, const char *VAR_4)
{
 Node *VAR_5;

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_1(VAR_1, VAR_5, VAR_0, VAR_4);


 FUNC_0(VAR_1, VAR_5, VAR_4);

 return VAR_5;
}
