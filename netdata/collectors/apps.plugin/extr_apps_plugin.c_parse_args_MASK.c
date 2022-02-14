
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int VAR_8 ;
 char* VAR_9 ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int VAR_10 ;
 char* VAR_11 ;

__attribute__((used)) static void FUNC_11(int VAR_12, char **VAR_13)
{
    int VAR_14, VAR_15 = 0;

    for(VAR_14 = 1; VAR_14 < VAR_12; VAR_14++) {
        if(!VAR_15) {
            int VAR_16 = (int)FUNC_9(VAR_13[VAR_14]);
            if(VAR_16 > 0) {
                VAR_15 = VAR_16;
                continue;
            }
        }

        if(FUNC_10("version", VAR_13[VAR_14]) == 0 || FUNC_10("-version", VAR_13[VAR_14]) == 0 || FUNC_10("--version", VAR_13[VAR_14]) == 0 || FUNC_10("-v", VAR_13[VAR_14]) == 0 || FUNC_10("-V", VAR_13[VAR_14]) == 0) {
            FUNC_6("apps.plugin %s\n", VAR_0);
            FUNC_2(0);
        }

        if(FUNC_10("test-permissions", VAR_13[VAR_14]) == 0 || FUNC_10("-t", VAR_13[VAR_14]) == 0) {
            if(!FUNC_0()) {
                FUNC_5("Tried to read /proc/1/io and it failed");
                FUNC_2(1);
            }
            FUNC_6("OK\n");
            FUNC_2(0);
        }

        if(FUNC_10("debug", VAR_13[VAR_14]) == 0) {



            FUNC_3(VAR_8, "apps.plugin has been compiled without debugging\n");

            continue;
        }


        if(FUNC_10("fds-cache-secs", VAR_13[VAR_14]) == 0) {
            if(VAR_12 <= VAR_14 + 1) {
                FUNC_3(VAR_8, "Parameter 'fds-cache-secs' requires a number as argument.\n");
                FUNC_2(1);
            }
            VAR_14++;
            VAR_7 = FUNC_8(VAR_13[VAR_14]);
            if(VAR_7 < 0) VAR_7 = 0;
            continue;
        }


        if(FUNC_10("no-childs", VAR_13[VAR_14]) == 0 || FUNC_10("without-childs", VAR_13[VAR_14]) == 0) {
            VAR_6 = 0;
            continue;
        }

        if(FUNC_10("with-childs", VAR_13[VAR_14]) == 0) {
            VAR_6 = 1;
            continue;
        }

        if(FUNC_10("with-guest", VAR_13[VAR_14]) == 0) {
            VAR_4 = 1;
            continue;
        }

        if(FUNC_10("no-guest", VAR_13[VAR_14]) == 0 || FUNC_10("without-guest", VAR_13[VAR_14]) == 0) {
            VAR_4 = 0;
            continue;
        }

        if(FUNC_10("with-files", VAR_13[VAR_14]) == 0) {
            VAR_2 = 1;
            continue;
        }

        if(FUNC_10("no-files", VAR_13[VAR_14]) == 0 || FUNC_10("without-files", VAR_13[VAR_14]) == 0) {
            VAR_2 = 0;
            continue;
        }

        if(FUNC_10("no-users", VAR_13[VAR_14]) == 0 || FUNC_10("without-users", VAR_13[VAR_14]) == 0) {
            VAR_5 = 0;
            continue;
        }

        if(FUNC_10("no-groups", VAR_13[VAR_14]) == 0 || FUNC_10("without-groups", VAR_13[VAR_14]) == 0) {
            VAR_3 = 0;
            continue;
        }

        if(FUNC_10("-h", VAR_13[VAR_14]) == 0 || FUNC_10("--help", VAR_13[VAR_14]) == 0) {
            FUNC_3(VAR_8,
                    "\n"
                    " netdata apps.plugin %s\n"
                    " Copyright (C) 2016-2017 Costa Tsaousis <costa@tsaousis.gr>\n"
                    " Released under GNU General Public License v3 or later.\n"
                    " All rights reserved.\n"
                    "\n"
                    " This program is a data collector plugin for netdata.\n"
                    "\n"
                    " Available command line options:\n"
                    "\n"
                    " SECONDS           set the data collection frequency\n"
                    "\n"
                    " debug             enable debugging (lot of output)\n"
                    "\n"
                    " with-childs\n"
                    " without-childs    enable / disable aggregating exited\n"
                    "                   children resources into parents\n"
                    "                   (default is enabled)\n"
                    "\n"
                    " with-guest\n"
                    " without-guest     enable / disable reporting guest charts\n"
                    "                   (default is disabled)\n"
                    "\n"
                    " with-files\n"
                    " without-files     enable / disable reporting files, sockets, pipes\n"
                    "                   (default is enabled)\n"
                    "\n"
                    " without-users     disable reporting per user charts\n"
                    "\n"
                    " without-groups    disable reporting per user group charts\n"
                    "\n"

                    " fds-cache-secs N  cache the files of processed for N seconds\n"
                    "                   caching is adaptive per file (when a file\n"
                    "                   is found, it starts at 0 and while the file\n"
                    "                   remains open, it is incremented up to the\n"
                    "                   max given)\n"
                    "                   (default is %ld seconds)\n"
                    "\n"

                    " version or -v or -V print program version and exit\n"
                    "\n"
                    , VAR_0

                    , VAR_7

            );
            FUNC_2(1);
        }

        FUNC_1("Cannot understand option %s", VAR_13[VAR_14]);
        FUNC_2(1);
    }

    if(VAR_15 > 0) VAR_10 = VAR_15;

    if(FUNC_7(VAR_11, "groups")) {
        FUNC_4("Cannot read process groups configuration file '%s/apps_groups.conf'. Will try '%s/apps_groups.conf'", VAR_11, VAR_9);

        if(FUNC_7(VAR_9, "groups")) {
            FUNC_1("Cannot read process groups '%s/apps_groups.conf'. There are no internal defaults. Failing.", VAR_9);
            FUNC_2(1);
        }
        else
            FUNC_4("Loaded config file '%s/apps_groups.conf'", VAR_9);
    }
    else
        FUNC_4("Loaded config file '%s/apps_groups.conf'", VAR_11);
}
