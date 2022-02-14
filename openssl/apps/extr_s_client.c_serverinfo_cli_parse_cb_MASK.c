
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_name ;
typedef int SSL ;


 int FUNC_0 (char*,int,char*,unsigned int) ;
 int FUNC_1 (int ,char*,char*,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_1, unsigned int VAR_2,
                                   const unsigned char *VAR_3, size_t VAR_4,
                                   int *VAR_5, void *VAR_6)
{
    char VAR_7[100];
    unsigned char VAR_8[4 + 65536];


    VAR_4 &= 0xffff;
    VAR_8[0] = (unsigned char)(VAR_2 >> 8);
    VAR_8[1] = (unsigned char)(VAR_2);
    VAR_8[2] = (unsigned char)(VAR_4 >> 8);
    VAR_8[3] = (unsigned char)(VAR_4);
    FUNC_2(VAR_8 + 4, VAR_3, VAR_4);

    FUNC_0(VAR_7, sizeof(VAR_7), "SERVERINFO FOR EXTENSION %d",
                 VAR_2);
    FUNC_1(VAR_0, VAR_7, "", VAR_8, 4 + VAR_4);
    return 1;
}
