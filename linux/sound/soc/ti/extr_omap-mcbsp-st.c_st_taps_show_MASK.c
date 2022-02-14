
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp_st_data {int nr_taps; int * taps; } ;
struct omap_mcbsp {int lock; struct omap_mcbsp_st_data* st_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct omap_mcbsp* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct omap_mcbsp *VAR_3 = FUNC_0(VAR_0);
 struct omap_mcbsp_st_data *VAR_4 = VAR_3->st_data;
 ssize_t VAR_5 = 0;
 int VAR_6;

 FUNC_1(&VAR_3->lock);
 for (VAR_6 = 0; VAR_6 < VAR_4->nr_taps; VAR_6++)
  VAR_5 += FUNC_3(&VAR_2[VAR_5], (VAR_6 ? ", %d" : "%d"),
      VAR_4->taps[VAR_6]);
 if (VAR_6)
  VAR_5 += FUNC_3(&VAR_2[VAR_5], "\n");
 FUNC_2(&VAR_3->lock);

 return VAR_5;
}
