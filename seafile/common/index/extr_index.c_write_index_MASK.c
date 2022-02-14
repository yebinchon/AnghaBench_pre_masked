
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {unsigned int sec; scalar_t__ nsec; } ;
struct index_state {int cache_nr; TYPE_1__ timestamp; scalar_t__ has_modifier; struct cache_entry** cache; } ;
struct cache_header {void* hdr_entries; void* hdr_version; void* hdr_signature; } ;
struct cache_entry {int ce_flags; } ;
typedef int info ;
typedef int hdr ;
struct TYPE_15__ {int context; } ;
typedef TYPE_2__ WriteIndexInfo ;
struct TYPE_17__ {int len; struct cache_header* str; } ;
struct TYPE_16__ {scalar_t__ st_mtime; } ;
typedef TYPE_3__ SeafStat ;
typedef TYPE_4__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,struct cache_header*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,struct cache_entry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_6 (char*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,struct index_state*) ;
 scalar_t__ FUNC_10 (int,TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int,int ,int) ;

int FUNC_12(struct index_state *VAR_5, int VAR_6)
{
    WriteIndexInfo VAR_7;
    struct cache_header VAR_8;
    int VAR_9, VAR_10, VAR_11;
    struct cache_entry **VAR_12 = VAR_5->cache;
    int VAR_13 = VAR_5->cache_nr;
    SeafStat VAR_14;
    int VAR_15 = 0;

    FUNC_8 (&VAR_7, 0, sizeof(VAR_7));

    for (VAR_9 = VAR_10 = VAR_11 = 0; VAR_9 < VAR_13; VAR_9++) {
        if (VAR_12[VAR_9]->ce_flags & VAR_2)
            VAR_10++;







    }

    VAR_8.hdr_signature = FUNC_7(VAR_1);

    VAR_8.hdr_version = FUNC_7(4);
    VAR_8.hdr_entries = FUNC_7(VAR_13 - VAR_10);

    VAR_7.context = FUNC_4 (VAR_3);
    if (FUNC_1(&VAR_7, VAR_6, &VAR_8, sizeof(VAR_8)) < 0) {
        VAR_15 = -1;
        goto out;
    }

    for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
        struct cache_entry *VAR_16 = VAR_12[VAR_9];
        if (VAR_16->ce_flags & VAR_2)
            continue;


        if (FUNC_2(&VAR_7, VAR_6, VAR_16) < 0) {
            VAR_15 = -1;
            goto out;
        }
    }


    if (VAR_5->has_modifier) {
        GString *VAR_17 = FUNC_6 ("");
        int VAR_18;

        if (FUNC_9 (VAR_17, VAR_5) < 0) {
            FUNC_5 (VAR_17, VAR_4);
            VAR_15 = -1;
            goto out;
        }

        VAR_18 = FUNC_11(&VAR_7, VAR_6, VAR_0, VAR_17->len) < 0
            || FUNC_1(&VAR_7, VAR_6, VAR_17->str, VAR_17->len) < 0;
        FUNC_5 (VAR_17, VAR_4);
        if (VAR_18) {
            VAR_15 = -1;
            goto out;
        }
    }

    if (FUNC_0(&VAR_7, VAR_6) || FUNC_10(VAR_6, &VAR_14)) {
        VAR_15 = -1;
        goto out;
    }

    VAR_5->timestamp.sec = (unsigned int)VAR_14.st_mtime;
    VAR_5->timestamp.nsec = 0;

out:
    FUNC_3 (VAR_7.context);
    return VAR_15;
}
