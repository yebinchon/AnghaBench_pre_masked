
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int boundbox; } ;
struct TYPE_4__ {int sk_subtype; int sk_argument; int sk_strategy; } ;
typedef TYPE_1__* ScanKey ;
typedef int BOX ;



 int * FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;

 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOX *
FUNC_4(ScanKey VAR_1, bool *VAR_2)
{
 switch (VAR_1->sk_subtype)
 {
  case 129:
   return FUNC_0(VAR_1->sk_argument);

  case 128:
   if (VAR_2 && !FUNC_3(VAR_1->sk_strategy))
    *VAR_2 = 1;
   return &FUNC_1(VAR_1->sk_argument)->boundbox;

  default:
   FUNC_2(VAR_0, "unrecognized scankey subtype: %d", VAR_1->sk_subtype);
   return ((void*)0);
 }
}
