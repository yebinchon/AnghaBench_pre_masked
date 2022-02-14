
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;


typedef int raw_cparameters_t ;
struct TYPE_44__ {int numcomps; } ;
typedef TYPE_1__ opj_image_t ;
struct TYPE_45__ {float* rates; int set_imgdir; int imgdirpath; int info_handler; int warning_handler; int error_handler; } ;
typedef TYPE_2__ opj_event_mgr_t ;
struct TYPE_46__ {int tcp_numlayers; float* tcp_rates; char* cp_comment; int decod_format; int tcp_mct; scalar_t__ cod_format; char* outfile; char* cp_matrice; scalar_t__ cp_cinema; int infile; } ;
typedef TYPE_3__ opj_cparameters_t ;
typedef int opj_common_ptr ;
typedef int opj_codestream_info_t ;
struct TYPE_47__ {int buffer; } ;
typedef TYPE_4__ opj_cio_t ;
typedef int opj_cinfo_t ;
typedef int opj_bool ;
typedef TYPE_2__ img_fol_t ;
struct TYPE_48__ {char* filename_buf; char** filename; } ;
typedef TYPE_6__ dircnt_t ;
typedef int FILE ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;






 TYPE_1__* FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (int ,int,int,int *) ;
 scalar_t__ FUNC_9 (int,TYPE_6__*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_12 (size_t const) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;
 int FUNC_14 (TYPE_4__*) ;
 TYPE_4__* FUNC_15 (int ,int *,int ) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,TYPE_4__*,TYPE_1__*,int *) ;
 int FUNC_20 (int *,TYPE_4__*,TYPE_1__*,int *) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (int ,TYPE_2__*,int ) ;
 int FUNC_24 (int *,TYPE_3__*,TYPE_1__*) ;
 char* FUNC_25 () ;
 int FUNC_26 (int,char**,TYPE_3__*,TYPE_2__*,int *,char*) ;
 TYPE_1__* FUNC_27 (int ,TYPE_3__*) ;
 TYPE_1__* FUNC_28 (int ,TYPE_3__*) ;
 TYPE_1__* FUNC_29 (int ,TYPE_3__*) ;
 TYPE_1__* FUNC_30 (int ,TYPE_3__*,int *) ;
 int FUNC_31 (char*,char*,char const*,char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t const FUNC_32 (char const*) ;
 TYPE_1__* FUNC_33 (int ,TYPE_3__*) ;
 TYPE_1__* FUNC_34 (int ,TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_35 (int *,char*) ;

int FUNC_36(int VAR_9, char **VAR_10)
{
    opj_bool VAR_11;
    opj_cparameters_t VAR_12;
    img_fol_t VAR_13;
    opj_event_mgr_t VAR_14;
    opj_image_t *VAR_15 = ((void*)0);
    int VAR_16, VAR_17;
    int VAR_18;
    dircnt_t *VAR_19 = ((void*)0);
    raw_cparameters_t VAR_20;
    opj_codestream_info_t VAR_21;
    char VAR_22[VAR_3];





    FUNC_13(&VAR_14, 0, sizeof(opj_event_mgr_t));
    VAR_14.error_handler = VAR_4;
    VAR_14.warning_handler = VAR_8;
    VAR_14.info_handler = VAR_5;


    FUNC_22(&VAR_12);


    *VAR_22 = 0;
    FUNC_13(&VAR_13, 0, sizeof(img_fol_t));


    if (FUNC_26(VAR_9, VAR_10, &VAR_12, &VAR_13, &VAR_20,
                              VAR_22) == 1) {
        return 1;
    }

    if (VAR_12.cp_cinema) {
        VAR_13.rates = (float*)FUNC_12(VAR_12.tcp_numlayers * sizeof(float));
        for (VAR_16 = 0; VAR_16 < VAR_12.tcp_numlayers; VAR_16++) {
            VAR_13.rates[VAR_16] = VAR_12.tcp_rates[VAR_16];
        }
        FUNC_1(&VAR_12);
    }


    if (VAR_12.cp_comment == ((void*)0)) {
        const char VAR_23[] = "Created by OpenJPEG version ";
        const size_t VAR_24 = FUNC_32(VAR_23);
        const char *VAR_25 = FUNC_25();





        VAR_12.cp_comment = (char*)FUNC_12(VAR_24 + FUNC_32(VAR_25) + 1);
        FUNC_31(VAR_12.cp_comment, "%s%s", VAR_23, VAR_25);


    }


    if (VAR_13.set_imgdir == 1) {
        VAR_17 = FUNC_10(VAR_13.imgdirpath);
        VAR_19 = (dircnt_t*)FUNC_12(sizeof(dircnt_t));
        if (VAR_19) {
            VAR_19->filename_buf = (char*)FUNC_12(VAR_17 * VAR_3 * sizeof(
                    char));
            VAR_19->filename = (char**) FUNC_12(VAR_17 * sizeof(char*));
            if (!VAR_19->filename_buf) {
                return 0;
            }
            for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
                VAR_19->filename[VAR_16] = VAR_19->filename_buf + VAR_16 * VAR_3;
            }
        }
        if (FUNC_11(VAR_19, VAR_13.imgdirpath) == 1) {
            return 0;
        }
        if (VAR_17 == 0) {
            FUNC_6(VAR_7, "Folder is empty\n");
            return 0;
        }
    } else {
        VAR_17 = 1;
    }

    for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
        VAR_15 = ((void*)0);
        FUNC_6(VAR_6, "\n");

        if (VAR_13.set_imgdir == 1) {
            if (FUNC_9(VAR_18, VAR_19, &VAR_13, &VAR_12)) {
                FUNC_6(VAR_6, "skipping file...\n");
                continue;
            }
        }
        switch (VAR_12.decod_format) {
        case 133:
            break;
        case 131:
            break;
        case 134:
            break;
        case 128:
            break;
        case 130:
            break;
        case 129:
            break;
        case 132:
            break;
        default:
            FUNC_6(VAR_6, "skipping file...\n");
            continue;
        }




        switch (VAR_12.decod_format) {
        case 133:
            VAR_15 = FUNC_27(VAR_12.infile, &VAR_12);
            if (!VAR_15) {
                FUNC_6(VAR_6, "Unable to load pgx file\n");
                return 1;
            }
            break;

        case 131:
            VAR_15 = FUNC_29(VAR_12.infile, &VAR_12);
            if (!VAR_15) {
                FUNC_6(VAR_6, "Unable to load pnm file\n");
                return 1;
            }
            break;

        case 134:
            VAR_15 = FUNC_0(VAR_12.infile, &VAR_12);
            if (!VAR_15) {
                FUNC_6(VAR_6, "Unable to load bmp file\n");
                return 1;
            }
            break;
        case 130:
            VAR_15 = FUNC_30(VAR_12.infile, &VAR_12, &VAR_20);
            if (!VAR_15) {
                FUNC_6(VAR_6, "Unable to load raw file\n");
                return 1;
            }
            break;

        case 129:
            VAR_15 = FUNC_33(VAR_12.infile, &VAR_12);
            if (!VAR_15) {
                FUNC_6(VAR_6, "Unable to load tga file\n");
                return 1;
            }
            break;
        }



        if (!VAR_15) {
            FUNC_6(VAR_6, "Unable to load file: got no image\n");
            return 1;
        }

        VAR_12.tcp_mct = VAR_15->numcomps == 3 ? 1 : 0;

        if (VAR_12.cp_cinema) {
            FUNC_2(&VAR_12, VAR_15, &VAR_13);
        }




        if (VAR_12.cod_format == VAR_2) {
            int VAR_26;
            size_t VAR_27;
            opj_cio_t *VAR_28 = ((void*)0);
            FILE *VAR_29 = ((void*)0);


            opj_cinfo_t* VAR_30 = FUNC_16(VAR_0);


            FUNC_23((opj_common_ptr)VAR_30, &VAR_14, VAR_6);


            FUNC_24(VAR_30, &VAR_12, VAR_15);



            VAR_28 = FUNC_15((opj_common_ptr)VAR_30, ((void*)0), 0);


            if (*VAR_22) {
                VAR_11 = FUNC_20(VAR_30, VAR_28, VAR_15, &VAR_21);
            } else {
                VAR_11 = FUNC_19(VAR_30, VAR_28, VAR_15, ((void*)0));
            }
            if (!VAR_11) {
                FUNC_14(VAR_28);
                FUNC_6(VAR_6, "failed to encode image\n");
                return 1;
            }
            VAR_26 = FUNC_3(VAR_28);


            VAR_29 = FUNC_5(VAR_12.outfile, "wb");
            if (!VAR_29) {
                FUNC_6(VAR_6, "failed to open %s for writing\n", VAR_12.outfile);
                return 1;
            }
            VAR_27 = FUNC_8(VAR_28->buffer, 1, VAR_26, VAR_29);
            if (VAR_27 < (size_t)VAR_26) {
                FUNC_6(VAR_6, "failed to write %d (%s)\n", VAR_26,
                        VAR_12.outfile);
                return 1;
            }
            FUNC_4(VAR_29);

            FUNC_6(VAR_6, "Generated outfile %s\n", VAR_12.outfile);

            FUNC_14(VAR_28);


            if (*VAR_22) {
                VAR_11 = FUNC_35(&VAR_21, VAR_22);
                if (VAR_11) {
                    FUNC_6(VAR_6, "Failed to output index file into [%s]\n", VAR_22);
                }
            }


            FUNC_17(VAR_30);
            if (*VAR_22) {
                FUNC_18(&VAR_21);
            }
        } else {
            int VAR_31;
            size_t VAR_32;
            opj_cio_t *VAR_33 = ((void*)0);
            FILE *VAR_34 = ((void*)0);
            opj_cinfo_t *VAR_35 = ((void*)0);


            VAR_35 = FUNC_16(VAR_1);


            FUNC_23((opj_common_ptr)VAR_35, &VAR_14, VAR_6);


            FUNC_24(VAR_35, &VAR_12, VAR_15);



            VAR_33 = FUNC_15((opj_common_ptr)VAR_35, ((void*)0), 0);


            if (*VAR_22 ) {
                VAR_11 = FUNC_20(VAR_35, VAR_33, VAR_15, &VAR_21);
            } else {
                VAR_11 = FUNC_19(VAR_35, VAR_33, VAR_15, ((void*)0));
            }
            if (!VAR_11) {
                FUNC_14(VAR_33);
                FUNC_6(VAR_6, "failed to encode image\n");
                return 1;
            }
            VAR_31 = FUNC_3(VAR_33);


            VAR_34 = FUNC_5(VAR_12.outfile, "wb");
            if (!VAR_34) {
                FUNC_6(VAR_6, "failed to open %s for writing\n", VAR_12.outfile);
                return 1;
            }
            VAR_32 = FUNC_8(VAR_33->buffer, 1, VAR_31, VAR_34);
            if (VAR_32 < (size_t)VAR_31) {
                FUNC_6(VAR_6, "failed to write %d (%s)\n", VAR_31,
                        VAR_12.outfile);
                return 1;
            }
            FUNC_4(VAR_34);
            FUNC_6(VAR_6, "Generated outfile %s\n", VAR_12.outfile);

            FUNC_14(VAR_33);


            if (*VAR_22) {
                VAR_11 = FUNC_35(&VAR_21, VAR_22);
                if (VAR_11) {
                    FUNC_6(VAR_6, "Failed to output index file\n");
                }
            }


            FUNC_17(VAR_35);
            if (*VAR_22) {
                FUNC_18(&VAR_21);
            }
        }


        FUNC_21(VAR_15);
    }


    if (VAR_12.cp_comment) {
        FUNC_7(VAR_12.cp_comment);
    }
    if (VAR_12.cp_matrice) {
        FUNC_7(VAR_12.cp_matrice);
    }

    return 0;
}
