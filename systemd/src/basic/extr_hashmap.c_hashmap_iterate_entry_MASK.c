
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ put_count; int rem_count; scalar_t__ last_rem_idx; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ debug; } ;
struct TYPE_10__ {int idx; scalar_t__ put_count; int rem_count; scalar_t__ prev_idx; } ;
typedef int OrderedHashmap ;
typedef TYPE_2__ Iterator ;
typedef TYPE_3__ HashmapBase ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static unsigned FUNC_3(HashmapBase *VAR_3, Iterator *VAR_4) {
        if (!VAR_3) {
                VAR_4->idx = VAR_2;
                return VAR_2;
        }
        return VAR_3->type == VAR_0 ? FUNC_1((OrderedHashmap*) VAR_3, VAR_4)
                                               : FUNC_2(VAR_3, VAR_4);
}
