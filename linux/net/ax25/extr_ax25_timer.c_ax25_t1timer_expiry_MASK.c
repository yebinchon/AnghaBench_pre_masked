
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_9__ {TYPE_2__* ax25_dev; } ;
typedef TYPE_3__ ax25_cb ;
struct TYPE_7__ {int slave; } ;
struct TYPE_8__ {int* values; TYPE_1__ dama; } ;





 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_3)
{
 ax25_cb *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);

 switch (VAR_4->ax25_dev->values[VAR_0]) {
 case 128:
 case 129:
  FUNC_0(VAR_4);
  break;







 }
}
