
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vo_internal {int lock; scalar_t__ timing_offset; } ;
struct vo {TYPE_1__* opts; struct vo_internal* in; } ;
struct TYPE_2__ {int timing_offset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;

    FUNC_0(&VAR_1->lock);
    VAR_1->timing_offset = (uint64_t)(VAR_0->opts->timing_offset * 1e6);
    FUNC_1(&VAR_1->lock);
}
