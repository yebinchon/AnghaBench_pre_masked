
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int checked_objs; int ** pret; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ SeafDirent ;
typedef int GList ;
typedef TYPE_2__ CalcFsListData ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5 (int VAR_1, const char *VAR_2, SeafDirent *VAR_3[], void *VAR_4,
                 gboolean *VAR_5)
{
    SeafDirent *VAR_6 = VAR_3[0];
    SeafDirent *VAR_7 = VAR_3[1];
    CalcFsListData *VAR_8 = VAR_4;
    GList **VAR_9 = VAR_8->pret;
    int VAR_10;

    if (!VAR_6 || FUNC_4 (VAR_6->id, VAR_0) == 0)
        return 0;

    if (FUNC_1 (VAR_8->checked_objs, VAR_6->id))
        return 0;

    if (!VAR_7 || FUNC_4 (VAR_6->id, VAR_7->id) != 0) {
        *VAR_9 = FUNC_2 (*VAR_9, FUNC_3(VAR_6->id));
        FUNC_0 (VAR_8->checked_objs, FUNC_3(VAR_6->id), &VAR_10);
    }

    return 0;
}
