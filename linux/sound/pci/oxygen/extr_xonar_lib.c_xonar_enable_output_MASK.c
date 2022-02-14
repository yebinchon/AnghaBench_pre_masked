
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_generic {int output_enable_bit; int anti_pop_delay; } ;
struct oxygen {struct xonar_generic* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct oxygen*,int ,int ) ;

void FUNC_2(struct oxygen *VAR_2)
{
 struct xonar_generic *VAR_3 = VAR_2->model_data;

 FUNC_1(VAR_2, VAR_0, VAR_3->output_enable_bit);
 FUNC_0(VAR_3->anti_pop_delay);
 FUNC_1(VAR_2, VAR_1, VAR_3->output_enable_bit);
}
