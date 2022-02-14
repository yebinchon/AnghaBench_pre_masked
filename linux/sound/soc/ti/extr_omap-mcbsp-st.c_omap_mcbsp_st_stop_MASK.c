
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp_st_data {scalar_t__ running; } ;
struct omap_mcbsp {int free; struct omap_mcbsp_st_data* st_data; } ;


 int FUNC_0 (struct omap_mcbsp*) ;

int FUNC_1(struct omap_mcbsp *VAR_0)
{
 struct omap_mcbsp_st_data *VAR_1 = VAR_0->st_data;

 if (VAR_1->running) {
  if (!VAR_0->free) {
   FUNC_0(VAR_0);
   VAR_1->running = 0;
  }
 }

 return 0;
}
