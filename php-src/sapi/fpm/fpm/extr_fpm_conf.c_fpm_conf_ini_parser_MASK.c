
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;





 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int*) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(zval *VAR_3, zval *VAR_4, zval *VAR_5, int VAR_6, void *VAR_7)
{
 int *VAR_8;

 if (!VAR_3 || !VAR_7) return;
 VAR_8 = (int *)VAR_7;
 if (*VAR_8) return;

 switch(VAR_6) {
  case 130:
   FUNC_1(VAR_3, VAR_4, VAR_8);
   break;
  case 128:
   FUNC_2(VAR_3, VAR_8);
   break;
  case 129:
   FUNC_0(VAR_3, VAR_5, VAR_4, VAR_8);
   break;
  default:
   FUNC_3(VAR_0, "[%s:%d] Unknown INI syntax", VAR_1, VAR_2);
   *VAR_8 = 1;
   break;
 }
}
