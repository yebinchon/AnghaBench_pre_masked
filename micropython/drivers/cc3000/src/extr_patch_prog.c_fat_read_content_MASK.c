
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned short VAR_7 ;
 unsigned char FUNC_0 (int,int,int,unsigned char*) ;

__attribute__((used)) static unsigned char __attribute__ ((unused))
FUNC_1(unsigned char *VAR_8, unsigned char *VAR_9,
        unsigned char *VAR_10, unsigned short *VAR_11, unsigned short *VAR_12)
{
    unsigned short VAR_13;
    unsigned char VAR_14;
    unsigned char VAR_15[48];
    unsigned char* VAR_16 = VAR_15;




    for (VAR_13 = 0; VAR_13 < 6; VAR_13++)
    {
        VAR_14 = FUNC_0(16, 8, 4 + 8*VAR_13, VAR_16);
        VAR_16 += 8;
    }

    VAR_16 = VAR_15;

    for (VAR_13 = 0; VAR_13 <= VAR_7; VAR_13++)
    {
        *VAR_8++ = (*VAR_16) & VAR_0;
        *VAR_9++ = ((*VAR_16) & VAR_1) >> 1;
        *VAR_10++ = ((*VAR_16) & VAR_2) >> 2;
        *VAR_11++ = ((*(VAR_16+1)<<8) | (*VAR_16)) & (VAR_3|VAR_4|VAR_5|VAR_6);
        *VAR_12++ = ((*(VAR_16+3)<<8) | (*(VAR_16+2))) & (VAR_3|VAR_4|VAR_5|VAR_6);




        VAR_16 += 4;
    }

    return VAR_14;
}
