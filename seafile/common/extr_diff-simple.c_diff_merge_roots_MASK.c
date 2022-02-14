
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
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_5 (const char *VAR_2, int VAR_3,
                  const char *VAR_4, const char *VAR_5, const char *VAR_6,
                  GList **VAR_7, gboolean VAR_8)
{
    DiffOptions VAR_9;
    const char *VAR_10[3];

    FUNC_2 (*VAR_7 == ((void*)0), -1);

    DiffData VAR_11;
    FUNC_4 (&VAR_11, 0, sizeof(VAR_11));
    VAR_11.results = VAR_7;
    VAR_11.fold_dir_diff = VAR_8;

    FUNC_4 (&VAR_9, 0, sizeof(VAR_9));
    FUNC_3 (VAR_9.store_id, VAR_2, 36);
    VAR_9.version = VAR_3;
    VAR_9.file_cb = VAR_1;
    VAR_9.dir_cb = VAR_0;
    VAR_9.data = &VAR_11;

    VAR_10[0] = VAR_4;
    VAR_10[1] = VAR_5;
    VAR_10[2] = VAR_6;

    FUNC_1 (3, VAR_10, &VAR_9);
    FUNC_0 (VAR_7);

    return 0;
}
