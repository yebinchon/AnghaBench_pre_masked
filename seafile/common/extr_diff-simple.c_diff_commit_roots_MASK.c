
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int opt ;
typedef int gboolean ;
typedef int data ;
struct TYPE_5__ {int version; struct TYPE_5__* data; int dir_cb; int file_cb; int store_id; int fold_dir_diff; int ** results; } ;
typedef int GList ;
typedef TYPE_1__ DiffOptions ;
typedef TYPE_1__ DiffData ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int,char const**,TYPE_1__*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_4 (const char *VAR_2, int VAR_3,
                   const char *VAR_4, const char *VAR_5, GList **VAR_6,
                   gboolean VAR_7)
{
    DiffOptions VAR_8;
    const char *VAR_9[2];

    DiffData VAR_10;
    FUNC_3 (&VAR_10, 0, sizeof(VAR_10));
    VAR_10.results = VAR_6;
    VAR_10.fold_dir_diff = VAR_7;

    FUNC_3 (&VAR_8, 0, sizeof(VAR_8));
    FUNC_2 (VAR_8.store_id, VAR_2, 36);
    VAR_8.version = VAR_3;
    VAR_8.file_cb = VAR_1;
    VAR_8.dir_cb = VAR_0;
    VAR_8.data = &VAR_10;

    VAR_9[0] = VAR_4;
    VAR_9[1] = VAR_5;

    FUNC_1 (2, VAR_9, &VAR_8);
    FUNC_0 (VAR_6);

    return 0;
}
