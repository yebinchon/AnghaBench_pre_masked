
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ height; TYPE_1__** children; } ;
typedef TYPE_2__ avl_node ;
struct TYPE_4__ {scalar_t__ height; } ;



__attribute__((used)) static void
FUNC_0(avl_node *VAR_0)
{
 VAR_0->height = 1 + (VAR_0->children[0]->height > VAR_0->children[1]->height ?
      VAR_0->children[0]->height :
      VAR_0->children[1]->height);
}
