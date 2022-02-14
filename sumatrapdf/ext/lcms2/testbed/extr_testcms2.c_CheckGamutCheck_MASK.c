
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int ,int *,int ,int *,int ,int ,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,int*) ;

__attribute__((used)) static
cmsInt32Number FUNC_11(void)
{
        cmsHPROFILE VAR_4, VAR_5;
        cmsHTRANSFORM VAR_6;
        cmsInt32Number VAR_7;
        cmsUInt16Number VAR_8[16] = { 0xDEAD, 0xBABE, 0xFACE };


        FUNC_10(FUNC_3(), VAR_8);


        VAR_4 = FUNC_8(FUNC_3());
        VAR_5 = FUNC_2();

        if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) return 0;

        FUNC_5("Gamut check on floating point");


        VAR_6 = FUNC_7(FUNC_3(), VAR_5, VAR_2, VAR_5, VAR_2, VAR_5,
                                VAR_0, VAR_0, VAR_3);


        if (!FUNC_1(VAR_6, 3)) {
            FUNC_6(FUNC_3(), VAR_4);
            FUNC_6(FUNC_3(), VAR_5);
            FUNC_9(FUNC_3(), VAR_6);
            FUNC_4("Gamut check on same profile failed");
            return 0;
        }

        FUNC_9(FUNC_3(), VAR_6);

        FUNC_5("Gamut check on 16 bits");

        VAR_6 = FUNC_7(FUNC_3(), VAR_5, VAR_1, VAR_5, VAR_1, VAR_4,
                                VAR_0, VAR_0, VAR_3);

        FUNC_6(FUNC_3(), VAR_4);
        FUNC_6(FUNC_3(), VAR_5);

        VAR_7 = FUNC_0(VAR_6, 3);

        FUNC_9(FUNC_3(), VAR_6);

        return VAR_7;
}
