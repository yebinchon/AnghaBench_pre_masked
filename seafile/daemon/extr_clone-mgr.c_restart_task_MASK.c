
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int gboolean ;
struct TYPE_18__ {int repo_mgr; } ;
struct TYPE_17__ {int enc_version; scalar_t__ repo_version; int repo_id; scalar_t__ server_url; TYPE_2__* manager; } ;
struct TYPE_16__ {int tasks; } ;
struct TYPE_15__ {int * head; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ SeafCloneManager ;
typedef TYPE_3__ CloneTask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_7__* VAR_3 ;
 TYPE_1__* FUNC_8 (int ,char const*) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;

__attribute__((used)) static gboolean
FUNC_12 (sqlite3_stmt *VAR_4, void *VAR_5)
{
    SeafCloneManager *VAR_6 = VAR_5;
    const char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    const char *VAR_13, *VAR_14, *VAR_15;
    CloneTask *VAR_16;
    SeafRepo *VAR_17;

    VAR_7 = (const char *)FUNC_9 (VAR_4, 0);
    VAR_8 = (const char *)FUNC_9 (VAR_4, 1);
    VAR_9 = (const char *)FUNC_9 (VAR_4, 2);
    VAR_10 = (const char *)FUNC_9 (VAR_4, 3);
    VAR_11 = (const char *)FUNC_9 (VAR_4, 4);
    VAR_12 = (const char *)FUNC_9 (VAR_4, 5);
    VAR_13 = (const char *)FUNC_9 (VAR_4, 6);
    VAR_14 = (const char *)FUNC_9 (VAR_4, 7);
    VAR_15 = (const char *)FUNC_9 (VAR_4, 8);

    VAR_16 = FUNC_2 (VAR_7, VAR_10, VAR_8,
                           VAR_9, VAR_11, VAR_12,
                           VAR_13, VAR_14, VAR_15);
    VAR_16->manager = VAR_6;

    VAR_16->enc_version = 1;

    if (VAR_12 && FUNC_5 (VAR_16) < 0) {
        FUNC_1 (VAR_16);
        return VAR_2;
    }

    VAR_16->repo_version = 0;
    FUNC_7 (VAR_16);

    FUNC_6 (VAR_16);

    VAR_17 = FUNC_8 (VAR_3->repo_mgr, VAR_7);

    if (VAR_17 != ((void*)0) && VAR_17->head != ((void*)0)) {
        FUNC_10 (VAR_16, VAR_0);
        return VAR_2;
    }

    if (VAR_16->repo_version > 0) {
        if (VAR_16->server_url) {
            FUNC_0 (VAR_16);
        } else {
            FUNC_11 (VAR_16, VAR_1);
            return VAR_2;
        }
    }

    FUNC_3 (VAR_6->tasks, FUNC_4(VAR_16->repo_id), VAR_16);

    return VAR_2;
}
