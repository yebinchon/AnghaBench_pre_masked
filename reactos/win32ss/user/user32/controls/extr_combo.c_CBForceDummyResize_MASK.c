
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int self; } ;
struct TYPE_6__ {scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* LPHEADCOMBO ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int ,int ,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_4(
  LPHEADCOMBO VAR_3)
{
  RECT VAR_4;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_3->self,VAR_3) + 2*FUNC_1();

  FUNC_2(VAR_3->self, &VAR_4);
  FUNC_3( VAR_3->self,
  ((void*)0),
  0, 0,
  VAR_4.right - VAR_4.left,
  VAR_5,
  VAR_1 | VAR_2 | VAR_0 );
}
