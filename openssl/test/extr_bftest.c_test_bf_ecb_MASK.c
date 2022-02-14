
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int *,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (unsigned char*,int ,unsigned char*,int ) ;
 unsigned char** VAR_3 ;
 int * VAR_4 ;
 unsigned char** VAR_5 ;

__attribute__((used)) static int FUNC_3(int VAR_6)
{
    int VAR_7 = 1;
    BF_KEY VAR_8;
    unsigned char VAR_9[8];

    FUNC_1(&VAR_8, 8, VAR_4[VAR_6]);

    FUNC_0(&(VAR_5[VAR_6][0]), VAR_9, &VAR_8, VAR_2);
    if (!FUNC_2(&(VAR_3[VAR_6][0]), VAR_0, VAR_9, VAR_0))
        VAR_7 = 0;

    FUNC_0(VAR_9, VAR_9, &VAR_8, VAR_1);
    if (!FUNC_2(&(VAR_5[VAR_6][0]), VAR_0, VAR_9, VAR_0))
        VAR_7 = 0;

    return VAR_7;
}
