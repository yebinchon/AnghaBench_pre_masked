
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp_st_data {int enabled; } ;
struct omap_mcbsp {struct omap_mcbsp_st_data* st_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct omap_mcbsp *VAR_1)
{
 struct omap_mcbsp_st_data *VAR_2 = VAR_1->st_data;

 if (!VAR_2)
  return -VAR_0;

 return VAR_2->enabled;
}
