
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsHTRANSFORM VAR_1, cmsInt32Number VAR_2)
{
    cmsInt32Number VAR_3, VAR_4, VAR_5;
    cmsUInt16Number VAR_6[VAR_0], VAR_7[VAR_0];

    VAR_3=0;
    for (VAR_5=0; VAR_5 < 0xFFFF; VAR_5++) {

        for (VAR_4=0; VAR_4 < VAR_2; VAR_4++) VAR_6[VAR_4] = (cmsUInt16Number) VAR_5;

        FUNC_3(FUNC_0(), VAR_1, VAR_6, VAR_7, 1);

        for (VAR_4=0; VAR_4 < VAR_2; VAR_4++) {

           cmsInt32Number VAR_8 = FUNC_2(VAR_7[VAR_4] - VAR_5);
           if (VAR_8 > VAR_3) VAR_3 = VAR_8;

        }



    if (VAR_3 > 0x200) {

        FUNC_1("Differences too big (%x)", VAR_3);
        return 0;
    }
    }

    return 1;
}
