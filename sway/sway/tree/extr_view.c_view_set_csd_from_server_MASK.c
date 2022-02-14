
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_view {int using_csd; TYPE_1__* xdg_decoration; } ;
struct TYPE_2__ {int wlr_xdg_decoration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct sway_view*,int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct sway_view *VAR_3, bool VAR_4) {
 FUNC_0(VAR_0, "Telling view %p to set CSD to %i", VAR_3, VAR_4);
 if (VAR_3->xdg_decoration) {
  uint32_t VAR_5 = VAR_4 ?
   VAR_1 :
   VAR_2;
  FUNC_1(
    VAR_3->xdg_decoration->wlr_xdg_decoration, VAR_5);
 }
 VAR_3->using_csd = VAR_4;
}
