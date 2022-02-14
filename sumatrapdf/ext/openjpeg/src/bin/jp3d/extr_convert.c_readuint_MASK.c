
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (unsigned char*,int,int,int *) ;

unsigned int FUNC_1(FILE * VAR_0, int VAR_1)
{
    unsigned char VAR_2, VAR_3, VAR_4, VAR_5;
    FUNC_0(&VAR_2, 1, 1, VAR_0);
    FUNC_0(&VAR_3, 1, 1, VAR_0);
    FUNC_0(&VAR_4, 1, 1, VAR_0);
    FUNC_0(&VAR_5, 1, 1, VAR_0);
    if (VAR_1) {
        return (VAR_2 << 24) + (VAR_3 << 16) + (VAR_4 << 8) + VAR_5;
    } else {
        return (VAR_5 << 24) + (VAR_4 << 16) + (VAR_3 << 8) + VAR_2;
    }
}
