
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* workspace; TYPE_2__* parent; } ;
struct sway_container {TYPE_5__ current; } ;
typedef int list_t ;
struct TYPE_8__ {int * tiling; } ;
struct TYPE_9__ {TYPE_3__ current; } ;
struct TYPE_6__ {int * children; } ;
struct TYPE_7__ {TYPE_1__ current; } ;



list_t *FUNC_0(struct sway_container *VAR_0) {
 if (VAR_0->current.parent) {
  return VAR_0->current.parent->current.children;
 }
 return VAR_0->current.workspace->current.tiling;
}
