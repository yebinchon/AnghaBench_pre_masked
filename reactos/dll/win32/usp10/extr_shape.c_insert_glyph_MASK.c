
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int INT ;


 int FUNC_0 (int,int,int,int,int *) ;

__attribute__((used)) static void FUNC_1(WORD *VAR_0, INT *VAR_1, INT VAR_2, INT VAR_3, WORD VAR_4, INT VAR_5, WORD *VAR_6)
{
    int VAR_7;
    for (VAR_7 = *VAR_1; VAR_7>=VAR_5; VAR_7--)
        VAR_0[VAR_7+1] = VAR_0[VAR_7];
    VAR_0[VAR_5] = VAR_4;
    *VAR_1 = *VAR_1+1;
    if (VAR_3 < 0)
        FUNC_0(VAR_5-3, 1, VAR_3, VAR_2, VAR_6);
    else
        FUNC_0(VAR_5, 1, VAR_3, VAR_2, VAR_6);
}
