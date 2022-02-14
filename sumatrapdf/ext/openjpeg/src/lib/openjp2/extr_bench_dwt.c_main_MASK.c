
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int tcd_tile ;
typedef int tcd_image ;
typedef int tcd ;
typedef int opj_thread_pool_t ;
struct TYPE_13__ {int y1; int y0; int x1; int x0; int* data; int win_x0; int win_y0; int win_x1; int win_y1; int numcomps; int dx; int dy; int numresolutions; struct TYPE_13__* comps; struct TYPE_13__* image; struct TYPE_13__* tiles; struct TYPE_13__* tcd_image; void* whole_tile_decoding; int * thread_pool; } ;
typedef TYPE_1__ opj_tcd_tilecomp_t ;
typedef TYPE_1__ opj_tcd_tile_t ;
typedef TYPE_1__ opj_tcd_t ;
typedef TYPE_1__ opj_tcd_image_t ;
typedef TYPE_1__ opj_image_t ;
typedef TYPE_1__ opj_image_comp_t ;
typedef int image_comp ;
typedef int image ;
typedef int OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef double OPJ_FLOAT64 ;
typedef void* OPJ_BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 double FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 () ;

int FUNC_15(int VAR_3, char** VAR_4)
{
    int VAR_5 = 0;
    opj_tcd_t VAR_6;
    opj_tcd_image_t VAR_7;
    opj_tcd_tile_t VAR_8;
    opj_tcd_tilecomp_t VAR_9;
    opj_image_t VAR_10;
    opj_image_comp_t VAR_11;
    opj_thread_pool_t* VAR_12;
    OPJ_INT32 VAR_13, VAR_14, VAR_15;
    OPJ_BOOL VAR_16 = VAR_0;
    OPJ_BOOL VAR_17 = VAR_0;
    OPJ_INT32 VAR_18 = 16384 - 1;
    OPJ_FLOAT64 VAR_19, VAR_20;
    OPJ_UINT32 VAR_21 = ((OPJ_UINT32)VAR_18 + 1) / 2 - 1;
    OPJ_UINT32 VAR_22 = ((OPJ_UINT32)VAR_18 + 1) / 2 - 1;
    OPJ_UINT32 VAR_23 = 6;

    for (VAR_13 = 1; VAR_13 < VAR_3; VAR_13++) {
        if (FUNC_13(VAR_4[VAR_13], "-display") == 0) {
            VAR_16 = VAR_1;
            VAR_17 = VAR_1;
        } else if (FUNC_13(VAR_4[VAR_13], "-check") == 0) {
            VAR_17 = VAR_1;
        } else if (FUNC_13(VAR_4[VAR_13], "-size") == 0 && VAR_13 + 1 < VAR_3) {
            VAR_18 = FUNC_0(VAR_4[VAR_13 + 1]);
            VAR_13 ++;
        } else if (FUNC_13(VAR_4[VAR_13], "-num_threads") == 0 && VAR_13 + 1 < VAR_3) {
            VAR_5 = FUNC_0(VAR_4[VAR_13 + 1]);
            VAR_13 ++;
        } else if (FUNC_13(VAR_4[VAR_13], "-num_resolutions") == 0 && VAR_13 + 1 < VAR_3) {
            VAR_23 = (OPJ_UINT32)FUNC_0(VAR_4[VAR_13 + 1]);
            if (VAR_23 == 0 || VAR_23 > 32) {
                FUNC_2(VAR_2,
                        "Invalid value for num_resolutions. Should be >= 1 and <= 32\n");
                FUNC_1(1);
            }
            VAR_13 ++;
        } else if (FUNC_13(VAR_4[VAR_13], "-offset") == 0 && VAR_13 + 2 < VAR_3) {
            VAR_21 = (OPJ_UINT32)FUNC_0(VAR_4[VAR_13 + 1]);
            VAR_22 = (OPJ_UINT32)FUNC_0(VAR_4[VAR_13 + 2]);
            VAR_13 += 2;
        } else {
            FUNC_14();
        }
    }

    VAR_12 = FUNC_10(VAR_5);

    FUNC_5(&VAR_9, (OPJ_INT32)VAR_21, (OPJ_INT32)VAR_22,
               (OPJ_INT32)VAR_21 + VAR_18, (OPJ_INT32)VAR_22 + VAR_18,
               VAR_23);

    if (VAR_16) {
        FUNC_12("Before\n");
        VAR_15 = 0;
        for (VAR_14 = 0; VAR_14 < VAR_9.y1 - VAR_9.y0; VAR_14++) {
            for (VAR_13 = 0; VAR_13 < VAR_9.x1 - VAR_9.x0; VAR_13++) {
                FUNC_12("%d ", VAR_9.data[VAR_15]);
                VAR_15 ++;
            }
            FUNC_12("\n");
        }
    }

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.thread_pool = VAR_12;
    VAR_6.whole_tile_decoding = VAR_1;
    VAR_6.win_x0 = (OPJ_UINT32)VAR_9.x0;
    VAR_6.win_y0 = (OPJ_UINT32)VAR_9.y0;
    VAR_6.win_x1 = (OPJ_UINT32)VAR_9.x1;
    VAR_6.win_y1 = (OPJ_UINT32)VAR_9.y1;
    VAR_6.tcd_image = &VAR_7;
    FUNC_6(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.tiles = &VAR_8;
    FUNC_6(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.x0 = VAR_9.x0;
    VAR_8.y0 = VAR_9.y0;
    VAR_8.x1 = VAR_9.x1;
    VAR_8.y1 = VAR_9.y1;
    VAR_8.numcomps = 1;
    VAR_8.comps = &VAR_9;
    VAR_6.image = &VAR_10;
    FUNC_6(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.numcomps = 1;
    VAR_10.comps = &VAR_11;
    FUNC_6(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.dx = 1;
    VAR_11.dy = 1;

    VAR_19 = FUNC_7();
    FUNC_8(&VAR_6, &VAR_9, VAR_9.numresolutions);
    VAR_20 = FUNC_7();
    FUNC_12("time for dwt_decode: %.03f s\n", VAR_20 - VAR_19);

    if (VAR_16 || VAR_17) {
        if (VAR_16) {
            FUNC_12("After IDWT\n");
            VAR_15 = 0;
            for (VAR_14 = 0; VAR_14 < VAR_9.y1 - VAR_9.y0; VAR_14++) {
                for (VAR_13 = 0; VAR_13 < VAR_9.x1 - VAR_9.x0; VAR_13++) {
                    FUNC_12("%d ", VAR_9.data[VAR_15]);
                    VAR_15 ++;
                }
                FUNC_12("\n");
            }
        }

        FUNC_9(&VAR_9);
        if (VAR_16) {
            FUNC_12("After FDWT\n");
            VAR_15 = 0;
            for (VAR_14 = 0; VAR_14 < VAR_9.y1 - VAR_9.y0; VAR_14++) {
                for (VAR_13 = 0; VAR_13 < VAR_9.x1 - VAR_9.x0; VAR_13++) {
                    FUNC_12("%d ", VAR_9.data[VAR_15]);
                    VAR_15 ++;
                }
                FUNC_12("\n");
            }
        }

        if (VAR_17) {
            size_t VAR_24;
            size_t VAR_25 = (size_t)(VAR_9.x1 - VAR_9.x0) *
                             (size_t)(VAR_9.y1 - VAR_9.y0);
            for (VAR_24 = 0; VAR_13 < (OPJ_INT32)VAR_25; VAR_13++) {
                if (VAR_9.data[VAR_24] != FUNC_4((OPJ_UINT32)VAR_24)) {
                    FUNC_12("Difference found at idx = %u\n", (OPJ_UINT32)VAR_24);
                    FUNC_1(1);
                }
            }
        }
    }

    FUNC_3(&VAR_9);

    FUNC_11(VAR_12);
    return 0;
}
