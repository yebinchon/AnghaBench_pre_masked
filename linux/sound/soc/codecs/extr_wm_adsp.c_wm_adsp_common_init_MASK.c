
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {int pwr_lock; int buffer_list; int compr_list; int ctl_list; int alg_regions; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm_adsp*) ;

__attribute__((used)) static int FUNC_3(struct wm_adsp *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(&VAR_0->alg_regions);
 FUNC_0(&VAR_0->ctl_list);
 FUNC_0(&VAR_0->compr_list);
 FUNC_0(&VAR_0->buffer_list);

 FUNC_1(&VAR_0->pwr_lock);

 return 0;
}
