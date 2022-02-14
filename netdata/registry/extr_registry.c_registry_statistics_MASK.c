
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rrd_update_every; } ;
struct TYPE_3__ {int usages_count; int persons_count; int machines_count; int urls_count; int persons_urls_count; int machines_urls_count; int persons_memory; int machines_memory; int urls_memory; int persons_urls_memory; int machines_urls_memory; int enabled; } ;
typedef int RRDSET ;
typedef int NAME_VALUE ;
typedef int DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int *,char*,int *,int,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int * FUNC_2 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(void) {
    if(!VAR_4.enabled) return;

    static RRDSET *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

    if(FUNC_5(!VAR_5)) {
        VAR_5 = FUNC_2(
                "netdata"
                , "registry_sessions"
                , ((void*)0)
                , "registry"
                , ((void*)0)
                , "NetData Registry Sessions"
                , "sessions"
                , "registry"
                , "stats"
                , 131000
                , VAR_3->rrd_update_every
                , VAR_0
        );

        FUNC_0(VAR_5, "sessions", ((void*)0), 1, 1, VAR_2);
    }
    else FUNC_4(VAR_5);

    FUNC_1(VAR_5, "sessions", VAR_4.usages_count);
    FUNC_3(VAR_5);



    if(FUNC_5(!VAR_6)) {
        VAR_6 = FUNC_2(
                "netdata"
                , "registry_entries"
                , ((void*)0)
                , "registry"
                , ((void*)0)
                , "NetData Registry Entries"
                , "entries"
                , "registry"
                , "stats"
                , 131100
                , VAR_3->rrd_update_every
                , VAR_0
        );

        FUNC_0(VAR_6, "persons", ((void*)0), 1, 1, VAR_2);
        FUNC_0(VAR_6, "machines", ((void*)0), 1, 1, VAR_2);
        FUNC_0(VAR_6, "urls", ((void*)0), 1, 1, VAR_2);
        FUNC_0(VAR_6, "persons_urls", ((void*)0), 1, 1, VAR_2);
        FUNC_0(VAR_6, "machines_urls", ((void*)0), 1, 1, VAR_2);
    }
    else FUNC_4(VAR_6);

    FUNC_1(VAR_6, "persons", VAR_4.persons_count);
    FUNC_1(VAR_6, "machines", VAR_4.machines_count);
    FUNC_1(VAR_6, "urls", VAR_4.urls_count);
    FUNC_1(VAR_6, "persons_urls", VAR_4.persons_urls_count);
    FUNC_1(VAR_6, "machines_urls", VAR_4.machines_urls_count);
    FUNC_3(VAR_6);



    if(FUNC_5(!VAR_7)) {
        VAR_7 = FUNC_2(
                "netdata"
                , "registry_mem"
                , ((void*)0)
                , "registry"
                , ((void*)0)
                , "NetData Registry Memory"
                , "KiB"
                , "registry"
                , "stats"
                , 131300
                , VAR_3->rrd_update_every
                , VAR_1
        );

        FUNC_0(VAR_7, "persons", ((void*)0), 1, 1024, VAR_2);
        FUNC_0(VAR_7, "machines", ((void*)0), 1, 1024, VAR_2);
        FUNC_0(VAR_7, "urls", ((void*)0), 1, 1024, VAR_2);
        FUNC_0(VAR_7, "persons_urls", ((void*)0), 1, 1024, VAR_2);
        FUNC_0(VAR_7, "machines_urls", ((void*)0), 1, 1024, VAR_2);
    }
    else FUNC_4(VAR_7);

    FUNC_1(VAR_7, "persons", VAR_4.persons_memory + VAR_4.persons_count * sizeof(NAME_VALUE) + sizeof(DICTIONARY));
    FUNC_1(VAR_7, "machines", VAR_4.machines_memory + VAR_4.machines_count * sizeof(NAME_VALUE) + sizeof(DICTIONARY));
    FUNC_1(VAR_7, "urls", VAR_4.urls_memory);
    FUNC_1(VAR_7, "persons_urls", VAR_4.persons_urls_memory);
    FUNC_1(VAR_7, "machines_urls", VAR_4.machines_urls_memory + VAR_4.machines_count * sizeof(DICTIONARY) + VAR_4.machines_urls_count * sizeof(NAME_VALUE));
    FUNC_3(VAR_7);
}
