
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ upper; scalar_t__ lower; } ;
struct TYPE_8__ {TYPE_1__* ranges; TYPE_2__ range; } ;
struct TYPE_6__ {int hdpa; } ;
typedef TYPE_2__ RANGE ;
typedef TYPE_3__ ITERATOR ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static RANGE FUNC_2(const ITERATOR *VAR_0)
{
    RANGE VAR_1;

    if (!VAR_0->ranges) return VAR_0->range;

    if (FUNC_1(VAR_0->ranges->hdpa) > 0)
    {
        VAR_1.lower = (*(RANGE*)FUNC_0(VAR_0->ranges->hdpa, 0)).lower;
        VAR_1.upper = (*(RANGE*)FUNC_0(VAR_0->ranges->hdpa, FUNC_1(VAR_0->ranges->hdpa) - 1)).upper;
    }
    else VAR_1.lower = VAR_1.upper = 0;

    return VAR_1;
}
