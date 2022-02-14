
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bit8u ;
typedef int bit32u ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int*,int,int,int ) ;
 int FUNC_2 (char*,int,int) ;

void FUNC_3 ( bit8u VAR_3 )
{
    int VAR_4;
    FUNC_0("B4Data" , (bit32u) (VAR_3 & 0xFF) );
    VAR_4 = FUNC_1( &VAR_3, sizeof(bit8u), 1, VAR_2);
    if (VAR_4 != 1)
        FUNC_2("Error in writing %X for Address 0x%8X\n", VAR_3, VAR_0);
    VAR_1 += 1;
}
