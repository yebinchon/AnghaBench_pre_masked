
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ParseState ;
typedef int ParseCallbackState ;
typedef int Oid ;
typedef int List ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;

Oid
FUNC_3(ParseState *VAR_0, List *VAR_1, int VAR_2)
{
 Oid VAR_3;
 ParseCallbackState VAR_4;

 if (VAR_0)
  FUNC_2(&VAR_4, VAR_0, VAR_2);

 VAR_3 = FUNC_1(VAR_1, 0);

 if (VAR_0)
  FUNC_0(&VAR_4);

 return VAR_3;
}
