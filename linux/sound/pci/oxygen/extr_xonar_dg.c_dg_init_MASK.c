
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {struct dg* model_data; } ;
struct dg {int input_sel; int output_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct oxygen*,int ,int) ;

void FUNC_3(struct oxygen *VAR_7)
{
 struct dg *VAR_8 = VAR_7->model_data;

 VAR_8->output_sel = VAR_6;
 VAR_8->input_sel = VAR_0;

 FUNC_0(VAR_7);
 FUNC_2(VAR_7, VAR_4,
         VAR_3 | VAR_1 | VAR_2);

 FUNC_1(2500);
 FUNC_2(VAR_7, VAR_5,
         VAR_3 | VAR_2);
}
