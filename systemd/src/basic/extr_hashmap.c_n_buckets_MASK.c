
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int n_direct_buckets; } ;
struct TYPE_5__ {int n_buckets; } ;
struct TYPE_6__ {size_t type; TYPE_1__ indirect; scalar_t__ has_indirect; } ;
typedef TYPE_2__ HashmapBase ;


 TYPE_4__* VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(HashmapBase *VAR_1) {
        return VAR_1->has_indirect ? VAR_1->indirect.n_buckets
                               : VAR_0[VAR_1->type].n_direct_buckets;
}
