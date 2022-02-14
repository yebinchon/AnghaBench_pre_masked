
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct index_state {int cache_changed; } ;
struct TYPE_7__ {scalar_t__ sec; } ;
struct cache_entry {unsigned int ce_mode; int sha1; TYPE_1__ ce_mtime; } ;
struct TYPE_9__ {int email; int * changeset; } ;
struct TYPE_8__ {scalar_t__ st_mtime; int st_mode; } ;
typedef TYPE_2__ SeafStat ;
typedef TYPE_3__ SeafRepo ;
typedef int ChangeSet ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,TYPE_2__*,int ,char const*,int *) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 char* FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (char*) ;
 struct cache_entry* FUNC_4 (struct index_state*,char const*,int ,int ) ;
 scalar_t__ FUNC_5 (char*,TYPE_2__*) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9 (SeafRepo *VAR_2,
                   struct index_state *VAR_3,
                   const char *VAR_4,
                   const char *VAR_5)
{
    ChangeSet *VAR_6 = VAR_2->changeset;
    char *VAR_7;
    struct cache_entry *VAR_8;
    SeafStat VAR_9;

    VAR_8 = FUNC_4 (VAR_3, VAR_5, FUNC_8(VAR_5), 0);
    if (!VAR_8)
        return;

    VAR_7 = FUNC_2 (VAR_4, VAR_5, ((void*)0));
    if (FUNC_5 (VAR_7, &VAR_9) < 0) {
        FUNC_6 ("Failed to stat %s: %s.\n", VAR_7, FUNC_7(VAR_1));
        FUNC_3 (VAR_7);
        return;
    }

    unsigned int VAR_10 = FUNC_1 (VAR_9.st_mode);
    if (VAR_10 != VAR_8->ce_mode || VAR_9.st_mtime != VAR_8->ce_mtime.sec) {
        VAR_8->ce_mode = VAR_10;
        VAR_8->ce_mtime.sec = VAR_9.st_mtime;
        VAR_3->cache_changed = 1;
        FUNC_0 (VAR_6,
                          VAR_0,
                          VAR_8->sha1,
                          &VAR_9,
                          VAR_2->email,
                          VAR_5,
                          ((void*)0));
    }
    FUNC_3 (VAR_7);
}
