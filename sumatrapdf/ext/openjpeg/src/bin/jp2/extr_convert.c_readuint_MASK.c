
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,int,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(FILE * VAR_1, int VAR_2)
{
    unsigned char VAR_3, VAR_4, VAR_5, VAR_6;
    if (!FUNC_1(&VAR_3, 1, 1, VAR_1)) {
        FUNC_0(VAR_0,
                "\nError: fread return a number of element different from the expected.\n");
        return 0;
    }
    if (!FUNC_1(&VAR_4, 1, 1, VAR_1)) {
        FUNC_0(VAR_0,
                "\nError: fread return a number of element different from the expected.\n");
        return 0;
    }
    if (!FUNC_1(&VAR_5, 1, 1, VAR_1)) {
        FUNC_0(VAR_0,
                "\nError: fread return a number of element different from the expected.\n");
        return 0;
    }
    if (!FUNC_1(&VAR_6, 1, 1, VAR_1)) {
        FUNC_0(VAR_0,
                "\nError: fread return a number of element different from the expected.\n");
        return 0;
    }
    if (VAR_2) {
        return (unsigned int)(VAR_3 << 24) + (unsigned int)(VAR_4 << 16) + (unsigned int)(
                   VAR_5 << 8) + VAR_6;
    } else {
        return (unsigned int)(VAR_6 << 24) + (unsigned int)(VAR_5 << 16) + (unsigned int)(
                   VAR_4 << 8) + VAR_3;
    }
}
