
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip_entry {scalar_t__ deleted; TYPE_1__* changes; int * source; } ;
struct TYPE_2__ {int changed; scalar_t__ comp_method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct zip_entry *VAR_2)
{
    if (VAR_2->source) {
 FUNC_1(VAR_2->source);
 VAR_2->source = ((void*)0);
    }

    if (VAR_2->changes != ((void*)0) && (VAR_2->changes->changed & VAR_1) && VAR_2->changes->comp_method == VAR_0) {
 VAR_2->changes->changed &= ~VAR_1;
 if (VAR_2->changes->changed == 0) {
     FUNC_0(VAR_2->changes);
     VAR_2->changes = ((void*)0);
 }
    }

    VAR_2->deleted = 0;
}
