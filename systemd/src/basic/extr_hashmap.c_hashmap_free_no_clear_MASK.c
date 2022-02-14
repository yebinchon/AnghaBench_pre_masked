
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mempool; } ;
struct TYPE_6__ {scalar_t__ n_direct_entries; size_t type; scalar_t__ from_pool; int debug; int has_indirect; } ;
typedef TYPE_1__ HashmapBase ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(HashmapBase *VAR_4) {
        FUNC_1(!VAR_4->has_indirect);
        FUNC_1(VAR_4->n_direct_entries == 0);







        if (VAR_4->from_pool) {

                FUNC_2(FUNC_4());
                FUNC_5(VAR_3[VAR_4->type].mempool, VAR_4);
        } else
                FUNC_3(VAR_4);
}
