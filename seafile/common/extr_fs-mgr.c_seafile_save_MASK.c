
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int guint8 ;
struct TYPE_7__ {int obj_store; } ;
struct TYPE_6__ {int file_id; } ;
typedef TYPE_1__ Seafile ;
typedef TYPE_2__ SeafFSManager ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char const*,int,int ,int *,int,int ) ;
 int * FUNC_2 (TYPE_1__*,int*) ;

int
FUNC_3 (SeafFSManager *VAR_1,
              const char *VAR_2,
              int VAR_3,
              Seafile *VAR_4)
{
    guint8 *VAR_5;
    int VAR_6;
    int VAR_7 = 0;

    VAR_5 = FUNC_2 (VAR_4, &VAR_6);
    if (!VAR_5)
        return -1;

    if (FUNC_1 (VAR_1->obj_store, VAR_2, VAR_3, VAR_4->file_id,
                                  VAR_5, VAR_6, VAR_0) < 0)
        VAR_7 = -1;

    FUNC_0 (VAR_5);
    return VAR_7;
}
