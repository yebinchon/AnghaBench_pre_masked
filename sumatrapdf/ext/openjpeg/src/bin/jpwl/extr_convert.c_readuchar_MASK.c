
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,int,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static unsigned char FUNC_2(FILE * VAR_1)
{
    unsigned char VAR_2;
    if (!FUNC_1(&VAR_2, 1, 1, VAR_1)) {
        FUNC_0(VAR_0,
                "\nError: fread return a number of element different from the expected.\n");
        return 0;
    }
    return VAR_2;
}
