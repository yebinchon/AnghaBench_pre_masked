
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonbValue ;
typedef int JsonbParseState ;
typedef int JsonValueListIterator ;
typedef int JsonValueList ;


 int FUNC_0 (int const*,int *) ;
 int * FUNC_1 (int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int **,int ,int *) ;

__attribute__((used)) static JsonbValue *
FUNC_3(const JsonValueList *VAR_3)
{
 JsonbParseState *VAR_4 = ((void*)0);
 JsonValueListIterator VAR_5;
 JsonbValue *VAR_6;

 FUNC_2(&VAR_4, VAR_0, ((void*)0));

 FUNC_0(VAR_3, &VAR_5);
 while ((VAR_6 = FUNC_1(VAR_3, &VAR_5)))
  FUNC_2(&VAR_4, VAR_1, VAR_6);

 return FUNC_2(&VAR_4, VAR_2, ((void*)0));
}
