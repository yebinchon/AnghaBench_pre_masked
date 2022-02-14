
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ node; scalar_t__ off; } ;
typedef TYPE_1__ rangepoint_t ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(const rangepoint_t *VAR_0, const rangepoint_t *VAR_1)
{
    return VAR_0->node == VAR_1->node && VAR_0->off == VAR_1->off;
}
