
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int gdIOCtx ;
struct TYPE_6__ {int len; } ;
typedef TYPE_1__ bmp_info_t ;


 int FUNC_0 (int ) ;





 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int*,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(gdIOCtx *VAR_0, bmp_info_t *VAR_1)
{

 if (!FUNC_4(&VAR_1->len, VAR_0)) {
  return 1;
 }

 switch (VAR_1->len) {

 case 130:
 case 129:
 case 128:
  FUNC_0(FUNC_5("Reading Windows Header\n"));
  if (FUNC_3(VAR_0, VAR_1)) {
   return 1;
  }
  break;
 case 132:
  if (FUNC_1(VAR_0, VAR_1)) {
   return 1;
  }
  break;
 case 131:
  if (FUNC_2(VAR_0, VAR_1)) {
   return 1;
  }
  break;
 default:
  FUNC_0(FUNC_5("Unhandled bitmap\n"));
  return 1;
 }
 return 0;
}
