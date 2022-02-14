
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int gboolean ;
typedef int WTStatus ;
struct TYPE_10__ {scalar_t__ Action; } ;
struct TYPE_9__ {int old_path; int processing; } ;
struct TYPE_8__ {TYPE_2__* rename_info; int * status; } ;
typedef TYPE_1__ RepoWatchInfo ;
typedef TYPE_2__ RenameInfo ;
typedef TYPE_3__* PFILE_NOTIFY_INFORMATION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4 (RepoWatchInfo *VAR_3,
               PFILE_NOTIFY_INFORMATION VAR_4,
               const char *VAR_5,
               const char *VAR_6,
               gboolean VAR_7)
{
    WTStatus *VAR_8 = VAR_3->status;
    RenameInfo *VAR_9 = VAR_3->rename_info;

    if (VAR_4->Action == VAR_1)
        FUNC_1 ("Move %s ->\n", VAR_6);
    else if (VAR_4->Action == VAR_0)
        FUNC_1 ("Move -> %s.\n", VAR_6);

    if (!VAR_9->processing) {
        if (VAR_4->Action == VAR_1) {
            if (!VAR_7) {
                FUNC_2 (VAR_9, VAR_6);
            } else {



            }
        }
    } else {
        if (VAR_4->Action == VAR_0) {

            FUNC_0 (VAR_8, VAR_2,
                                VAR_9->old_path, VAR_6);
            FUNC_3 (VAR_9);
        }
    }
}
