
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_LONG ;
typedef int BF_KEY ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,unsigned char*) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int ** VAR_1 ;
 scalar_t__* VAR_2 ;
 int ** VAR_3 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(int VAR_4)
{
    int VAR_5 = 1;
    BF_KEY VAR_6;
    BF_LONG VAR_7[2];

    FUNC_2(&VAR_6, FUNC_4(VAR_2[VAR_4]), (unsigned char *)VAR_2[VAR_4]);

    VAR_7[0] = VAR_3[VAR_4][0];
    VAR_7[1] = VAR_3[VAR_4][1];
    FUNC_1(VAR_7, &VAR_6);
    if (!FUNC_3(&(VAR_1[VAR_4][0]), VAR_0, &(VAR_7[0]), VAR_0))
        VAR_5 = 0;

    FUNC_0(&(VAR_7[0]), &VAR_6);
    if (!FUNC_3(&(VAR_3[VAR_4][0]), VAR_0, &(VAR_7[0]), VAR_0))
        VAR_5 = 0;

    return VAR_5;
}
