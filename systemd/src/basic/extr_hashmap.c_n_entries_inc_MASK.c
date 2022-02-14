
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n_entries; } ;
struct TYPE_5__ {int n_direct_entries; TYPE_1__ indirect; scalar_t__ has_indirect; } ;
typedef TYPE_2__ HashmapBase ;



__attribute__((used)) static void FUNC_0(HashmapBase *VAR_0) {
        if (VAR_0->has_indirect)
                VAR_0->indirect.n_entries++;
        else
                VAR_0->n_direct_entries++;
}
