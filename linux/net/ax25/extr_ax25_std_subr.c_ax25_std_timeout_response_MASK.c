
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int condition; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

void FUNC_1(ax25_cb *VAR_6)
{
 if (VAR_6->condition & VAR_1)
  FUNC_0(VAR_6, VAR_4, VAR_2, VAR_3);
 else
  FUNC_0(VAR_6, VAR_5, VAR_2, VAR_3);

 VAR_6->condition &= ~VAR_0;
}
