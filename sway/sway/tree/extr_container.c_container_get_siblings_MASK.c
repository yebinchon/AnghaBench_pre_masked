
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {TYPE_2__* workspace; TYPE_1__* parent; } ;
typedef int list_t ;
struct TYPE_4__ {int * floating; int * tiling; } ;
struct TYPE_3__ {int * children; } ;


 scalar_t__ FUNC_0 (struct sway_container*) ;
 int FUNC_1 (int *,struct sway_container*) ;

list_t *FUNC_2(struct sway_container *VAR_0) {
 if (VAR_0->parent) {
  return VAR_0->parent->children;
 }
 if (FUNC_0(VAR_0)) {
  return ((void*)0);
 }
 if (FUNC_1(VAR_0->workspace->tiling, VAR_0) != -1) {
  return VAR_0->workspace->tiling;
 }
 return VAR_0->workspace->floating;
}
