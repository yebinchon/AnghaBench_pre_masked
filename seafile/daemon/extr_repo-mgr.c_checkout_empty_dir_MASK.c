
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_flags; } ;
typedef int gint64 ;
typedef scalar_t__ gboolean ;
typedef int SeafStat ;
typedef int GHashTable ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*,char const*,int ) ;
 int FUNC_1 (struct cache_entry*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;

int
FUNC_9 (const char *VAR_4,
                    const char *VAR_5,
                    gint64 VAR_6,
                    struct cache_entry *VAR_7,
                    GHashTable *VAR_8,
                    GHashTable *VAR_9)
{
    char *VAR_10;
    gboolean VAR_11 = VAR_1;

    VAR_10 = FUNC_0 (VAR_4, VAR_5, FUNC_8(VAR_5));

    if (!VAR_10)
        return VAR_2;

    if (!FUNC_5 (VAR_10) && FUNC_6 (VAR_10, 0777) < 0) {
        FUNC_7 ("Failed to create empty dir %s in checkout.\n", VAR_10);
        FUNC_2 (VAR_10);
        return VAR_2;
    }

    if (VAR_6 != 0 && FUNC_3 (VAR_10, VAR_6) < 0) {
        FUNC_7 ("Failed to set mtime for %s.\n", VAR_10);
    }

    if (VAR_11) {
        VAR_7->ce_flags |= VAR_0;
        FUNC_2 (VAR_10);
        return VAR_3;
    }

    SeafStat VAR_12;
    FUNC_4 (VAR_10, &VAR_12);
    FUNC_1 (VAR_7, &VAR_12);

    FUNC_2 (VAR_10);
    return VAR_3;
}
