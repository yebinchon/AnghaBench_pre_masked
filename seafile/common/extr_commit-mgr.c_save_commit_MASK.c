
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int json_t ;
typedef scalar_t__ gsize ;
struct TYPE_7__ {int commit_id; } ;
struct TYPE_6__ {int obj_store; } ;
typedef TYPE_1__ SeafCommitManager ;
typedef TYPE_2__ SeafCommit ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,char const*,int,int ,char*,int,int ) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7 (SeafCommitManager *VAR_2,
             const char *VAR_3,
             int VAR_4,
             SeafCommit *VAR_5)
{
    json_t *VAR_6 = ((void*)0);
    char *VAR_7;
    gsize VAR_8;

    VAR_6 = FUNC_0 (VAR_5);

    VAR_7 = FUNC_4 (VAR_6, 0);
    VAR_8 = FUNC_6 (VAR_7);

    FUNC_3 (VAR_6);
    if (FUNC_5 (VAR_2->obj_store,
                                  VAR_3, VAR_4,
                                  VAR_5->commit_id,
                                  VAR_7, (int)VAR_8, VAR_0) < 0) {
        FUNC_2 (VAR_7);
        return -1;
    }

    FUNC_1 (VAR_7);

    return 0;
}
