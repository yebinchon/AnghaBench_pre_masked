
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
struct TYPE_8__ {int tasks; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ repo_version; int error; } ;
typedef TYPE_2__ SeafCloneManager ;
typedef int GHashTableIter ;
typedef TYPE_1__ CloneTask ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__**,TYPE_1__**) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (void *VAR_4)
{
    SeafCloneManager *VAR_5 = VAR_4;
    CloneTask *VAR_6;
    GHashTableIter VAR_7;
    gpointer VAR_8, VAR_9;

    FUNC_1 (&VAR_7, VAR_5->tasks);
    while (FUNC_2 (&VAR_7, &VAR_8, &VAR_9)) {
        VAR_6 = VAR_9;
        if (VAR_6->state == VAR_0 &&
            VAR_6->repo_version > 0 &&
            FUNC_3 (VAR_6->error) == VAR_2) {
            VAR_6->error = VAR_1;
            FUNC_0 (VAR_6);
        }
    }

    return VAR_3;
}
