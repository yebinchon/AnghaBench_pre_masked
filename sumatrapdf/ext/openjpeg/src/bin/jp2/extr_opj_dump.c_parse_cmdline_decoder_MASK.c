
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* member_0; char member_3; int * member_2; int member_1; } ;
typedef TYPE_1__ opj_option_t ;
struct TYPE_8__ {scalar_t__* infile; scalar_t__* outfile; int m_verbose; int decod_format; } ;
typedef TYPE_2__ opj_dparameters_t ;
typedef int long_option ;
struct TYPE_9__ {scalar_t__ set_out_format; char* imgdirpath; int set_imgdir; int flag; } ;
typedef TYPE_3__ img_fol_t ;





 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char const*,TYPE_1__*,int) ;
 char* VAR_1 ;
 int FUNC_6 (scalar_t__*,int,char*) ;
 int VAR_2 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(int VAR_3, char **VAR_4,
                                 opj_dparameters_t *VAR_5, img_fol_t *VAR_6)
{
    int VAR_7, VAR_8;
    opj_option_t VAR_9[] = {
        {"ImgDir", VAR_0, ((void*)0), 'y'}
    };
    const char VAR_10[] = "i:o:f:hv";

    VAR_7 = sizeof(VAR_9);
    VAR_6->set_out_format = 0;
    do {
        VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_10, VAR_9, VAR_7);
        if (VAR_8 == -1) {
            break;
        }
        switch (VAR_8) {
        case 'i': {
            char *VAR_11 = VAR_1;
            VAR_5->decod_format = FUNC_3(VAR_11);
            switch (VAR_5->decod_format) {
            case 130:
                break;
            case 129:
                break;
            case 128:
                break;
            default:
                FUNC_2(VAR_2,
                        "[ERROR] Unknown input file format: %s \n"
                        "        Known file formats are *.j2k, *.jp2, *.jpc or *.jpt\n",
                        VAR_11);
                return 1;
            }
            if (FUNC_6(VAR_5->infile, sizeof(VAR_5->infile), VAR_11) != 0) {
                FUNC_2(VAR_2, "[ERROR] Path is too long\n");
                return 1;
            }
        }
        break;



        case 'o': {
            if (FUNC_6(VAR_5->outfile, sizeof(VAR_5->outfile),
                             VAR_1) != 0) {
                FUNC_2(VAR_2, "[ERROR] Path is too long\n");
                return 1;
            }
        }
        break;


        case 'f':
            VAR_6->flag = FUNC_0(VAR_1);
            break;


        case 'h':
            FUNC_1();
            return 1;



        case 'y': {
            VAR_6->imgdirpath = (char*)FUNC_4(FUNC_8(VAR_1) + 1);
            if (VAR_6->imgdirpath == ((void*)0)) {
                return 1;
            }
            FUNC_7(VAR_6->imgdirpath, VAR_1);
            VAR_6->set_imgdir = 1;
        }
        break;



        case 'v': {
            VAR_5->m_verbose = 1;
        }
        break;


        default:
            FUNC_2(VAR_2, "[WARNING] An invalid option has been ignored.\n");
            break;
        }
    } while (VAR_8 != -1);


    if (VAR_6->set_imgdir == 1) {
        if (!(VAR_5->infile[0] == 0)) {
            FUNC_2(VAR_2, "[ERROR] options -ImgDir and -i cannot be used together.\n");
            return 1;
        }
        if (VAR_6->set_out_format == 0) {
            FUNC_2(VAR_2,
                    "[ERROR] When -ImgDir is used, -OutFor <FORMAT> must be used.\n");
            FUNC_2(VAR_2, "Only one format allowed.\n"
                    "Valid format are PGM, PPM, PNM, PGX, BMP, TIF, RAW and TGA.\n");
            return 1;
        }
        if (!(VAR_5->outfile[0] == 0)) {
            FUNC_2(VAR_2, "[ERROR] options -ImgDir and -o cannot be used together\n");
            return 1;
        }
    } else {
        if (VAR_5->infile[0] == 0) {
            FUNC_2(VAR_2, "[ERROR] Required parameter is missing\n");
            FUNC_2(VAR_2, "Example: %s -i image.j2k\n", VAR_4[0]);
            FUNC_2(VAR_2, "   Help: %s -h\n", VAR_4[0]);
            return 1;
        }
    }

    return 0;
}
