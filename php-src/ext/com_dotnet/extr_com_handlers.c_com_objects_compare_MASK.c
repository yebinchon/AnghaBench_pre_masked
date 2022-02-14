
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int STDAPI ;
typedef int * LPVARIANT ;
typedef int LCID ;
typedef int DWORD ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;



 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(zval *VAR_1, zval *VAR_2)
{
 php_com_dotnet_object *VAR_3, *VAR_4;
 int VAR_5;




 STDAPI FUNC_3(LPVARIANT VAR_6, LPVARIANT VAR_7, LCID VAR_8, DWORD VAR_9);

 FUNC_1(VAR_1, VAR_2);

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_0(VAR_2);

 switch (FUNC_3(&VAR_3->v, &VAR_4->v, VAR_0, 0)) {
  case 128:
   VAR_5 = -1;
   break;
  case 129:
   VAR_5 = 1;
   break;
  case 130:
   VAR_5 = 0;
   break;
  default:


   VAR_5 = -2;
 }

 return VAR_5;
}
