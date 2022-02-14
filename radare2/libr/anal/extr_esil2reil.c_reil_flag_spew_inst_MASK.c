
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_14__ {TYPE_1__* anal; TYPE_2__* Reil; } ;
struct TYPE_13__ {int cur; } ;
struct TYPE_12__ {int bits; } ;
typedef TYPE_3__ RAnalEsil ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

void FUNC_8(RAnalEsil *VAR_0, const char *VAR_1) {
 ut8 VAR_2;
 switch (VAR_1[0]) {
  case 'z':
   FUNC_0(VAR_0, VAR_0->Reil->cur);
   break;
  case 'b':
   VAR_2 = (ut8)FUNC_2(((void*)0), &VAR_1[1]);
   FUNC_3(VAR_0, VAR_2);
   break;
  case 'c':
   VAR_2 = (ut8)FUNC_2(((void*)0), &VAR_1[1]);
   FUNC_4(VAR_0, VAR_2);
   break;
  case 'o':
   FUNC_5(VAR_0);
   break;
  case 'p':
   FUNC_6(VAR_0);
   break;
  case 'r':
   FUNC_1(VAR_0, VAR_0->anal->bits / 8);
   break;
  case 's':
   FUNC_7(VAR_0);
   break;
  default:
   return;
 }

 return;
}
