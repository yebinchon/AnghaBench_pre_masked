
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rw_type; struct TYPE_5__* store_id; struct TYPE_5__* tmp_file; } ;
typedef int BlockBackend ;
typedef TYPE_1__ BHandle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (BlockBackend *VAR_1,
                                    BHandle *VAR_2)
{
    if (VAR_2->rw_type == VAR_0) {

        FUNC_1 (VAR_2->tmp_file);
        FUNC_0 (VAR_2->tmp_file);
    }
    FUNC_0 (VAR_2->store_id);
    FUNC_0 (VAR_2);
}
