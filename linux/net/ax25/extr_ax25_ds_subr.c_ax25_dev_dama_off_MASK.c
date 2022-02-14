
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ slave; } ;
struct TYPE_8__ {TYPE_1__ dama; } ;
typedef TYPE_2__ ax25_dev ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;

void FUNC_3(ax25_dev *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->dama.slave && !FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, 5, 0);
  VAR_0->dama.slave = 0;
  FUNC_1(VAR_0);
 }
}
