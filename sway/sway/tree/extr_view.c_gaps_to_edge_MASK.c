
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {TYPE_2__* container; } ;
struct side_gaps {scalar_t__ top; scalar_t__ right; scalar_t__ bottom; scalar_t__ left; } ;
struct TYPE_4__ {TYPE_1__* workspace; } ;
struct TYPE_3__ {struct side_gaps current_gaps; } ;



__attribute__((used)) static bool FUNC_0(struct sway_view *VAR_0) {
 struct side_gaps VAR_1 = VAR_0->container->workspace->current_gaps;
 return VAR_1.top > 0 || VAR_1.right > 0 || VAR_1.bottom > 0 || VAR_1.left > 0;
}
