
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int condition; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(ax25_cb *VAR_6)
{
 if (VAR_6->condition & VAR_2)
  FUNC_1(VAR_6, VAR_4, VAR_3, VAR_0);
 else
  FUNC_1(VAR_6, VAR_5, VAR_3, VAR_0);

 VAR_6->condition &= ~VAR_1;

 FUNC_0(VAR_6);
 FUNC_2(VAR_6);
}
