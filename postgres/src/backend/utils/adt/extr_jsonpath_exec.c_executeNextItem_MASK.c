
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonbValue ;
typedef int JsonValueList ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static JsonPathExecResult
FUNC_5(JsonPathExecContext *VAR_1,
    JsonPathItem *VAR_2, JsonPathItem *VAR_3,
    JsonbValue *VAR_4, JsonValueList *VAR_5, bool VAR_6)
{
 JsonPathItem VAR_7;
 bool VAR_8;

 if (!VAR_2)
  VAR_8 = VAR_3 != ((void*)0);
 else if (VAR_3)
  VAR_8 = FUNC_4(VAR_2);
 else
 {
  VAR_3 = &VAR_7;
  VAR_8 = FUNC_3(VAR_2, VAR_3);
 }

 if (VAR_8)
  return FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5);

 if (VAR_5)
  FUNC_0(VAR_5, VAR_6 ? FUNC_1(VAR_4) : VAR_4);

 return VAR_0;
}
