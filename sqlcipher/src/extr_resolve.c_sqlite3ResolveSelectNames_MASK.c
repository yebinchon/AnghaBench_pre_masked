
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pNC; } ;
struct TYPE_5__ {TYPE_1__ u; int * pParse; scalar_t__ xSelectCallback2; int xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Select ;
typedef int Parse ;
typedef int NameContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;

void FUNC_2(
  Parse *VAR_2,
  Select *VAR_3,
  NameContext *VAR_4
){
  Walker VAR_5;

  FUNC_0( VAR_3!=0 );
  VAR_5.xExprCallback = VAR_0;
  VAR_5.xSelectCallback = VAR_1;
  VAR_5.xSelectCallback2 = 0;
  VAR_5.pParse = VAR_2;
  VAR_5.u.pNC = VAR_4;
  FUNC_1(&VAR_5, VAR_3);
}
