
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp_st_data {scalar_t__ enabled; } ;
struct omap_mcbsp {int lock; struct omap_mcbsp_st_data* st_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_mcbsp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct omap_mcbsp *VAR_1)
{
 struct omap_mcbsp_st_data *VAR_2 = VAR_1->st_data;
 int VAR_3 = 0;

 if (!VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1);
 VAR_2->enabled = 0;
 FUNC_2(&VAR_1->lock);

 return VAR_3;
}
