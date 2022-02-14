
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * k; } ;
typedef int TValue ;
typedef TYPE_1__ Proto ;


 char* VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static void FUNC_6(const Proto* VAR_1, int VAR_2)
{
 const TValue* VAR_3=&VAR_1->k[VAR_2];
 switch (FUNC_5(VAR_3))
 {
  case 130:
 FUNC_3("nil");
 break;
  case 131:
 FUNC_3(FUNC_1(VAR_3) ? "true" : "false");
 break;
  case 129:
 FUNC_3(VAR_0,FUNC_2(VAR_3));
 break;
  case 128:
 FUNC_0(FUNC_4(VAR_3));
 break;
  default:
 FUNC_3("? type=%d",FUNC_5(VAR_3));
 break;
 }
}
