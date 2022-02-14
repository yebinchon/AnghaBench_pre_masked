
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (char*,unsigned int,char*) ;
 int FUNC_1 (unsigned char*,int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(SSL *VAR_0, const char *VAR_1,
                                      char *VAR_2, unsigned int VAR_3,
                                      unsigned char *VAR_4,
                                      unsigned int VAR_5)
{
    FUNC_0(VAR_2, VAR_3, "psk");

    if (VAR_5 > 20)
        VAR_5 = 20;
    FUNC_1(VAR_4, 0x5a, VAR_5);

    return VAR_5;
}
