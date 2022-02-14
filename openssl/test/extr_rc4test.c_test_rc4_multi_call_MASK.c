
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obuf ;
typedef int RC4_KEY ;


 int FUNC_0 (int *,int const,int *,unsigned char*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (unsigned char*,int const,int ,int const) ;
 int ** VAR_0 ;
 int const* VAR_1 ;
 int ** VAR_2 ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_4(const int VAR_4)
{
    unsigned char VAR_5[512];
    RC4_KEY VAR_6;

    FUNC_1(&VAR_6, VAR_2[3][0], &(VAR_2[3][1]));
    FUNC_3(VAR_5, 0, sizeof(VAR_5));
    FUNC_0(&VAR_6, VAR_4, &(VAR_0[3][0]), VAR_5);
    FUNC_0(&VAR_6, VAR_1[3] - VAR_4, &(VAR_0[3][VAR_4]), &(VAR_5[VAR_4]));
    return FUNC_2(VAR_5, VAR_1[3] + 1, VAR_3[3], VAR_1[3] + 1);
}
