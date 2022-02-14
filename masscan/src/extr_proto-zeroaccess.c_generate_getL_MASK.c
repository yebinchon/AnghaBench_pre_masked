
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static unsigned
FUNC_4(unsigned char *VAR_0, size_t VAR_1, unsigned VAR_2)
{
    unsigned char VAR_3[16];
    unsigned VAR_4;

    if (VAR_1 < 16)
        return 0;
    FUNC_2(VAR_3, 0, 16);

    FUNC_1(&VAR_3[4], "Lteg", 4);

    VAR_3[12] = (unsigned char)(VAR_2>>24);
    VAR_3[13] = (unsigned char)(VAR_2>>16);
    VAR_3[14] = (unsigned char)(VAR_2>> 8);
    VAR_3[15] = (unsigned char)(VAR_2>> 0);

    VAR_4 = FUNC_0(VAR_3, 16);
    VAR_3[3] = (unsigned char)(VAR_4>>24);
    VAR_3[2] = (unsigned char)(VAR_4>>16);
    VAR_3[1] = (unsigned char)(VAR_4>> 8);
    VAR_3[0] = (unsigned char)(VAR_4>> 0);

    FUNC_3(VAR_3, 16, VAR_0, 16);

    return 16;
}
