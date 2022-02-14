
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef scalar_t__ cmsColorSpaceSignature ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ VAR_6 ;
 size_t FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,size_t,int ,int ,size_t,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,double*,double*,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static
int FUNC_14(void)
{
    cmsUInt32Number VAR_8;
    cmsHPROFILE VAR_9;
    cmsHPROFILE VAR_10;
    cmsColorSpaceSignature VAR_11;
    cmsUInt32Number VAR_12;
    cmsUInt32Number VAR_13;
    cmsUInt32Number VAR_14 = 0;
    cmsUInt32Number VAR_15 = 0;
    cmsHTRANSFORM VAR_16;
    cmsUInt8Number VAR_17[4];

    VAR_9 = FUNC_12(FUNC_3(), "bad_mpe.icc", "r");
    if (!VAR_9)
        return 0;

    VAR_10 = FUNC_8(FUNC_3());
    if (!VAR_10) {
        FUNC_6(FUNC_3(), VAR_9);
        return 0;
    }

    VAR_11 = FUNC_11(FUNC_3(), VAR_9);
    VAR_12 = FUNC_5(FUNC_3(), VAR_11);

    if (VAR_11 == VAR_7) {
        VAR_13 =
            FUNC_2(VAR_4) | FUNC_1(VAR_12) | FUNC_0(0);
    }
    else {
        VAR_13 =
            FUNC_2(VAR_3) | FUNC_1(VAR_12) | FUNC_0(1);
    }

    FUNC_13(FUNC_3(), VAR_0);

    VAR_16 = FUNC_7(FUNC_3(), VAR_9, VAR_13, VAR_10,
        VAR_5, VAR_14, VAR_15);
    FUNC_6(FUNC_3(), VAR_9);
    FUNC_6(FUNC_3(), VAR_10);

    FUNC_13(FUNC_3(), VAR_2);


    if (!VAR_6) return 0;

    VAR_6 = VAR_1;


    if (!VAR_16) return 1;


    if (FUNC_4(VAR_13) == 0) {
        double VAR_18[128];
        for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
            VAR_18[VAR_8] = 0.5f;
        FUNC_10(FUNC_3(), VAR_16, VAR_18, VAR_17, 1);
    }
    else {
        cmsUInt8Number VAR_19[128];
        for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
            VAR_19[VAR_8] = 128;
        FUNC_10(FUNC_3(), VAR_16, VAR_19, VAR_17, 1);
    }
    FUNC_9(FUNC_3(), VAR_16);

    return 0;
}
