
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {scalar_t__ id_of_name_cache; int v; int * typeinfo; int code_page; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int OLECHAR ;
typedef int HRESULT ;
typedef scalar_t__ DISPID ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int **,int,int ,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int **,int,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,size_t,int ) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__,int,int *,int *,int ) ;
 int * FUNC_13 (scalar_t__,char*,size_t) ;
 int FUNC_14 (scalar_t__,char*,size_t,int *) ;

HRESULT FUNC_15(php_com_dotnet_object *VAR_3, char *VAR_4,
  size_t VAR_5, DISPID *VAR_6)
{
 OLECHAR *VAR_7;
 HRESULT VAR_8;
 zval *VAR_9;

 if (VAR_5 == -1) {
  VAR_5 = FUNC_11(VAR_4);
 }

 if (VAR_3->id_of_name_cache && ((void*)0) != (VAR_9 = FUNC_13(VAR_3->id_of_name_cache, VAR_4, VAR_5))) {
  *VAR_6 = (DISPID)FUNC_8(VAR_9);
  return VAR_2;
 }

 VAR_7 = FUNC_10(VAR_4, VAR_5, VAR_3->code_page);

 if (VAR_3->typeinfo) {
  VAR_8 = FUNC_3(VAR_3->typeinfo, &VAR_7, 1, VAR_6);
  if (FUNC_1(VAR_8)) {
   VAR_8 = FUNC_2(FUNC_6(&VAR_3->v), &VAR_0, &VAR_7, 1, VAR_1, VAR_6);
   if (FUNC_5(VAR_8)) {

    FUNC_4(VAR_3->typeinfo);
    VAR_3->typeinfo = ((void*)0);
   }
  }
 } else {
  VAR_8 = FUNC_2(FUNC_6(&VAR_3->v), &VAR_0, &VAR_7, 1, VAR_1, VAR_6);
 }
 FUNC_9(VAR_7);

 if (FUNC_5(VAR_8)) {
  zval VAR_10;


  if (!VAR_3->id_of_name_cache) {
   FUNC_0(VAR_3->id_of_name_cache);
   FUNC_12(VAR_3->id_of_name_cache, 2, ((void*)0), ((void*)0), 0);
  }
  FUNC_7(&VAR_10, *VAR_6);
  FUNC_14(VAR_3->id_of_name_cache, VAR_4, VAR_5, &VAR_10);
 }

 return VAR_8;
}
