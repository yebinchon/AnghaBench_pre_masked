
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_generic {int output_enable_bit; } ;
struct oxygen {struct xonar_generic* model_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct oxygen*,int ,int ) ;

void FUNC_1(struct oxygen *VAR_1)
{
 struct xonar_generic *VAR_2 = VAR_1->model_data;

 FUNC_0(VAR_1, VAR_0, VAR_2->output_enable_bit);
}
