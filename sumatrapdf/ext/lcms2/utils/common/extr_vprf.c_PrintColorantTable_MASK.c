
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsNAMEDCOLORLIST ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int,char*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static
void FUNC_5(cmsContext VAR_1, cmsHPROFILE VAR_2, cmsTagSignature VAR_3, const char* VAR_4)
{
    cmsNAMEDCOLORLIST* VAR_5;
    int VAR_6, VAR_7;

    if (FUNC_0(VAR_1, VAR_2, VAR_3)) {

        FUNC_4("%s:\n", VAR_4);

        VAR_5 = (cmsNAMEDCOLORLIST*) FUNC_3(VAR_1, VAR_2, VAR_3);
        if (VAR_5 == ((void*)0)) {
            FUNC_4("(Unavailable)\n");
            return;
        }

        VAR_7 = FUNC_1(VAR_1, VAR_5);
        for (VAR_6=0; VAR_6 < VAR_7; VAR_6++) {

            char VAR_8[VAR_0];

            FUNC_2(VAR_1, VAR_5, VAR_6, VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            FUNC_4("\t%s\n", VAR_8);
        }

        FUNC_4("\n");
    }

}
