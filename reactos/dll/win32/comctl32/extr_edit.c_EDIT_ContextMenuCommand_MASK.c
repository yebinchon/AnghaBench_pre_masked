
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int hwndSelf; } ;
typedef TYPE_1__ EDITSTATE ;




 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int const,int ,int) ;




 int const VAR_0 ;

__attribute__((used)) static void FUNC_2(EDITSTATE *VAR_1, UINT VAR_2)
{
 switch (VAR_2) {
  case 132:
                        FUNC_1(VAR_1->hwndSelf, VAR_0, 0, 0);
   break;
  case 129:
                        FUNC_1(VAR_1->hwndSelf, 129, 0, 0);
   break;
  case 130:
                        FUNC_1(VAR_1->hwndSelf, 130, 0, 0);
   break;
  case 128:
                        FUNC_1(VAR_1->hwndSelf, 128, 0, 0);
   break;
  case 131:
                        FUNC_1(VAR_1->hwndSelf, 131, 0, 0);
   break;
  case 133:
                        FUNC_1(VAR_1->hwndSelf, 133, 0, -1);
   break;
  default:
   FUNC_0("unknown menu item, please report\n");
   break;
 }
}
