
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp_st_data {int running; int taps; scalar_t__ enabled; } ;
struct omap_mcbsp {int free; struct omap_mcbsp_st_data* st_data; } ;


 int FUNC_0 (struct omap_mcbsp*) ;
 int FUNC_1 (struct omap_mcbsp*,int ) ;
 int FUNC_2 (struct omap_mcbsp*) ;

int FUNC_3(struct omap_mcbsp *VAR_0)
{
 struct omap_mcbsp_st_data *VAR_1 = VAR_0->st_data;

 if (VAR_1->enabled && !VAR_1->running) {
  FUNC_1(VAR_0, VAR_1->taps);
  FUNC_0(VAR_0);

  if (!VAR_0->free) {
   FUNC_2(VAR_0);
   VAR_1->running = 1;
  }
 }

 return 0;
}
