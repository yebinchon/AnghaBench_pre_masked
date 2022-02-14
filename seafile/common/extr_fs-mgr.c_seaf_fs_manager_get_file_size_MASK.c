
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_6__ {int fs_mgr; } ;
struct TYPE_5__ {int file_size; } ;
typedef TYPE_1__ Seafile ;
typedef int SeafFSManager ;


 TYPE_4__* VAR_0 ;
 TYPE_1__* FUNC_0 (int ,char const*,int,char const*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;

gint64
FUNC_3 (SeafFSManager *VAR_1,
                               const char *VAR_2,
                               int VAR_3,
                               const char *VAR_4)
{
    Seafile *VAR_5;
    gint64 VAR_6;

    VAR_5 = FUNC_0 (VAR_0->fs_mgr, VAR_2, VAR_3, VAR_4);
    if (!VAR_5) {
        FUNC_1 ("Couldn't get file %s:%s\n", VAR_2, VAR_4);
        return -1;
    }

    VAR_6 = VAR_5->file_size;

    FUNC_2 (VAR_5);
    return VAR_6;
}
