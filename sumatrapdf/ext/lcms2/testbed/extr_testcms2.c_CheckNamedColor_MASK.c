
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsTagSignature ;
typedef int cmsNAMEDCOLORLIST ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;
typedef int cmsBool ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int ,int,char*,char*) ;
 int FUNC_3 (int ,int *,char*,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int FUNC_5 (int ,int *,int,char*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_10(cmsInt32Number VAR_1, cmsHPROFILE VAR_2, cmsTagSignature VAR_3, cmsInt32Number VAR_4, cmsBool VAR_5)
{
    cmsNAMEDCOLORLIST* VAR_6;
    cmsInt32Number VAR_7, VAR_8, VAR_9;
    char VAR_10[255];
    cmsUInt16Number VAR_11[3];
    cmsUInt16Number VAR_12[VAR_0];
    char VAR_13[255];
    cmsUInt16Number VAR_14[3];
    cmsUInt16Number VAR_15[VAR_0];

    switch (VAR_1) {

    case 1:

        VAR_6 = FUNC_2(FUNC_0(), 0, 4, "prefix", "suffix");
        if (VAR_6 == ((void*)0)) return 0;

        for (VAR_7=0; VAR_7 < VAR_4; VAR_7++) {

            VAR_11[0] = VAR_11[1] = VAR_11[2] = (cmsUInt16Number) VAR_7;
            VAR_12[0] = VAR_12[1] = VAR_12[2] = VAR_12[3] = (cmsUInt16Number) (VAR_4 - VAR_7);

            FUNC_8(VAR_10, "#%d", VAR_7);
            if (!FUNC_3(FUNC_0(), VAR_6, VAR_10, VAR_11, VAR_12)) { FUNC_1("Couldn't append named color"); return 0; }
        }

        VAR_9 = FUNC_7(FUNC_0(), VAR_2, VAR_3, VAR_6);
        FUNC_4(FUNC_0(), VAR_6);
        return VAR_9;

    case 2:

        VAR_6 = (cmsNAMEDCOLORLIST *) FUNC_6(FUNC_0(), VAR_2, VAR_3);
        if (VAR_6 == ((void*)0)) return 0;

        for (VAR_7=0; VAR_7 < VAR_4; VAR_7++) {

            VAR_14[0] = VAR_14[1] = VAR_14[2] = (cmsUInt16Number) VAR_7;
            VAR_15[0] = VAR_15[1] = VAR_15[2] = VAR_15[3] = (cmsUInt16Number) (VAR_4 - VAR_7);

            FUNC_8(VAR_13, "#%d", VAR_7);
            if (!FUNC_5(FUNC_0(), VAR_6, VAR_7, VAR_10, ((void*)0), ((void*)0), VAR_11, VAR_12)) { FUNC_1("Invalid string"); return 0; }


            for (VAR_8=0; VAR_8 < 3; VAR_8++) {
                if (VAR_14[VAR_8] != VAR_11[VAR_8]) { FUNC_1("Invalid PCS"); return 0; }
            }


            if (VAR_5) {

            for (VAR_8=0; VAR_8 < 4; VAR_8++) {
                if (VAR_15[VAR_8] != VAR_12[VAR_8]) { FUNC_1("Invalid Colorant"); return 0; };
            }
            }

            if (FUNC_9(VAR_10, VAR_13) != 0) { FUNC_1("Invalid Name"); return 0; };
        }
        return 1;


    default: return 0;
    }
}
