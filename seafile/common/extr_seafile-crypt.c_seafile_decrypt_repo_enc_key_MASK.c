
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char SeafileCrypt ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char const*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (char*) ;
 unsigned char* FUNC_4 (int,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_5 (char**,int*,char*,int,unsigned char*) ;
 int FUNC_6 (char const*,int,int,char const*,unsigned char*,unsigned char*) ;
 int FUNC_7 (char const*) ;

int
FUNC_8 (int VAR_0,
                              const char *VAR_1, const char *VAR_2,
                              const char *VAR_3,
                              unsigned char *VAR_4, unsigned char *VAR_5)
{
    unsigned char VAR_6[32], VAR_7[16];

    FUNC_6 (VAR_1, FUNC_7(VAR_1), VAR_0, VAR_3, VAR_6, VAR_7);

    if (VAR_0 == 1) {
        FUNC_2 (VAR_4, VAR_6, 16);
        FUNC_2 (VAR_5, VAR_7, 16);
        return 0;
    } else if (VAR_0 >= 2) {
        unsigned char VAR_8[48], *VAR_9;
        int VAR_10;
        SeafileCrypt *VAR_11;

        if (VAR_2 == ((void*)0) || VAR_2[0] == 0) {
            FUNC_3 ("Empty random key.\n");
            return -1;
        }

        FUNC_1 (VAR_2, VAR_8, 48);

        VAR_11 = FUNC_4 (VAR_0, VAR_6, VAR_7);
        if (FUNC_5 ((char **)&VAR_9, &VAR_10,
                             (char *)VAR_8, 48,
                             VAR_11) < 0) {
            FUNC_3 ("Failed to decrypt random key.\n");
            FUNC_0 (VAR_11);
            return -1;
        }
        FUNC_0 (VAR_11);

        FUNC_6 ((char *)VAR_9, 32, VAR_0,
                            VAR_3,
                            VAR_6, VAR_7);
        FUNC_2 (VAR_4, VAR_6, 32);
        FUNC_2 (VAR_5, VAR_7, 16);

        FUNC_0 (VAR_9);
        return 0;
    }

    return -1;
}
