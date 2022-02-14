
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ x; } ;
struct TYPE_9__ {unsigned int numParts; TYPE_2__* parts; scalar_t__ simple; } ;
struct TYPE_7__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_8__ {TYPE_1__ bound; } ;
typedef TYPE_3__ STATUS_INFO ;
typedef TYPE_4__ POINT ;



__attribute__((used)) static int
FUNC_0(const STATUS_INFO *VAR_0, const POINT *VAR_1)
{
    unsigned int VAR_2;

    if (VAR_0->simple)
        return 255;

    for (VAR_2 = 0; VAR_2 < VAR_0->numParts; VAR_2++)
        if (VAR_1->x >= VAR_0->parts[VAR_2].bound.left && VAR_1->x <= VAR_0->parts[VAR_2].bound.right)
            return VAR_2;
    return -2;
}
