
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;

__attribute__((used)) static int FUNC_0(const BYTE *VAR_8)
{

    if (VAR_8[0] == 0 && VAR_8[1] == 0 && VAR_8[2] == 1)
    {

        if (VAR_8[3] == VAR_5 ||
            VAR_8[3] == VAR_7 ||
            VAR_8[3] == VAR_0)
            return VAR_3;


        if (VAR_8[3] == VAR_6)
            return VAR_4;
    }


    if(VAR_8[0] == 0xff && ((VAR_8[1]>>5)&0x7) == 0x7 &&
       ((VAR_8[1]>>1)&0x3) != 0 && ((VAR_8[2]>>4)&0xf) != 0xf &&
       ((VAR_8[2]>>2)&0x3) != 0x3)
        return VAR_1;


    return VAR_2;
}
