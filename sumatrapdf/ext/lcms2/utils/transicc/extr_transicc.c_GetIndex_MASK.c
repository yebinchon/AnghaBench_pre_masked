
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsNAMEDCOLORLIST ;
typedef int cmsContext ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int ,int const*,int,char*,char*,char*,int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (char*,char*,char*,char*) ;

__attribute__((used)) static
cmsUInt16Number FUNC_7(cmsContext VAR_2)
{
    char VAR_3[4096], VAR_4[VAR_0], VAR_5[40], VAR_6[40];
    int VAR_7, VAR_8;
    const cmsNAMEDCOLORLIST* VAR_9;

    VAR_9 = FUNC_3(VAR_1);
    if (VAR_9 == ((void*)0)) return 0;

    VAR_8 = FUNC_4(VAR_2, VAR_9)-1;

    FUNC_1(VAR_2, VAR_3, "Color index (0..%d)? ", VAR_8);
    VAR_7 = FUNC_2(VAR_3);

    if (VAR_7 > VAR_8)
        FUNC_0("Named color %d out of range!", VAR_7);

    FUNC_5(VAR_2, VAR_9, VAR_7, VAR_4, VAR_5, VAR_6, ((void*)0), ((void*)0));

    FUNC_6("\n%s %s %s\n", VAR_5, VAR_4, VAR_6);

    return (cmsUInt16Number) VAR_7;
}
