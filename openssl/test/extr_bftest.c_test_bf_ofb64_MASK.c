
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_LONG ;
typedef int BF_KEY ;


 int FUNC_0 (unsigned char*,unsigned char*,int,int *,unsigned char*,int*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (unsigned char*,int,int *,int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int * VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
    unsigned char VAR_4[40], VAR_5[40], VAR_6[8];
    int VAR_7, VAR_8 = 1;
    BF_KEY VAR_9;
    BF_LONG VAR_10;

    VAR_10 = FUNC_5(VAR_0) + 1;

    FUNC_1(&VAR_9, 16, VAR_2);
    FUNC_4(VAR_4, 0, 40);
    FUNC_4(VAR_5, 0, 40);
    FUNC_3(VAR_6, VAR_1, 8);
    VAR_7 = 0;
    FUNC_0((unsigned char *)VAR_0, VAR_5, (long)13, &VAR_9, VAR_6,
                     &VAR_7);
    FUNC_0((unsigned char *)&(VAR_0[13]), &(VAR_5[13]),
                     VAR_10 - 13, &VAR_9, VAR_6, &VAR_7);
    if (!FUNC_2(VAR_5, (int)VAR_10, VAR_3, (int)VAR_10))
        VAR_8 = 0;

    VAR_7 = 0;
    FUNC_3(VAR_6, VAR_1, 8);
    FUNC_0(VAR_5, VAR_4, 17, &VAR_9, VAR_6, &VAR_7);
    FUNC_0(&(VAR_5[17]), &(VAR_4[17]), VAR_10 - 17, &VAR_9, VAR_6, &VAR_7);
    if (!FUNC_2(VAR_4, (int)VAR_10, VAR_0, (int)VAR_10))
        VAR_8 = 0;

    return VAR_8;
}
