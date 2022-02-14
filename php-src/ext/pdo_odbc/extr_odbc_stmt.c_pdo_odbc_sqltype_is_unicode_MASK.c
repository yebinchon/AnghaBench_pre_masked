
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int assume_utf8; } ;
typedef TYPE_1__ pdo_odbc_stmt ;
typedef int SWORD ;






__attribute__((used)) static int FUNC_0(pdo_odbc_stmt *VAR_0, SWORD VAR_1)
{
 if (!VAR_0->assume_utf8) return 0;
 switch (VAR_1) {

  case 130:
   return 1;


  case 129:
   return 1;


  case 128:
   return 1;

  default:
   return 0;
 }
}
