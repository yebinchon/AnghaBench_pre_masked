
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char SeafileCrypt ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char const*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,char*,int) ;
 int FUNC_3 (char*) ;
 unsigned char* FUNC_4 (int,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_5 (char**,int*,char*,int,unsigned char*) ;
 int FUNC_6 (char const*,int ,int,char const*,unsigned char*,unsigned char*) ;
 int FUNC_7 (char**,int*,char*,int,unsigned char*) ;
 int FUNC_8 (char const*) ;

int
FUNC_9 (const char *VAR_0, const char *VAR_1,
                           const char *VAR_2, char *VAR_3,
                           int VAR_4, const char *VAR_5)
{
    unsigned char VAR_6[32], VAR_7[16];
    unsigned char VAR_8[48], *VAR_9, *VAR_10;
    int VAR_11, VAR_12;
    SeafileCrypt *VAR_13;


    FUNC_6 (VAR_0, FUNC_8(VAR_0), VAR_4,
                        VAR_5, VAR_6, VAR_7);

    FUNC_1 (VAR_1, VAR_8, 48);

    VAR_13 = FUNC_4 (VAR_4, VAR_6, VAR_7);
    if (FUNC_5 ((char **)&VAR_9, &VAR_11,
                         (char *)VAR_8, 48,
                         VAR_13) < 0) {
        FUNC_3 ("Failed to decrypt random key.\n");
        FUNC_0 (VAR_13);
        return -1;
    }
    FUNC_0 (VAR_13);


    FUNC_6 (VAR_2, FUNC_8(VAR_2), VAR_4,
                        VAR_5, VAR_6, VAR_7);
    VAR_13 = FUNC_4 (VAR_4, VAR_6, VAR_7);

    FUNC_7 ((char **)&VAR_10, &VAR_12,
                     (char *)VAR_9, VAR_11, VAR_13);

    FUNC_2 (VAR_10, VAR_3, 48);

    FUNC_0 (VAR_9);
    FUNC_0 (VAR_10);
    FUNC_0 (VAR_13);

    return 0;
}
