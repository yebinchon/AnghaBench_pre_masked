
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_LONG ;
typedef int BF_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int,int *,unsigned char*,int*,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (unsigned char*,int,int *,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
    unsigned char VAR_6[40], VAR_7[40], VAR_8[8];
    int VAR_9, VAR_10 = 1;
    BF_KEY VAR_11;
    BF_LONG VAR_12;

    VAR_12 = FUNC_5(VAR_2) + 1;

    FUNC_1(&VAR_11, 16, VAR_4);
    FUNC_4(VAR_6, 0, 40);
    FUNC_4(VAR_7, 0, 40);
    FUNC_3(VAR_8, VAR_3, 8);
    VAR_9 = 0;
    FUNC_0((unsigned char *)VAR_2, VAR_7, (long)13,
                     &VAR_11, VAR_8, &VAR_9, VAR_1);
    FUNC_0((unsigned char *)&(VAR_2[13]), &(VAR_7[13]),
                     VAR_12 - 13, &VAR_11, VAR_8, &VAR_9, VAR_1);
    if (!FUNC_2(VAR_7, (int)VAR_12, VAR_5, (int)VAR_12))
        VAR_10 = 0;

    VAR_9 = 0;
    FUNC_3(VAR_8, VAR_3, 8);
    FUNC_0(VAR_7, VAR_6, 17, &VAR_11, VAR_8, &VAR_9, VAR_0);
    FUNC_0(&(VAR_7[17]), &(VAR_6[17]), VAR_12 - 17,
                     &VAR_11, VAR_8, &VAR_9, VAR_0);
    if (!FUNC_2(VAR_6, (int)VAR_12, VAR_2, (int)VAR_12))
        VAR_10 = 0;

    return VAR_10;
}
