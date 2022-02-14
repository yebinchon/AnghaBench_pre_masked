
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* db_filename; scalar_t__ log_count; int machines_urls_count; int persons_urls_count; int urls_count; scalar_t__ usages_count; int machines_count; int persons_count; int persons; int machines; int enabled; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_8 (char*,char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (char*,int ,char*,char*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (char*) ;

int FUNC_14(void) {
    if(FUNC_12(!VAR_4.enabled))
        return -1;

    if(FUNC_12(!FUNC_9()))
        return -2;

    FUNC_4();

    char VAR_7[VAR_2 + 1];
    char VAR_8[VAR_2 + 1];

    FUNC_11(VAR_8, VAR_2, "%s.old", VAR_4.db_filename);
    FUNC_11(VAR_7, VAR_2, "%s.tmp", VAR_4.db_filename);

    FUNC_0(VAR_0, "Registry: Creating file '%s'", VAR_7);
    FILE *VAR_9 = FUNC_6(VAR_7, "w");
    if(!VAR_9) {
        FUNC_2("Registry: Cannot create file: %s", VAR_7);
        FUNC_3();
        return -1;
    }



    FUNC_0(VAR_0, "Saving all machines");
    int VAR_10 = FUNC_1(VAR_4.machines, VAR_5, VAR_9);
    if(VAR_10 < 0) {
        FUNC_2("Registry: Cannot save registry machines - return value %d", VAR_10);
        FUNC_5(VAR_9);
        FUNC_3();
        return VAR_10;
    }
    FUNC_0(VAR_0, "Registry: saving machines took %d bytes", VAR_10);

    FUNC_0(VAR_0, "Saving all persons");
    int VAR_11 = FUNC_1(VAR_4.persons, VAR_6, VAR_9);
    if(VAR_11 < 0) {
        FUNC_2("Registry: Cannot save registry persons - return value %d", VAR_11);
        FUNC_5(VAR_9);
        FUNC_3();
        return VAR_11;
    }
    FUNC_0(VAR_0, "Registry: saving persons took %d bytes", VAR_11);


    FUNC_7(VAR_9, "T\t%016llx\t%016llx\t%016llx\t%016llx\t%016llx\t%016llx\n",
            VAR_4.persons_count,
            VAR_4.machines_count,
            VAR_4.usages_count + 1,
            VAR_4.urls_count,
            VAR_4.persons_urls_count,
            VAR_4.machines_urls_count
    );

    FUNC_5(VAR_9);

    VAR_3 = 0;


    FUNC_0(VAR_0, "Registry: Removing old db '%s'", VAR_8);
    if(FUNC_13(VAR_8) == -1 && VAR_3 != VAR_1)
        FUNC_2("Registry: cannot remove old registry file '%s'", VAR_8);


    FUNC_0(VAR_0, "Registry: Link current db '%s' to .old: '%s'", VAR_4.db_filename, VAR_8);
    if(FUNC_8(VAR_4.db_filename, VAR_8) == -1 && VAR_3 != VAR_1)
        FUNC_2("Registry: cannot move file '%s' to '%s'. Saving registry DB failed!", VAR_4.db_filename, VAR_8);

    else {

        FUNC_0(VAR_0, "Registry: removing db '%s'", VAR_4.db_filename);
        if (FUNC_13(VAR_4.db_filename) == -1 && VAR_3 != VAR_1)
            FUNC_2("Registry: cannot remove old registry file '%s'", VAR_4.db_filename);


        FUNC_0(VAR_0, "Registry: linking tmp db '%s' to active db '%s'", VAR_7, VAR_4.db_filename);
        if (FUNC_8(VAR_7, VAR_4.db_filename) == -1) {
            FUNC_2("Registry: cannot move file '%s' to '%s'. Saving registry DB failed!", VAR_7,
                    VAR_4.db_filename);


            FUNC_0(VAR_0, "Registry: linking old db '%s' to active db '%s'", VAR_8, VAR_4.db_filename);
            if(FUNC_8(VAR_8, VAR_4.db_filename) == -1)
                FUNC_2("Registry: cannot move file '%s' to '%s'. Recovering the old registry DB failed!", VAR_8, VAR_4.db_filename);
        }
        else {
            FUNC_0(VAR_0, "Registry: removing tmp db '%s'", VAR_7);
            if(FUNC_13(VAR_7) == -1)
                FUNC_2("Registry: cannot remove tmp registry file '%s'", VAR_7);



            FUNC_10();
            VAR_4.log_count = 0;
        }
    }


    FUNC_3();

    return -1;
}
