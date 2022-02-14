
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x; scalar_t__ y; scalar_t__ z; } ;
struct TYPE_3__ {scalar_t__ x; scalar_t__ y; scalar_t__ z; } ;
struct bounds {TYPE_2__ max; TYPE_1__ min; } ;



__attribute__((used)) static inline bool FUNC_0(const struct bounds *VAR_0,
     const struct bounds *VAR_1)
{
 return VAR_1->min.x >= VAR_0->min.x && VAR_1->min.y >= VAR_0->min.y &&
        VAR_1->min.z >= VAR_0->min.z && VAR_1->max.x <= VAR_0->max.x &&
        VAR_1->max.y <= VAR_0->max.y && VAR_1->max.z <= VAR_0->max.z;
}
