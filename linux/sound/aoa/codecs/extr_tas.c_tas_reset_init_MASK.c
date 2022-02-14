
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {TYPE_3__* gpio; } ;
struct tas {int acr; int bass; int treble; TYPE_2__ codec; } ;
struct TYPE_10__ {TYPE_1__* methods; } ;
struct TYPE_8__ {int (* all_amps_restore ) (TYPE_3__*) ;int (* set_hw_reset ) (TYPE_3__*,int) ;int (* all_amps_off ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct tas*) ;
 int FUNC_7 (struct tas*) ;
 int FUNC_8 (struct tas*) ;
 scalar_t__ FUNC_9 (struct tas*,int ,int,int*) ;

__attribute__((used)) static int FUNC_10(struct tas *VAR_10)
{
 u8 VAR_11;

 VAR_10->codec.gpio->methods->all_amps_off(VAR_10->codec.gpio);
 FUNC_0(5);
 VAR_10->codec.gpio->methods->set_hw_reset(VAR_10->codec.gpio, 0);
 FUNC_0(5);
 VAR_10->codec.gpio->methods->set_hw_reset(VAR_10->codec.gpio, 1);
 FUNC_0(20);
 VAR_10->codec.gpio->methods->set_hw_reset(VAR_10->codec.gpio, 0);
 FUNC_0(10);
 VAR_10->codec.gpio->methods->all_amps_restore(VAR_10->codec.gpio);

 VAR_11 = VAR_4 | VAR_5 | VAR_6;
 if (FUNC_9(VAR_10, VAR_8, 1, &VAR_11))
  goto outerr;

 VAR_10->acr |= VAR_3;
 if (FUNC_9(VAR_10, VAR_7, 1, &VAR_10->acr))
  goto outerr;

 VAR_11 = 0;
 if (FUNC_9(VAR_10, VAR_9, 1, &VAR_11))
  goto outerr;

 FUNC_6(VAR_10);


 VAR_10->treble = VAR_2;
 VAR_10->bass = VAR_1;
 FUNC_8(VAR_10);
 FUNC_7(VAR_10);

 VAR_10->acr &= ~VAR_3;
 if (FUNC_9(VAR_10, VAR_7, 1, &VAR_10->acr))
  goto outerr;

 return 0;
 outerr:
 return -VAR_0;
}
