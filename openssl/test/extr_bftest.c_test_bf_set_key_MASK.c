
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_KEY ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int *,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (unsigned char*,int,int *,int) ;
 int VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
    int VAR_5 = 1;
    BF_KEY VAR_6;
    unsigned char VAR_7[8];

    FUNC_1(&VAR_6, VAR_4+1, VAR_3);
    FUNC_0(VAR_1, VAR_7, &VAR_6, VAR_0);

    if (!FUNC_2(VAR_7, 8, &(VAR_2[VAR_4][0]), 8))
        VAR_5 = 0;

    return VAR_5;
}
