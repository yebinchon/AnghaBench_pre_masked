
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,int*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_3, cmsFloat64Number VAR_4[])
{
    if (VAR_0 > 1 && VAR_2 && VAR_1) {

        cmsUInt16Number VAR_5[3], VAR_6[3];

        if (VAR_2) FUNC_0(VAR_3, VAR_2, VAR_4, VAR_5, 1);
        if (VAR_1) FUNC_0(VAR_3, VAR_1, VAR_4, VAR_6, 1);

        FUNC_1("[PCS] Lab=(0x%04X,0x%04X,0x%04X) XYZ=(0x%04X,0x%04X,0x%04X)\n", VAR_6[0], VAR_6[1], VAR_6[2],
            VAR_5[0], VAR_5[1], VAR_5[2]);

    }
}
