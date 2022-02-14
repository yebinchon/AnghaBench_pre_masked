
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secret_key ;
typedef unsigned char SeafileCrypt ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (char*) ;
 unsigned char* FUNC_5 (int,unsigned char*,unsigned char*) ;
 int FUNC_6 (char const*,int ,int,char const*,unsigned char*,unsigned char*) ;
 int FUNC_7 (char**,int*,char*,int,unsigned char*) ;
 int FUNC_8 (char const*) ;

int
FUNC_9 (const char *VAR_1,
                             int VAR_2,
                             const char *VAR_3,
                             char *VAR_4)
{
    SeafileCrypt *VAR_5;
    unsigned char VAR_6[32], *VAR_7;
    int VAR_8;
    unsigned char VAR_9[32], VAR_10[16];







    if (FUNC_0 (VAR_6, sizeof(VAR_6)) != 1) {
        FUNC_4 ("Failed to generate secret key for repo encryption.\n");
        return -1;
    }


    FUNC_6 (VAR_1, FUNC_8(VAR_1), VAR_2, VAR_3, VAR_9, VAR_10);

    VAR_5 = FUNC_5 (VAR_2, VAR_9, VAR_10);

    FUNC_7 ((char **)&VAR_7, &VAR_8,
                     (char *)VAR_6, sizeof(VAR_6), VAR_5);

    FUNC_3 (VAR_7, VAR_4, 48);

    FUNC_1 (VAR_5);
    FUNC_1 (VAR_7);

    return 0;
}
