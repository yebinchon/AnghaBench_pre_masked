
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* gpio; } ;
struct tas {int hw_enabled; int mtx; TYPE_1__ codec; } ;
struct codec_info_item {struct tas* codec_data; } ;
typedef enum clock_switch { ____Placeholder_clock_switch } clock_switch ;
struct TYPE_7__ {TYPE_2__* methods; } ;
struct TYPE_6__ {int (* all_amps_restore ) (TYPE_3__*) ;int (* all_amps_off ) (TYPE_3__*) ;} ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct tas*) ;
 int FUNC_5 (struct tas*) ;
 int FUNC_6 (struct tas*) ;

__attribute__((used)) static int FUNC_7(struct codec_info_item *VAR_1, enum clock_switch VAR_2)
{
 struct tas *VAR_3 = VAR_1->codec_data;

 switch(VAR_2) {
 case 129:

  VAR_3->codec.gpio->methods->all_amps_off(VAR_3->codec.gpio);
  VAR_3->hw_enabled = 0;
  break;
 case 128:

  FUNC_0(&VAR_3->mtx);
  FUNC_4(VAR_3);
  FUNC_6(VAR_3);
  FUNC_5(VAR_3);
  VAR_3->hw_enabled = 1;
  VAR_3->codec.gpio->methods->all_amps_restore(VAR_3->codec.gpio);
  FUNC_1(&VAR_3->mtx);
  break;
 default:

  return -VAR_0;
 }
 return 0;
}
