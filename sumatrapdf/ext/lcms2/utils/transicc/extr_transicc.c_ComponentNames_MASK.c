
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsNAMEDCOLORLIST ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
typedef int cmsBool ;


 int FUNC_0 (int,int ) ;
 int * FUNC_1 (int ,int,int ,char*,char*) ;
 int FUNC_2 (int ,int *,char*,int *,int *) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static
cmsNAMEDCOLORLIST* FUNC_5(cmsContext VAR_2, cmsColorSpaceSignature VAR_3, cmsBool VAR_4)
{
    cmsNAMEDCOLORLIST* VAR_5;
    int VAR_6, VAR_7;
    char VAR_8[VAR_1];

    VAR_5 = FUNC_1(0, 12, VAR_0, "", "");
    if (VAR_5 == ((void*)0)) return ((void*)0);

    switch (VAR_3) {

    case 130:
        FUNC_0(100, VAR_4);
        FUNC_2(VAR_2, VAR_5, "X", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "Y", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "Z", ((void*)0), ((void*)0));
        break;

    case 133:
        FUNC_0(1, VAR_4);
        FUNC_2(VAR_2, VAR_5, "L*", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "a*", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "b*", ((void*)0), ((void*)0));
        break;

    case 132:
        FUNC_0(1, VAR_4);
        FUNC_2(VAR_2, VAR_5, "L", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "u", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "v", ((void*)0), ((void*)0));
        break;

    case 129:
        FUNC_0(255, VAR_4);
        FUNC_2(VAR_2, VAR_5, "Y", ((void*)0), ((void*)0) );
        FUNC_2(VAR_2, VAR_5, "Cb", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "Cr", ((void*)0), ((void*)0));
        break;


    case 128:
        FUNC_0(1, VAR_4);
        FUNC_2(VAR_2, VAR_5, "Y", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "x", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "y", ((void*)0), ((void*)0));
        break;

    case 131:
        FUNC_0(255, VAR_4);
        FUNC_2(VAR_2, VAR_5, "R", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "G", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "B", ((void*)0), ((void*)0));
        break;

    case 136:
        FUNC_0(255, VAR_4);
        FUNC_2(VAR_2, VAR_5, "G", ((void*)0), ((void*)0));
        break;

    case 134:
        FUNC_0(255, VAR_4);
        FUNC_2(VAR_2, VAR_5, "H", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "s", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "v", ((void*)0), ((void*)0));
        break;

    case 135:
        FUNC_0(255, VAR_4);
        FUNC_2(VAR_2, VAR_5, "H", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "l", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "s", ((void*)0), ((void*)0));
        break;

    case 137:
        FUNC_0(1, VAR_4);
        FUNC_2(VAR_2, VAR_5, "C", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "M", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "Y", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "K", ((void*)0), ((void*)0));
        break;

    case 138:
        FUNC_0(1, VAR_4);
        FUNC_2(VAR_2, VAR_5, "C", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "M", ((void*)0), ((void*)0));
        FUNC_2(VAR_2, VAR_5, "Y", ((void*)0), ((void*)0));
        break;

    default:

        FUNC_0(1, VAR_4);

        VAR_7 = FUNC_3(VAR_2, VAR_3);

        for (VAR_6=0; VAR_6 < VAR_7; VAR_6++) {

            FUNC_4(VAR_8, "Channel #%d", VAR_6 + 1);
            FUNC_2(VAR_2, VAR_5, VAR_8, ((void*)0), ((void*)0));
        }
    }

    return VAR_5;

}
