
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int condition; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(ax25_cb *VAR_1)
{
 if (VAR_1->condition & VAR_0) {
  VAR_1->condition &= ~VAR_0;
  FUNC_0(VAR_1);
 }
}
