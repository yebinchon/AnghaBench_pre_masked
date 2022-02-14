
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z_crc_t ;


 int FUNC_0 (unsigned long*,int const*,int) ;

__attribute__((used)) static void FUNC_1(const char* VAR_0,unsigned long* VAR_1,const z_crc_t* VAR_2)
{
    *(VAR_1+0) = 305419896L;
    *(VAR_1+1) = 591751049L;
    *(VAR_1+2) = 878082192L;
    while (*VAR_0 != '\0') {
        FUNC_0(VAR_1,VAR_2,(int)*VAR_0);
        VAR_0++;
    }
}
