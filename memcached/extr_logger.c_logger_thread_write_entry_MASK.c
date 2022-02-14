
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct logger_stats {int watcher_sent; int watcher_skipped; } ;
struct TYPE_5__ {int eflags; int failed_flush; int sfd; scalar_t__ skipped; int buf; } ;
typedef TYPE_1__ logger_watcher ;
struct TYPE_6__ {int eflags; } ;
typedef TYPE_2__ logentry ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int,char*,unsigned long long) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_6(logentry *VAR_2, struct logger_stats *VAR_3,
        char *VAR_4, int VAR_5) {
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        logger_watcher *VAR_8 = VAR_1[VAR_6];
        char *VAR_9 = ((void*)0);
        if (VAR_8 == ((void*)0) || (VAR_2->eflags & VAR_8->eflags) == 0)
            continue;




        while (!VAR_8->failed_flush &&
                (VAR_9 = (char *) FUNC_3(VAR_8->buf, VAR_5 + 128)) == ((void*)0)) {
            if (FUNC_4(0, VAR_6) <= 0) {
                FUNC_0("LOGGER: Watcher had no free space for line of size (%d)\n", VAR_5 + 128);
                VAR_8->failed_flush = 1;
            }
        }

        if (VAR_8->failed_flush) {
            FUNC_0("LOGGER: Fast skipped for watcher [%d] due to failed_flush\n", VAR_8->sfd);
            VAR_8->skipped++;
            VAR_3->watcher_skipped++;
            continue;
        }

        if (VAR_8->skipped > 0) {
            VAR_7 = FUNC_5(VAR_9, 128, "skipped=%llu\n", (unsigned long long) VAR_8->skipped);
            if (VAR_7 >= 128 || VAR_7 <= 0) {
                FUNC_0("LOGGER: Failed to flatten skipped message into watcher [%d]\n", VAR_8->sfd);
                VAR_8->skipped++;
                VAR_3->watcher_skipped++;
                continue;
            }
            FUNC_2(VAR_8->buf, VAR_7);
            VAR_8->skipped = 0;
        }

        FUNC_1(VAR_8->buf, (unsigned char *) VAR_4, VAR_5);
        VAR_3->watcher_sent++;
    }
}
