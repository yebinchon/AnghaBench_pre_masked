
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* tk; } ;
typedef TYPE_1__ opj_mj2_t ;
struct TYPE_15__ {int info_handler; int warning_handler; int error_handler; } ;
typedef TYPE_2__ opj_event_mgr_t ;
struct TYPE_16__ {scalar_t__ mj2_handle; } ;
typedef TYPE_3__ opj_dinfo_t ;
typedef int opj_common_ptr ;
struct TYPE_17__ {scalar_t__ track_type; unsigned int num_samples; TYPE_5__* sample; } ;
typedef TYPE_4__ mj2_tk_t ;
struct TYPE_18__ {scalar_t__ sample_size; scalar_t__ offset; } ;
typedef TYPE_5__ mj2_sample_t ;
typedef TYPE_2__ mj2_dparameters_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (unsigned char*,scalar_t__,int,int *) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (unsigned char*,scalar_t__,int,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_2__*,int ) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,char*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_16(int VAR_6, char *VAR_7[])
{
    opj_dinfo_t* VAR_8;
    opj_event_mgr_t VAR_9;
    int VAR_10;
    unsigned int VAR_11;
    opj_mj2_t *VAR_12;
    mj2_tk_t *VAR_13;
    mj2_sample_t *VAR_14;
    unsigned char* VAR_15;
    FILE *VAR_16, *VAR_17;
    char VAR_18[50];
    mj2_dparameters_t VAR_19;

    if (VAR_6 != 3) {
        FUNC_14("Usage: %s mj2filename output_location\n", VAR_7[0]);
        FUNC_14("Example: %s foreman.mj2 output/foreman\n", VAR_7[0]);
        return 1;
    }

    VAR_16 = FUNC_1(VAR_7[1], "rb");

    if (!VAR_16) {
        FUNC_2(VAR_3, "failed to open %s for reading\n", VAR_7[1]);
        return 1;
    }





    FUNC_8(&VAR_9, 0, sizeof(opj_event_mgr_t));
    VAR_9.error_handler = VAR_1;
    VAR_9.warning_handler = VAR_5;
    VAR_9.info_handler = VAR_2;


    VAR_8 = FUNC_9();


    FUNC_13((opj_common_ptr)VAR_8, &VAR_9, VAR_3);


    FUNC_8(&VAR_19, 0, sizeof(mj2_dparameters_t));
    VAR_12 = (opj_mj2_t*) VAR_8->mj2_handle;
    FUNC_12(VAR_12, &VAR_19);

    if (FUNC_11(VAR_16, VAR_12)) {
        return 1;
    }


    VAR_10 = 0;
    while (VAR_12->tk[VAR_10].track_type != 0) {
        VAR_10 ++;
    }

    VAR_13 = &VAR_12->tk[VAR_10];

    FUNC_2(VAR_4, "Extracting %d frames from file...\n", VAR_13->num_samples);

    for (VAR_11 = 0; VAR_11 < VAR_13->num_samples; VAR_11++) {
        VAR_14 = &VAR_13->sample[VAR_11];
        VAR_15 = (unsigned char*) FUNC_7(VAR_14->sample_size -
                           8);
        FUNC_5(VAR_16, VAR_14->offset + 8, VAR_0);
        FUNC_3(VAR_15, VAR_14->sample_size - 8, 1,
              VAR_16);

        FUNC_15(VAR_18, "%s_%05d.j2k", VAR_7[2], VAR_11);
        VAR_17 = FUNC_1(VAR_18, "wb");
        if (!VAR_17) {
            FUNC_2(VAR_3, "failed to open %s for writing\n", VAR_18);
            return 1;
        }
        FUNC_6(VAR_15, VAR_14->sample_size - 8, 1, VAR_17);
        FUNC_0(VAR_17);
        FUNC_4(VAR_15);
    }
    FUNC_0(VAR_16);
    FUNC_2(VAR_4, "%d frames correctly extracted\n", VAR_11);


    if (VAR_8) {
        FUNC_10((opj_mj2_t*)VAR_8->mj2_handle);
    }

    return 0;
}
