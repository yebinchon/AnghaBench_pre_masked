
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int dcs_done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct wm_hubs_data *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->dcs_done);

 return VAR_0;
}
