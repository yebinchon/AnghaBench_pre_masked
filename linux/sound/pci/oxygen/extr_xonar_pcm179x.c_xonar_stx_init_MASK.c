
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int anti_pop_delay; int ext_power_bit; int ext_power_int_reg; int ext_power_reg; } ;
struct xonar_pcm179x {TYPE_1__ generic; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (struct oxygen*) ;
 int FUNC_2 (struct oxygen*) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_3)
{
 struct xonar_pcm179x *VAR_4 = VAR_3->model_data;

 FUNC_2(VAR_3);
 VAR_4->generic.anti_pop_delay = 800;
 VAR_4->generic.ext_power_reg = VAR_1;
 VAR_4->generic.ext_power_int_reg = VAR_2;
 VAR_4->generic.ext_power_bit = VAR_0;
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
