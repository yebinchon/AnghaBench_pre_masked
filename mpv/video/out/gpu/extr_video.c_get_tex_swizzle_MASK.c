
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct image {TYPE_3__* tex; } ;
struct TYPE_5__ {TYPE_1__* format; } ;
struct TYPE_6__ {TYPE_2__ params; } ;
struct TYPE_4__ {scalar_t__ luminance_alpha; } ;



__attribute__((used)) static const char *FUNC_0(struct image *VAR_0)
{
    if (!VAR_0->tex)
        return "rgba";
    return VAR_0->tex->params.format->luminance_alpha ? "raaa" : "rgba";
}
