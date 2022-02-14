
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct mc {int ce_updated; scalar_t__ ce_count; int ue_updated; scalar_t__ ue_count; void* ue_rd; int name; scalar_t__ ue_count_filename; struct mc* next; void* ce_rd; scalar_t__ ce_count_filename; void* ue_ff; void* ce_ff; } ;
typedef scalar_t__ calculated_number ;
typedef int RRDSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 struct mc* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (void*,int ) ;
 void* FUNC_5 (scalar_t__,char*,int ) ;
 void* FUNC_6 (void*) ;
 void* FUNC_7 (int *,int ,int *,int,int,int ) ;
 int FUNC_8 (int *,void*,scalar_t__) ;
 int * FUNC_9 (char*,char*,int *,char*,int *,char*,char*,int ,char*,int ,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(int VAR_11, usec_t VAR_12) {
    (void)VAR_12;

    if(FUNC_13(VAR_9 == ((void*)0))) {
        FUNC_1();
        if(FUNC_13(VAR_9 == ((void*)0)))
            return 1;
    }

    static int VAR_13 = -1, VAR_14 = -1;
    calculated_number VAR_15 = 0, VAR_16 = 0;
    struct mc *VAR_17;

    if(FUNC_13(VAR_13 == -1)) {
        VAR_13 = FUNC_0("plugin:proc:/sys/devices/system/edac/mc", "enable ECC memory correctable errors", VAR_0);
        VAR_14 = FUNC_0("plugin:proc:/sys/devices/system/edac/mc", "enable ECC memory uncorrectable errors", VAR_0);
    }

    if(VAR_13 != VAR_1) {
        for(VAR_17 = VAR_9; VAR_17; VAR_17 = VAR_17->next) {
            if(VAR_17->ce_count_filename) {
                VAR_17->ce_updated = 0;

                if(FUNC_13(!VAR_17->ce_ff)) {
                    VAR_17->ce_ff = FUNC_5(VAR_17->ce_count_filename, " \t", VAR_6);
                    if(FUNC_13(!VAR_17->ce_ff))
                        continue;
                }

                VAR_17->ce_ff = FUNC_6(VAR_17->ce_ff);
                if(FUNC_13(!VAR_17->ce_ff || FUNC_2(VAR_17->ce_ff) < 1 || FUNC_4(VAR_17->ce_ff, 0) < 1))
                    continue;

                VAR_17->ce_count = FUNC_12(FUNC_3(VAR_17->ce_ff, 0, 0));
                VAR_15 += VAR_17->ce_count;
                VAR_17->ce_updated = 1;
            }
        }
    }

    if(VAR_14 != VAR_1) {
        for(VAR_17 = VAR_9; VAR_17; VAR_17 = VAR_17->next) {
            if(VAR_17->ue_count_filename) {
                VAR_17->ue_updated = 0;

                if(FUNC_13(!VAR_17->ue_ff)) {
                    VAR_17->ue_ff = FUNC_5(VAR_17->ue_count_filename, " \t", VAR_6);
                    if(FUNC_13(!VAR_17->ue_ff))
                        continue;
                }

                VAR_17->ue_ff = FUNC_6(VAR_17->ue_ff);
                if(FUNC_13(!VAR_17->ue_ff || FUNC_2(VAR_17->ue_ff) < 1 || FUNC_4(VAR_17->ue_ff, 0) < 1))
                    continue;

                VAR_17->ue_count = FUNC_12(FUNC_3(VAR_17->ue_ff, 0, 0));
                VAR_16 += VAR_17->ue_count;
                VAR_17->ue_updated = 1;
            }
        }
    }



    if(VAR_13 == VAR_2 || (VAR_13 == VAR_0 &&
                                       (VAR_15 > 0 || VAR_10 == VAR_2))) {
        VAR_13 = VAR_2;

        static RRDSET *VAR_18 = ((void*)0);

        if(FUNC_13(!VAR_18)) {
            VAR_18 = FUNC_9(
                    "mem"
                    , "ecc_ce"
                    , ((void*)0)
                    , "ecc"
                    , ((void*)0)
                    , "ECC Memory Correctable Errors"
                    , "errors"
                    , VAR_5
                    , "/sys/devices/system/edac/mc"
                    , VAR_3
                    , VAR_11
                    , VAR_7
            );
        }
        else
            FUNC_11(VAR_18);

        for(VAR_17 = VAR_9; VAR_17; VAR_17 = VAR_17->next) {
            if (VAR_17->ce_count_filename && VAR_17->ce_updated) {
                if(FUNC_13(!VAR_17->ce_rd))
                    VAR_17->ce_rd = FUNC_7(VAR_18, VAR_17->name, ((void*)0), 1, 1, VAR_8);

                FUNC_8(VAR_18, VAR_17->ce_rd, VAR_17->ce_count);
            }
        }

        FUNC_10(VAR_18);
    }



    if(VAR_14 == VAR_2 || (VAR_14 == VAR_0 &&
                                       (VAR_16 > 0 || VAR_10 == VAR_2))) {
        VAR_14 = VAR_2;

        static RRDSET *VAR_19 = ((void*)0);

        if(FUNC_13(!VAR_19)) {
            VAR_19 = FUNC_9(
                    "mem"
                    , "ecc_ue"
                    , ((void*)0)
                    , "ecc"
                    , ((void*)0)
                    , "ECC Memory Uncorrectable Errors"
                    , "errors"
                    , VAR_5
                    , "/sys/devices/system/edac/mc"
                    , VAR_4
                    , VAR_11
                    , VAR_7
            );
        }
        else
            FUNC_11(VAR_19);

        for(VAR_17 = VAR_9; VAR_17; VAR_17 = VAR_17->next) {
            if (VAR_17->ue_count_filename && VAR_17->ue_updated) {
                if(FUNC_13(!VAR_17->ue_rd))
                    VAR_17->ue_rd = FUNC_7(VAR_19, VAR_17->name, ((void*)0), 1, 1, VAR_8);

                FUNC_8(VAR_19, VAR_17->ue_rd, VAR_17->ue_count);
            }
        }

        FUNC_10(VAR_19);
    }

    return 0;
}
