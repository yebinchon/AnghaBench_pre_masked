
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int gint ;
struct TYPE_5__ {int last_changed; } ;
typedef TYPE_1__ WTStatus ;
struct TYPE_6__ {TYPE_1__* status; } ;
typedef TYPE_2__ RepoWatchInfo ;
typedef int FSEventStreamEventId ;
typedef int FSEventStreamEventFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int,int ) ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char const*,struct stat*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9 (const char* VAR_7,
                   RepoWatchInfo *VAR_8,
                   const char *VAR_9,
                   const FSEventStreamEventId VAR_10,
                   const FSEventStreamEventFlags VAR_11)
{
    WTStatus *VAR_12 = VAR_8->status;
    char *VAR_13;
    char *VAR_14;
    const char *VAR_15;
    struct stat VAR_16;

    VAR_14 = FUNC_4 (VAR_7, -1, VAR_0);

    VAR_15 = VAR_14 + FUNC_7(VAR_9);
    if (*VAR_15 == '/')
        VAR_15++;
    VAR_13 = FUNC_3(VAR_15);
    FUNC_2 (VAR_14);


    int VAR_17 = FUNC_7(VAR_13);
    if (VAR_17 > 0 && VAR_13[VAR_17 - 1] == '/')
        VAR_13[VAR_17 - 1] = 0;


    if (VAR_11 & VAR_6) {
        FUNC_5 ("Rename flag set for %s \n", VAR_13);
        if (FUNC_6 (VAR_7, &VAR_16) < 0) {

            FUNC_0 (VAR_12, VAR_2, VAR_13, ((void*)0));
        } else {

            FUNC_0 (VAR_12, VAR_1, VAR_13, ((void*)0));
        }
    }

    if (VAR_11 & VAR_5) {
        FUNC_5 ("Deleted flag set for %s.\n", VAR_13);
        if (FUNC_6 (VAR_7, &VAR_16) < 0) {
            FUNC_0 (VAR_12, VAR_2, VAR_13, ((void*)0));
        }
    }

    if (VAR_11 & VAR_4) {
        FUNC_5 ("Modified flag set for %s.\n", VAR_13);
        if (FUNC_6 (VAR_7, &VAR_16) == 0) {
            FUNC_0 (VAR_12, VAR_1, VAR_13, ((void*)0));
        }
    }

    if (VAR_11 & VAR_3) {
        FUNC_5 ("Created flag set for %s.\n", VAR_13);
        if (FUNC_6 (VAR_7, &VAR_16) == 0) {
            FUNC_0 (VAR_12, VAR_1, VAR_13, ((void*)0));
        }
    }

    FUNC_2 (VAR_13);
    FUNC_1 (&VAR_8->status->last_changed, (gint)FUNC_8(((void*)0)));
}
