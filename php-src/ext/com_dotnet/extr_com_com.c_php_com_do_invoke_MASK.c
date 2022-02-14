
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_com_dotnet_object ;
typedef int WORD ;
typedef int VARIANT ;
typedef int HRESULT ;
typedef int DISPID ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ,int *,int,int *,int ,int) ;
 int FUNC_3 (int *,char*,size_t,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char**,int ,char*,char*,char*) ;

int FUNC_8(php_com_dotnet_object *VAR_1, char *VAR_2, size_t VAR_3,
  WORD VAR_4, VARIANT *VAR_5, int VAR_6, zval *VAR_7, int VAR_8)
{
 DISPID VAR_9;
 HRESULT VAR_10;
 char *VAR_11 = ((void*)0);

 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_9);

 if (FUNC_0(VAR_10)) {
  char *VAR_12 = FUNC_6(VAR_10);
  FUNC_7(&VAR_11, 0, "Unable to lookup `%s': %s", VAR_2, VAR_12);
  FUNC_5(VAR_12);
  FUNC_4(VAR_10, VAR_11);
  FUNC_1(VAR_11);
  return VAR_0;
 }

 return FUNC_2(VAR_1, VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, 0, VAR_8);
}
