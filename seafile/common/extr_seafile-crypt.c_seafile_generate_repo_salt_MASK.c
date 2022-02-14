
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int repo_salt_bin ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,char*,int) ;
 int FUNC_3 (char*) ;

int
FUNC_4 (char *VAR_1)
{
    unsigned char VAR_2[32];




    int VAR_3 = FUNC_0 (VAR_2, sizeof(VAR_2));

    if (VAR_3 != 1) {
        FUNC_3 ("Failed to generate salt for repo encryption.\n");
        return -1;
    }

    FUNC_2 (VAR_2, VAR_1, 32);

    return 0;
}
