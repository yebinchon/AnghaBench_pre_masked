
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {char* name; int ce_mode; } ;
typedef int gboolean ;
typedef int IndexDirent ;
typedef int GList ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 char* FUNC_4 (char const*,char*,int *) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,int) ;
 int * FUNC_7 (char*,int ,struct cache_entry*) ;
 int FUNC_8 (struct index_state*,char const*,int) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

GList *
FUNC_13 (struct index_state *VAR_2, const char *VAR_3)
{
    char *VAR_4;
    int VAR_5;
    int VAR_6;
    struct cache_entry *VAR_7;
    GList *VAR_8 = ((void*)0);
    char *VAR_9, *VAR_10, *VAR_11;
    gboolean VAR_12;
    IndexDirent *VAR_13;

    if (VAR_3[0] == 0) {
        VAR_6 = 0;
        VAR_4 = FUNC_5(VAR_3);
        VAR_5 = 0;
        goto collect_dents;
    } else {
        VAR_5 = FUNC_11(VAR_3);
        VAR_6 = FUNC_8 (VAR_2, VAR_3, VAR_5);
    }


    if (VAR_6 >= 0) {
        return ((void*)0);
    }







    VAR_6 = -VAR_6-1;




    VAR_4 = FUNC_4 (VAR_3, "/", ((void*)0));
    ++VAR_5;

    while (VAR_6 < VAR_2->cache_nr) {
        VAR_7 = VAR_2->cache[VAR_6];
        if (FUNC_12 (VAR_7->name, VAR_4, VAR_5) < 0) {
            ++VAR_6;
        } else
            break;
    }


    if (VAR_6 == VAR_2->cache_nr) {
        FUNC_1 (VAR_4);
        return ((void*)0);
    }

collect_dents:
    for (; VAR_6 < VAR_2->cache_nr; ++VAR_6) {
        VAR_7 = VAR_2->cache[VAR_6];

        if (FUNC_12 (VAR_4, VAR_7->name, VAR_5) != 0)
            break;

        VAR_9 = VAR_7->name + VAR_5;
        VAR_10 = FUNC_10(VAR_9, '/');
        if (VAR_10) {
            VAR_11 = FUNC_6(VAR_9, VAR_10 - VAR_9);
            if (FUNC_9 (VAR_8, VAR_11)) {
                FUNC_1 (VAR_11);
                continue;
            }

            VAR_13 = FUNC_7 (VAR_11, VAR_0, ((void*)0));
            VAR_8 = FUNC_2 (VAR_8, VAR_13);
        } else {
            VAR_11 = FUNC_5(VAR_9);
            VAR_12 = FUNC_0(VAR_7->ce_mode);
            VAR_13 = FUNC_7 (VAR_11, VAR_12, VAR_7);
            VAR_8 = FUNC_2 (VAR_8, VAR_13);
        }
    }

    VAR_8 = FUNC_3 (VAR_8, VAR_1);

    FUNC_1 (VAR_4);
    return VAR_8;
}
