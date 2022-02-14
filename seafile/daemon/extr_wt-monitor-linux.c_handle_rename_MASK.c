
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inotify_event {int mask; scalar_t__ cookie; int name; } ;
typedef int gboolean ;
typedef int WTStatus ;
struct TYPE_8__ {char const* old_path; scalar_t__ last_cookie; int processing; } ;
struct TYPE_7__ {TYPE_2__* rename_info; int * status; } ;
typedef TYPE_1__ RepoWatchInfo ;
typedef TYPE_2__ RenameInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char const*,char const*) ;
 int FUNC_1 (TYPE_1__*,int,char const*,char const*,int ) ;
 int FUNC_2 (char const*) ;
 char const* FUNC_3 (char const*) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,char const*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7 (int VAR_6,
               RepoWatchInfo *VAR_7,
               struct inotify_event *VAR_8,
               const char *VAR_9,
               const char *VAR_10,
               gboolean VAR_11)
{
    WTStatus *VAR_12 = VAR_7->status;
    RenameInfo *VAR_13 = VAR_7->rename_info;

    if (VAR_8->mask & VAR_1)
        FUNC_4 ("(%d) Move %s ->\n", VAR_8->cookie, VAR_8->name);
    else if (VAR_8->mask & VAR_2)
        FUNC_4 ("(%d) Move -> %s.\n", VAR_8->cookie, VAR_8->name);

    if (!VAR_13->processing) {
        if (VAR_8->mask & VAR_1) {
            if (!VAR_11) {
                FUNC_5 (VAR_13, VAR_8->cookie, VAR_10);
            } else {




                FUNC_0 (VAR_12, VAR_4, VAR_10, ((void*)0));
            }
        } else if (VAR_8->mask & VAR_2) {


            FUNC_0 (VAR_12, VAR_3, VAR_10, ((void*)0));
            FUNC_1 (VAR_7, VAR_6, VAR_9, VAR_10, VAR_0);
        }
    } else {
        if (VAR_8->mask & VAR_1) {



            FUNC_0 (VAR_12, VAR_4, VAR_13->old_path, ((void*)0));

            if (!VAR_11) {

                VAR_13->last_cookie = VAR_8->cookie;
                FUNC_2 (VAR_13->old_path);
                VAR_13->old_path = FUNC_3(VAR_10);
            } else {

                FUNC_0 (VAR_12, VAR_4, VAR_10, ((void*)0));
                FUNC_6 (VAR_13);
            }
        } else if (VAR_8->mask & VAR_2) {
            if (VAR_8->cookie == VAR_13->last_cookie) {

                FUNC_0 (VAR_12, VAR_5,
                                    VAR_13->old_path, VAR_10);
            } else {



                FUNC_0 (VAR_12, VAR_4,
                                    VAR_13->old_path, ((void*)0));
                FUNC_0 (VAR_12, VAR_3,
                                    VAR_10, ((void*)0));
            }

            FUNC_1 (VAR_7, VAR_6, VAR_9, VAR_10, VAR_0);
            FUNC_6 (VAR_13);
        } else {



            FUNC_0 (VAR_12, VAR_4, VAR_13->old_path, ((void*)0));
            FUNC_6 (VAR_13);
        }
    }
}
