
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_module {int state; } ;
struct sst_hsw {int dsp; } ;
typedef enum sst_hsw_module_id { ____Placeholder_sst_hsw_module_id } sst_hsw_module_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sst_module* FUNC_0 (int ,int) ;

void FUNC_1(struct sst_hsw *VAR_5)
{
 struct sst_module *VAR_6;
 enum sst_hsw_module_id VAR_7;


 for (VAR_7 = VAR_1; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5->dsp, VAR_7);
  if (VAR_6) {

   if (VAR_7 == VAR_2)
    VAR_6->state = VAR_4;
   else
    VAR_6->state = VAR_3;
  }
 }
}
