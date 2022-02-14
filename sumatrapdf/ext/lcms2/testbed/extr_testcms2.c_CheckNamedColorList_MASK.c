
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsNAMEDCOLORLIST ;
typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int ,int,char*,char*) ;
 int FUNC_3 (int ,int *,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,char*) ;
 int FUNC_8 (int ,int *,int,char*,int *,int *,scalar_t__*,scalar_t__*) ;
 int * FUNC_9 (int ,char*,char*) ;
 scalar_t__ FUNC_10 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_15(void)
{
    cmsNAMEDCOLORLIST* VAR_3 = ((void*)0), *VAR_4;
    cmsInt32Number VAR_5, VAR_6, VAR_7=1;
    char VAR_8[VAR_1];
    cmsUInt16Number VAR_9[3];
    cmsUInt16Number VAR_10[VAR_0];
    char VAR_11[VAR_1];
    cmsUInt16Number VAR_12[3];
    cmsUInt16Number VAR_13[VAR_0];
    cmsHPROFILE VAR_14;

    VAR_3 = FUNC_2(FUNC_0(), 0, 4, "prefix", "suffix");
    if (VAR_3 == ((void*)0)) return 0;

    for (VAR_5=0; VAR_5 < 4096; VAR_5++) {


        VAR_9[0] = VAR_9[1] = VAR_9[2] = (cmsUInt16Number) VAR_5;
        VAR_10[0] = VAR_10[1] = VAR_10[2] = VAR_10[3] = (cmsUInt16Number) (4096 - VAR_5);

        FUNC_13(VAR_8, "#%d", VAR_5);
        if (!FUNC_3(FUNC_0(), VAR_3, VAR_8, VAR_9, VAR_10)) { VAR_7 = 0; break; }
    }

    for (VAR_5=0; VAR_5 < 4096; VAR_5++) {

        VAR_12[0] = VAR_12[1] = VAR_12[2] = (cmsUInt16Number) VAR_5;
        VAR_13[0] = VAR_13[1] = VAR_13[2] = VAR_13[3] = (cmsUInt16Number) (4096 - VAR_5);

        FUNC_13(VAR_11, "#%d", VAR_5);
        if (!FUNC_8(FUNC_0(), VAR_3, VAR_5, VAR_8, ((void*)0), ((void*)0), VAR_9, VAR_10)) { VAR_7 = 0; goto Error; }


        for (VAR_6=0; VAR_6 < 3; VAR_6++) {
            if (VAR_12[VAR_6] != VAR_9[VAR_6]) { VAR_7 = 0; FUNC_1("Invalid PCS"); goto Error; }
        }

        for (VAR_6=0; VAR_6 < 4; VAR_6++) {
            if (VAR_13[VAR_6] != VAR_10[VAR_6]) { VAR_7 = 0; FUNC_1("Invalid Colorant"); goto Error; };
        }

        if (FUNC_14(VAR_8, VAR_11) != 0) {VAR_7 = 0; FUNC_1("Invalid Name"); goto Error; };
    }

    VAR_14 = FUNC_9(FUNC_0(), "namedcol.icc", "w");
    if (VAR_14 == ((void*)0)) return 0;
    if (!FUNC_11(FUNC_0(), VAR_14, VAR_2, VAR_3)) return 0;
    FUNC_4(FUNC_0(), VAR_14);
    FUNC_5(FUNC_0(), VAR_3);
    VAR_3 = ((void*)0);

    VAR_14 = FUNC_9(FUNC_0(), "namedcol.icc", "r");
    VAR_4 = (cmsNAMEDCOLORLIST *) FUNC_10(FUNC_0(), VAR_14, VAR_2);

    if (FUNC_6(FUNC_0(), VAR_4) != 4096) { VAR_7 = 0; FUNC_1("Invalid count"); goto Error; }

    VAR_5 = FUNC_7(FUNC_0(), VAR_4, "#123");
    if (VAR_5 != 123) { VAR_7 = 0; FUNC_1("Invalid index"); goto Error; }


    for (VAR_5=0; VAR_5 < 4096; VAR_5++) {

        VAR_12[0] = VAR_12[1] = VAR_12[2] = (cmsUInt16Number) VAR_5;
        VAR_13[0] = VAR_13[1] = VAR_13[2] = VAR_13[3] = (cmsUInt16Number) (4096 - VAR_5);

        FUNC_13(VAR_11, "#%d", VAR_5);
        if (!FUNC_8(FUNC_0(), VAR_4, VAR_5, VAR_8, ((void*)0), ((void*)0), VAR_9, VAR_10)) { VAR_7 = 0; goto Error; }


        for (VAR_6=0; VAR_6 < 3; VAR_6++) {
            if (VAR_12[VAR_6] != VAR_9[VAR_6]) { VAR_7 = 0; FUNC_1("Invalid PCS"); goto Error; }
        }

        for (VAR_6=0; VAR_6 < 4; VAR_6++) {
            if (VAR_13[VAR_6] != VAR_10[VAR_6]) { VAR_7 = 0; FUNC_1("Invalid Colorant"); goto Error; };
        }

        if (FUNC_14(VAR_8, VAR_11) != 0) {VAR_7 = 0; FUNC_1("Invalid Name"); goto Error; };
    }

    FUNC_4(FUNC_0(), VAR_14);
    FUNC_12("namedcol.icc");

Error:
    if (VAR_3 != ((void*)0)) FUNC_5(FUNC_0(), VAR_3);
    return VAR_7;
}
