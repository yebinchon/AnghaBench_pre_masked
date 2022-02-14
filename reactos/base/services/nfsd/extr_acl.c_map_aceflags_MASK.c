
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_1(BYTE VAR_11, uint32_t *VAR_12)
{
    if (VAR_11 & VAR_10)
        *VAR_12 |= VAR_1;
    if (VAR_11 & VAR_6)
        *VAR_12 |= VAR_0;
    if (VAR_11 & VAR_9)
        *VAR_12 |= VAR_4;
    if (VAR_11 & VAR_8)
        *VAR_12 |= VAR_3;
    if (VAR_11 & VAR_7)
        *VAR_12 |= VAR_2;
    FUNC_0(VAR_5, "ACE FLAGS: %x nfs4 aceflags %x\n",
            VAR_11, *VAR_12);
}
