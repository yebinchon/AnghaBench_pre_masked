
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int clone_mgr; int repo_mgr; } ;
struct TYPE_11__ {char* repo_name; } ;
struct TYPE_10__ {scalar_t__ state; scalar_t__ runtime_state; scalar_t__ type; int repo_id; scalar_t__ is_clone; } ;
struct TYPE_9__ {char* name; } ;
typedef TYPE_1__ SeafRepo ;
typedef TYPE_2__ HttpTxTask ;
typedef int GString ;
typedef TYPE_3__ CloneTask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,char*,int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_6__* VAR_4 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4 (HttpTxTask *VAR_5, GString *VAR_6)
{
    if (VAR_5->state != VAR_2 ||
        VAR_5->runtime_state == VAR_1 ||
        VAR_5->runtime_state == VAR_0)
        return;

    SeafRepo *VAR_7 = FUNC_3 (VAR_4->repo_mgr,
                                                 VAR_5->repo_id);
    char *VAR_8;
    char *VAR_9;

    if (VAR_7) {
        VAR_8 = VAR_7->name;
        VAR_9 = (VAR_5->type == VAR_3) ? "upload" : "download";

    } else if (VAR_5->is_clone) {
        CloneTask *VAR_10;
        VAR_10 = FUNC_2 (VAR_4->clone_mgr, VAR_5->repo_id);
        VAR_8 = VAR_10->repo_name;
        VAR_9 = "download";

    } else {
        return;
    }
    int VAR_11 = FUNC_1(VAR_5);

    FUNC_0 (VAR_6, "%s\t%d %s\n", VAR_9, VAR_11, VAR_8);
}
