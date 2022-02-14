
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {TYPE_1__* impl; struct sway_view* title_format; int executed_criteria; int * container; int destroying; int * surface; } ;
struct TYPE_2__ {int (* destroy ) (struct sway_view*) ;} ;


 int FUNC_0 (struct sway_view*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sway_view*) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct sway_view *VAR_0) {
 if (!FUNC_3(VAR_0->surface == ((void*)0), "Tried to free mapped view")) {
  return;
 }
 if (!FUNC_3(VAR_0->destroying,
    "Tried to free view which wasn't marked as destroying")) {
  return;
 }
 if (!FUNC_3(VAR_0->container == ((void*)0),
    "Tried to free view which still has a container "
    "(might have a pending transaction?)")) {
  return;
 }
 FUNC_1(VAR_0->executed_criteria);

 FUNC_0(VAR_0->title_format);

 if (VAR_0->impl->destroy) {
  VAR_0->impl->destroy(VAR_0);
 } else {
  FUNC_0(VAR_0);
 }
}
