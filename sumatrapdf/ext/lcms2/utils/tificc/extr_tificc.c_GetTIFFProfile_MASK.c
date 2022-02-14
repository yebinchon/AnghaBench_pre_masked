
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int * cmsHPROFILE ;
typedef void* cmsFloat32Number ;
struct TYPE_10__ {double Y; void* y; void* x; } ;
struct TYPE_9__ {double Y; void* y; void* x; } ;
struct TYPE_8__ {double Y; void* y; void* x; } ;
struct TYPE_11__ {TYPE_3__ Blue; TYPE_2__ Green; TYPE_1__ Red; } ;
typedef TYPE_4__ cmsCIExyYTRIPLE ;
struct TYPE_12__ {double Y; void* y; void* x; } ;
typedef TYPE_5__ cmsCIExyY ;
typedef int TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,void***,...) ;
 int FUNC_3 (int *,int ,int **,int **,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_4 (int *,int,int *) ;
 int * FUNC_5 (int *,TYPE_5__*,TYPE_4__*,int **) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static
cmsHPROFILE FUNC_10(TIFF* VAR_8)
{
    cmsCIExyYTRIPLE VAR_9;
    cmsFloat32Number* VAR_10;
    cmsCIExyY VAR_11;
    cmsFloat32Number* VAR_12;
    int VAR_13;
    cmsToneCurve* VAR_14[3];
    cmsUInt16Number *VAR_15, *VAR_16, *VAR_17;
    cmsHPROFILE VAR_18;
    cmsUInt32Number VAR_19;
    cmsUInt8Number* VAR_20;

    if (VAR_0) return ((void*)0);

    if (FUNC_2(VAR_8, VAR_2, &VAR_19, &VAR_20)) {

        VAR_18 = FUNC_7(VAR_20, VAR_19);


        if (VAR_6 && (VAR_18 != ((void*)0))) {

            FUNC_9(VAR_7, "\n[Embedded profile]\n");
            FUNC_0(((void*)0), VAR_18);
            FUNC_8(VAR_7);
        }

        if (VAR_18 != ((void*)0) && VAR_1 != ((void*)0))
            FUNC_1(VAR_20, VAR_19, VAR_1);

        if (VAR_18) return VAR_18;
    }



    if (FUNC_2(VAR_8, VAR_3, &VAR_10)) {

        VAR_9.Red.x = VAR_10[0];
        VAR_9.Red.y = VAR_10[1];
        VAR_9.Green.x = VAR_10[2];
        VAR_9.Green.y = VAR_10[3];
        VAR_9.Blue.x = VAR_10[4];
        VAR_9.Blue.y = VAR_10[5];

        VAR_9.Red.Y = VAR_9.Green.Y = VAR_9.Blue.Y = 1.0;

        if (FUNC_2(VAR_8, VAR_5, &VAR_12)) {

            VAR_11.x = VAR_12[0];
            VAR_11.y = VAR_12[1];
            VAR_11.Y = 1.0;



            FUNC_3(VAR_8, VAR_4,
                &VAR_15,
                &VAR_16,
                &VAR_17);

            VAR_14[0] = FUNC_4(((void*)0), 256, VAR_15);
            VAR_14[1] = FUNC_4(((void*)0), 256, VAR_16);
            VAR_14[2] = FUNC_4(((void*)0), 256, VAR_17);

            VAR_18 = FUNC_5(((void*)0), &VAR_11, &VAR_9, VAR_14);

            for (VAR_13=0; VAR_13 < 3; VAR_13++)
                FUNC_6(((void*)0), VAR_14[VAR_13]);

            if (VAR_6) {
                FUNC_9(VAR_7, "\n[Colorimetric TIFF]\n");
            }


            return VAR_18;
        }
    }

    return ((void*)0);
}
