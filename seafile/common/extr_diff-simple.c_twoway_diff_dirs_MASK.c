
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_6__ {scalar_t__ fold_dir_diff; int ** results; } ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ SeafDirent ;
typedef int GList ;
typedef int DiffEntry ;
typedef TYPE_2__ DiffData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,TYPE_1__*,char const*) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3 (int VAR_6, const char *VAR_7, SeafDirent *VAR_8[], void *VAR_9,
                  gboolean *VAR_10)
{
    DiffData *VAR_11 = VAR_9;
    GList **VAR_12 = VAR_11->results;
    DiffEntry *VAR_13;
    SeafDirent *VAR_14 = VAR_8[0];
    SeafDirent *VAR_15 = VAR_8[1];

    if (!VAR_14) {
        if (FUNC_2 (VAR_15->id, VAR_3) == 0 || VAR_11->fold_dir_diff) {
            VAR_13 = FUNC_0 (VAR_2, VAR_0,
                                             VAR_15, VAR_7);
            *VAR_12 = FUNC_1 (*VAR_12, VAR_13);
            *VAR_10 = VAR_4;
        } else
            *VAR_10 = VAR_5;
        return 0;
    }

    if (!VAR_15) {
        VAR_13 = FUNC_0 (VAR_2,
                                         VAR_1,
                                         VAR_14, VAR_7);
        *VAR_12 = FUNC_1 (*VAR_12, VAR_13);

        if (VAR_11->fold_dir_diff) {
            *VAR_10 = VAR_4;
        } else
            *VAR_10 = VAR_5;
        return 0;
    }

    return 0;
}
