
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct image {scalar_t__ type; scalar_t__ components; scalar_t__ multiplier; scalar_t__ w; scalar_t__ h; int transform; TYPE_2__* tex; } ;
struct TYPE_3__ {scalar_t__ format; scalar_t__ w; scalar_t__ h; } ;
struct TYPE_4__ {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct image VAR_0, struct image VAR_1)
{
    return VAR_0.type == VAR_1.type &&
           VAR_0.components == VAR_1.components &&
           VAR_0.multiplier == VAR_1.multiplier &&
           VAR_0.tex->params.format == VAR_1.tex->params.format &&
           VAR_0.tex->params.w == VAR_1.tex->params.w &&
           VAR_0.tex->params.h == VAR_1.tex->params.h &&
           VAR_0.w == VAR_1.w &&
           VAR_0.h == VAR_1.h &&
           FUNC_0(VAR_0.transform, VAR_1.transform);
}
