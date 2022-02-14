
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef scalar_t__ cmsFloat64Number ;
typedef scalar_t__ clock_t ;
struct TYPE_5__ {int r; int g; int b; int a; } ;
typedef TYPE_1__ Scanline_rgba32 ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int,int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,TYPE_1__*,TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static
void FUNC_11(const char * VAR_3, cmsHPROFILE VAR_4, cmsHPROFILE VAR_5)
{
    cmsInt32Number VAR_6, VAR_7, VAR_8, VAR_9;
    clock_t VAR_10;
    cmsFloat64Number VAR_11;
    cmsHTRANSFORM VAR_12;
    Scanline_rgba32 *VAR_13;
    cmsUInt32Number VAR_14;
    cmsUInt32Number VAR_15 = 4;
    cmsUInt32Number VAR_16;

    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
        FUNC_1("Unable to open profiles");

    VAR_12 = FUNC_6(FUNC_0(), VAR_4, VAR_1,
        VAR_5, VAR_1, VAR_0, VAR_2);
    FUNC_5(FUNC_0(), VAR_4);
    FUNC_5(FUNC_0(), VAR_5);

    VAR_16 = 256 / VAR_15 * 256 / VAR_15 * 256 / VAR_15;
    VAR_14 = VAR_16 * sizeof(Scanline_rgba32);

    VAR_13 = (Scanline_rgba32 *) FUNC_10(VAR_14);

    VAR_9 = 0;
    for (VAR_6=0; VAR_6 < 256; VAR_6 += VAR_15)
        for (VAR_7=0; VAR_7 < 256; VAR_7 += VAR_15)
            for (VAR_8=0; VAR_8 < 256; VAR_8 += VAR_15) {

                VAR_13[VAR_9].r = VAR_6 / 256.0f;
                VAR_13[VAR_9].g = VAR_7 / 256.0f;
                VAR_13[VAR_9].b = VAR_8 / 256.0f;
                VAR_13[VAR_9].a = (VAR_13[VAR_9].r + VAR_13[VAR_9].g + VAR_13[VAR_9].b) / 3;

                VAR_9++;
            }


    FUNC_3(VAR_3);

    VAR_10 = FUNC_4();

    FUNC_8(FUNC_0(), VAR_12, VAR_13, VAR_13, VAR_16);

    VAR_11 = FUNC_4() - VAR_10;

    FUNC_9(VAR_13);

    FUNC_2(VAR_14, sizeof(Scanline_rgba32), VAR_11);

    FUNC_7(FUNC_0(), VAR_12);

}
