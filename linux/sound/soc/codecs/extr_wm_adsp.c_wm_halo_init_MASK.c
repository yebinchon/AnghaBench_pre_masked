
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {int boot_work; int * ops; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct wm_adsp*) ;
 int VAR_1 ;

int FUNC_2(struct wm_adsp *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->ops = &VAR_1;

 FUNC_0(&VAR_2->boot_work, VAR_0);

 return 0;
}
