
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp_st_data {int ch1gain; int ch0gain; } ;
struct omap_mcbsp {int lock; struct omap_mcbsp_st_data* st_data; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct omap_mcbsp *VAR_2, int VAR_3,
        s16 *VAR_4)
{
 struct omap_mcbsp_st_data *VAR_5 = VAR_2->st_data;
 int VAR_6 = 0;

 if (!VAR_5)
  return -VAR_1;

 FUNC_0(&VAR_2->lock);
 if (VAR_3 == 0)
  *VAR_4 = VAR_5->ch0gain;
 else if (VAR_3 == 1)
  *VAR_4 = VAR_5->ch1gain;
 else
  VAR_6 = -VAR_0;
 FUNC_1(&VAR_2->lock);

 return VAR_6;
}
