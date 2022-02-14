
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static unsigned int FUNC_3(SSL *VAR_2, const char *VAR_3,
                                        unsigned char *VAR_4,
                                        unsigned int VAR_5)
{
    unsigned int VAR_6 = 0;

    if (FUNC_2(VAR_3, "Client_identity") != 0) {
        FUNC_0(VAR_0, "server: PSK error: client identity not found\n");
        return 0;
    }
    VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5);
    return VAR_6;
}
