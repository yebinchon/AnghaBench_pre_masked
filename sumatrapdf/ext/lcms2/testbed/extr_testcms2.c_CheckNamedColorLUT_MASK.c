
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsPipeline ;
typedef int cmsNAMEDCOLORLIST ;
typedef int cmsInt32Number ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int,int,char*,char*) ;
 int FUNC_3 (int ,int *,char*,int*,int*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int*,int*,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,int ,int ) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_10(void)
{
    cmsPipeline* VAR_3 = FUNC_5(FUNC_0(), 3, 3);
    cmsNAMEDCOLORLIST* VAR_4;
    cmsInt32Number VAR_5,VAR_6, VAR_7 = 1, VAR_8;
    cmsUInt16Number VAR_9[3];
    cmsUInt16Number VAR_10[VAR_2];
    char VAR_11[255];
    cmsUInt16Number VAR_12[3], VAR_13[3];



    VAR_4 = FUNC_2(FUNC_0(), 256, 3, "pre", "post");
    if (VAR_4 == ((void*)0)) return 0;

    for (VAR_5=0; VAR_5 < 256; VAR_5++) {

        VAR_9[0] = VAR_9[1] = VAR_9[2] = (cmsUInt16Number) VAR_5;
        VAR_10[0] = VAR_10[1] = VAR_10[2] = VAR_10[3] = (cmsUInt16Number) VAR_5;

        FUNC_9(VAR_11, "#%d", VAR_5);
        if (!FUNC_3(FUNC_0(), VAR_4, VAR_11, VAR_9, VAR_10)) { VAR_7 = 0; break; }
    }

    FUNC_8(FUNC_0(), VAR_3, VAR_1, FUNC_1(FUNC_0(), VAR_4, VAR_0));

    FUNC_4(FUNC_0(), VAR_4);
    if (VAR_7 == 0) return 0;

    VAR_8=0;

    for (VAR_6=0; VAR_6 < 256; VAR_6++) {

        VAR_12[0] = (cmsUInt16Number) VAR_6;

        FUNC_6(FUNC_0(), VAR_12, VAR_13, VAR_3);
        for (VAR_5=0; VAR_5 < 3; VAR_5++) {

            if (VAR_13[VAR_5] != VAR_6) {
                VAR_8++;
            }
        }

    }

    FUNC_7(FUNC_0(), VAR_3);
    return (VAR_8 == 0);
}
