
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RC2_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int *,int ) ;
 int FUNC_1 (int *,int,int *,int ) ;
 unsigned char** VAR_2 ;
 int ** VAR_3 ;
 unsigned char** VAR_4 ;
 int FUNC_2 (unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(const int VAR_5)
{
    int VAR_6 = 1;
    RC2_KEY VAR_7;
    unsigned char VAR_8[8], VAR_9[8];

    FUNC_1(&VAR_7, 16, &(VAR_3[VAR_5][0]), 0 );

    FUNC_0(&VAR_4[VAR_5][0], VAR_8, &VAR_7, VAR_1);
    if (!FUNC_2(&VAR_2[VAR_5][0], 8, VAR_8, 8))
        VAR_6 = 0;

    FUNC_0(VAR_8, VAR_9, &VAR_7, VAR_0);
    if (!FUNC_2(&VAR_4[VAR_5][0], 8, VAR_9, 8))
        VAR_6 = 0;

    return VAR_6;
}
