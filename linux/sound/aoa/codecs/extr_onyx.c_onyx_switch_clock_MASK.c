
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* gpio; } ;
struct onyx {int mutex; TYPE_2__ codec; } ;
struct codec_info_item {struct onyx* codec_data; } ;
typedef enum clock_switch { ____Placeholder_clock_switch } clock_switch ;
struct TYPE_7__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* all_amps_restore ) (TYPE_3__*) ;int (* all_amps_off ) (TYPE_3__*) ;} ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct codec_info_item *VAR_0,
        enum clock_switch VAR_1)
{
 struct onyx *VAR_2 = VAR_0->codec_data;

 FUNC_0(&VAR_2->mutex);

 switch (VAR_1) {
 case 129:
  VAR_2->codec.gpio->methods->all_amps_off(VAR_2->codec.gpio);
  break;
 case 128:
  VAR_2->codec.gpio->methods->all_amps_restore(VAR_2->codec.gpio);
  break;
 default:
  break;
 }
 FUNC_1(&VAR_2->mutex);

 return 0;
}
