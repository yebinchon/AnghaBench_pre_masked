
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obuf ;
typedef int RC4_KEY ;


 int FUNC_0 (int *,int const,int *,unsigned char*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (unsigned char*,int const,int ,int const) ;
 int FUNC_3 (unsigned char,int ) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_5(const int VAR_3)
{
    unsigned char VAR_4[512];
    RC4_KEY VAR_5;

    FUNC_1(&VAR_5, VAR_1[3][0], &(VAR_1[3][1]));
    FUNC_4(VAR_4, 0, sizeof(VAR_4));
    FUNC_0(&VAR_5, VAR_3, &(VAR_0[3][0]), VAR_4);
    if (!FUNC_2(VAR_4, VAR_3, VAR_2[3], VAR_3))
        return 0;
    return FUNC_3(VAR_4[VAR_3], 0);
}
