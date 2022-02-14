
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rw_type; int block_id; int store_id; int tmp_file; int version; } ;
typedef int BlockBackend ;
typedef TYPE_1__ BHandle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ,char*,int ,int ) ;
 int FUNC_4 (char*,int ,int ,...) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (BlockBackend *VAR_3,
                               BHandle *VAR_4)
{
    char VAR_5[VAR_1];

    FUNC_2 (VAR_4->rw_type == VAR_0, -1);

    FUNC_3 (VAR_3, VAR_4->block_id, VAR_5, VAR_4->store_id, VAR_4->version);

    if (FUNC_0 (VAR_5) < 0) {
        FUNC_4 ("Failed to create path for block %s:%s.\n",
                      VAR_4->store_id, VAR_4->block_id);
        return -1;
    }

    if (FUNC_1 (VAR_4->tmp_file, VAR_5) < 0) {
        FUNC_4 ("[block bend] failed to commit block %s:%s: %s\n",
                      VAR_4->store_id, VAR_4->block_id, FUNC_5(VAR_2));
        return -1;
    }

    return 0;
}
