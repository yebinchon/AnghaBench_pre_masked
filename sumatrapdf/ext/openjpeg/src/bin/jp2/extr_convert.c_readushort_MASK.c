
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,int,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static unsigned short FUNC_2(FILE * VAR_1, int VAR_2)
{
    unsigned char VAR_3, VAR_4;
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
    if (VAR_2) {
        return (unsigned short)((VAR_3 << 8) + VAR_4);
    } else {
        return (unsigned short)((VAR_4 << 8) + VAR_3);
    }
}
