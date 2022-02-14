
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_view {int using_csd; struct sway_container* container; } ;
struct sway_container {scalar_t__ border; scalar_t__ saved_border; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sway_container*) ;
 int FUNC_1 (int ,char*,struct sway_view*,int) ;

void FUNC_2(struct sway_view *VAR_2, bool VAR_3) {
 FUNC_1(VAR_1, "View %p updated CSD to %i", VAR_2, VAR_3);
 struct sway_container *VAR_4 = VAR_2->container;
 if (VAR_3 && VAR_4 && VAR_4->border != VAR_0) {
  VAR_4->saved_border = VAR_4->border;
  if (FUNC_0(VAR_4)) {
   VAR_4->border = VAR_0;
  }
 } else if (!VAR_3 && VAR_4 && VAR_4->border == VAR_0) {
  VAR_4->border = VAR_4->saved_border;
 }
 VAR_2->using_csd = VAR_3;
}
