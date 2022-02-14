
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ondisk_size; int ondisk; int dir_id; } ;
struct TYPE_5__ {int obj_store; } ;
typedef TYPE_1__ SeafFSManager ;
typedef TYPE_2__ SeafDir ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,char const*,int,int ,int ,int ,int ) ;

int
FUNC_2 (SeafFSManager *VAR_2,
               const char *VAR_3,
               int VAR_4,
               SeafDir *VAR_5)
{
    int VAR_6 = 0;


    if (FUNC_0 (VAR_5->dir_id, VAR_0, 40) == 0)
        return 0;

    if (FUNC_1 (VAR_2->obj_store, VAR_3, VAR_4, VAR_5->dir_id,
                                  VAR_5->ondisk, VAR_5->ondisk_size, VAR_1) < 0)
        VAR_6 = -1;

    return VAR_6;
}
