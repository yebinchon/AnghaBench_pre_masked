
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt8Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int Inw ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__*,int,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_5(cmsHTRANSFORM VAR_1, cmsInt32Number VAR_2)
{
    cmsInt32Number VAR_3, VAR_4, VAR_5;
    cmsUInt8Number VAR_6[VAR_0], VAR_7[VAR_0];

    VAR_3=0;

    for (VAR_5=0; VAR_5 < 0xFF; VAR_5++) {

        FUNC_4(VAR_6, VAR_5, sizeof(VAR_6));
        FUNC_3(FUNC_0(), VAR_1, VAR_6, VAR_7, 1);

        for (VAR_4=0; VAR_4 < VAR_2; VAR_4++) {

           cmsInt32Number VAR_8 = FUNC_2(VAR_7[VAR_4] - VAR_5);
           if (VAR_8 > VAR_3) VAR_3 = VAR_8;

        }
    }


    if (VAR_3 > 2) {

        FUNC_1("Differences too big (%x)", VAR_3);
        return 0;
    }

    return 1;
}
