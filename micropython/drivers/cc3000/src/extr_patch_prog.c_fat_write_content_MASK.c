
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fatTable ;


 unsigned char VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 unsigned char FUNC_1 (int,int,int,unsigned char*) ;

__attribute__((used)) static unsigned char FUNC_2(unsigned short const *VAR_2,
                                unsigned short const *VAR_3)
{
    unsigned short VAR_4 = 0;
    unsigned char VAR_5;
    unsigned char VAR_6[48];
    unsigned char* VAR_7 = VAR_6;




    VAR_5 = FUNC_1(16, 2, 0, (unsigned char*)"LS");

    for (; VAR_4 <= VAR_1; VAR_4++)
    {



        *VAR_7++ = (unsigned char)(VAR_2[VAR_4] & 0xff) | VAR_0;




        *VAR_7++ = (unsigned char)((VAR_2[VAR_4]>>8) & 0xff);




        *VAR_7++ = (unsigned char)(VAR_3[VAR_4] & 0xff);




        *VAR_7++ = (unsigned char)((VAR_3[VAR_4]>>8) & 0xff);
    }





    VAR_5 = FUNC_1(16, 24, 4, VAR_6);
    VAR_5 = FUNC_1(16, 24, 24+4, &VAR_6[24]);




    FUNC_0(VAR_6, 0, sizeof(VAR_6));
    VAR_5 = FUNC_1(16, 16, 52, VAR_6);

    return VAR_5;
}
