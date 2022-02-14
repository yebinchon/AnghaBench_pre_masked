
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ id; scalar_t__ disabled; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 char* VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int VAR_34 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 struct perf_event* VAR_35 ;
 int FUNC_5 (char*,...) ;
 int VAR_36 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int VAR_37 ;

void FUNC_8(int VAR_38, char **VAR_39) {
    int VAR_40, VAR_41 = 0;

    for(VAR_40 = 1; VAR_40 < VAR_38 ; VAR_40++) {
        if(FUNC_4(*VAR_39[VAR_40]) && !VAR_34) {
            int VAR_42 = FUNC_6(VAR_39[VAR_40]);
            if(VAR_42 > 0 && VAR_42 < 86400) {
                VAR_34 = VAR_42;
                continue;
            }
        }
        else if(FUNC_7("version", VAR_39[VAR_40]) == 0 || FUNC_7("-version", VAR_39[VAR_40]) == 0 || FUNC_7("--version", VAR_39[VAR_40]) == 0 || FUNC_7("-v", VAR_39[VAR_40]) == 0 || FUNC_7("-V", VAR_39[VAR_40]) == 0) {
            FUNC_5("perf.plugin %s\n", VAR_32);
            FUNC_1(0);
        }
        else if(FUNC_7("all", VAR_39[VAR_40]) == 0) {
            struct perf_event *VAR_43 = ((void*)0);

            for(VAR_43 = &VAR_35[0]; VAR_43->id != VAR_13; VAR_43++)
                VAR_43->disabled = 0;

            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("cycles", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_6].disabled = 0;
            VAR_35[VAR_29].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("instructions", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_14].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("branch", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_1].disabled = 0;
            VAR_35[VAR_2].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("cache", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_5].disabled = 0;
            VAR_35[VAR_4].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("bus", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_3].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("stalled", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_31].disabled = 0;
            VAR_35[VAR_30].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("migrations", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_7].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("alighnment", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_0].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("emulation", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_12].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("L1D", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_18].disabled = 0;
            VAR_35[VAR_19].disabled = 0;
            VAR_35[VAR_20].disabled = 0;
            VAR_35[VAR_21].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("L1D-prefetch", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_17].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("L1I", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_22].disabled = 0;
            VAR_35[VAR_23].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("LL", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_24].disabled = 0;
            VAR_35[VAR_25].disabled = 0;
            VAR_35[VAR_26].disabled = 0;
            VAR_35[VAR_27].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("DTLB", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_8].disabled = 0;
            VAR_35[VAR_9].disabled = 0;
            VAR_35[VAR_10].disabled = 0;
            VAR_35[VAR_11].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("ITLB", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_15].disabled = 0;
            VAR_35[VAR_16].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("PBU", VAR_39[VAR_40]) == 0) {
            VAR_35[VAR_28].disabled = 0;
            VAR_41 = 1;
            continue;
        }
        else if(FUNC_7("debug", VAR_39[VAR_40]) == 0) {
            VAR_33 = 1;
            continue;
        }
        else if(FUNC_7("-h", VAR_39[VAR_40]) == 0 || FUNC_7("--help", VAR_39[VAR_40]) == 0) {
            FUNC_2(VAR_36,
                    "\n"
                    " netdata perf.plugin %s\n"
                    " Copyright (C) 2019 Netdata Inc.\n"
                    " Released under GNU General Public License v3 or later.\n"
                    " All rights reserved.\n"
                    "\n"
                    " This program is a data collector plugin for netdata.\n"
                    "\n"
                    " Available command line options:\n"
                    "\n"
                    "  COLLECTION_FREQUENCY    data collection frequency in seconds\n"
                    "                          minimum: %d\n"
                    "\n"
                    "  all                     enable all charts\n"
                    "\n"
                    "  cycles                  enable CPU cycles chart\n"
                    "\n"
                    "  instructions            enable Instructions chart\n"
                    "\n"
                    "  branch                  enable Branch instructions chart\n"
                    "\n"
                    "  cache                   enable Cache operations chart\n"
                    "\n"
                    "  bus                     enable Bus cycles chart\n"
                    "\n"
                    "  stalled                 enable Stalled frontend and backend cycles chart\n"
                    "\n"
                    "  migrations              enable CPU migrations chart\n"
                    "\n"
                    "  alighnment              enable Alignment faults chart\n"
                    "\n"
                    "  emulation               enable Emulation faults chart\n"
                    "\n"
                    "  L1D                     enable L1D cache operations chart\n"
                    "\n"
                    "  L1D-prefetch            enable L1D prefetch cache operations chart\n"
                    "\n"
                    "  L1I                     enable L1I cache operations chart\n"
                    "\n"
                    "  LL                      enable LL cache operations chart\n"
                    "\n"
                    "  DTLB                    enable DTLB cache operations chart\n"
                    "\n"
                    "  ITLB                    enable ITLB cache operations chart\n"
                    "\n"
                    "  PBU                     enable PBU cache operations chart\n"
                    "\n"
                    "  debug                   enable verbose output\n"
                    "                          default: disabled\n"
                    "\n"
                    "  -v\n"
                    "  -V\n"
                    "  --version               print version and exit\n"
                    "\n"
                    "  -h\n"
                    "  --help                  print this message and exit\n"
                    "\n"
                    " For more information:\n"
                    " https://github.com/netdata/netdata/tree/master/collectors/perf.plugin\n"
                    "\n"
                    , VAR_32
                    , VAR_37
            );
            FUNC_1(1);
        }

        FUNC_0("ignoring parameter '%s'", VAR_39[VAR_40]);
    }

    if(!VAR_41){
        FUNC_3("no charts enabled - nothing to do.");
        FUNC_5("DISABLE\n");
        FUNC_1(1);
    }
}
