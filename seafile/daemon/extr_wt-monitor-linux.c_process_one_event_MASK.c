
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct inotify_event {int mask; char* name; } ;
typedef int gint ;
typedef scalar_t__ gboolean ;
struct TYPE_7__ {int last_changed; } ;
typedef TYPE_1__ WTStatus ;
struct TYPE_8__ {TYPE_1__* status; } ;
typedef TYPE_2__ RepoWatchInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*,int ,char*,int *) ;
 int FUNC_3 (TYPE_2__*,int,char const*,char*,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (char const*,char*,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,TYPE_2__*,struct inotify_event*,char const*,char*,scalar_t__) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (int VAR_14,
                   RepoWatchInfo *VAR_15,
                   const char *VAR_16,
                   const char *VAR_17,
                   struct inotify_event *VAR_18,
                   gboolean VAR_19)
{
    WTStatus *VAR_20 = VAR_15->status;
    char *VAR_21;
    gboolean VAR_22 = VAR_9;
    gboolean VAR_23 = VAR_9;


    if ((VAR_18->mask & VAR_5) || (VAR_18->mask & VAR_8))
        return;


    if (VAR_18->mask & VAR_7) {
        FUNC_2 (VAR_20, VAR_13, ((void*)0), ((void*)0));
        return;
    }




    VAR_21 = FUNC_5 (VAR_17, VAR_18->name, ((void*)0));

    FUNC_7 (VAR_14, VAR_15, VAR_18, VAR_16, VAR_21, VAR_19);

    if (VAR_18->mask & VAR_6) {
        FUNC_9 ("Modified %s.\n", VAR_21);
        if (VAR_23)
            FUNC_2 (VAR_20, VAR_11, VAR_21, ((void*)0));
    } else if (VAR_18->mask & VAR_3) {
        FUNC_9 ("Created %s.\n", VAR_21);
        char *VAR_24 = FUNC_5 (VAR_16, VAR_21, ((void*)0));
        struct stat VAR_25;
        if (FUNC_8 (VAR_24, &VAR_25) < 0 ||
            (!FUNC_0(VAR_25.st_mode) && !FUNC_1(VAR_25.st_mode))) {
            FUNC_6 (VAR_24);
            VAR_22 = VAR_0;
            goto out;
        }
        FUNC_6 (VAR_24);







        FUNC_2 (VAR_20, VAR_11, VAR_21, ((void*)0));
        FUNC_3 (VAR_15, VAR_14, VAR_16, VAR_21, VAR_0);
    } else if (VAR_18->mask & VAR_4) {
        FUNC_9 ("Deleted %s.\n", VAR_21);
        FUNC_2 (VAR_20, VAR_12, VAR_21, ((void*)0));
    } else if (VAR_18->mask & VAR_2) {
        FUNC_9 ("Close write %s.\n", VAR_21);
        if (VAR_23)
            FUNC_2 (VAR_20, VAR_11, VAR_21, ((void*)0));
    } else if (VAR_18->mask & VAR_1) {
        FUNC_9 ("Attribute changed %s.\n", VAR_21);
        FUNC_2 (VAR_20, VAR_10, VAR_21, ((void*)0));
    }

out:
    FUNC_6 (VAR_21);
    if (VAR_22)
        FUNC_4 (&VAR_15->status->last_changed, (gint)FUNC_10(((void*)0)));
}
