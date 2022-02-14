
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

char *FUNC_2(const unsigned char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    char *VAR_6;

    if (VAR_3 & 1)
        return ((void*)0);
    VAR_4 = VAR_3 / 2;

    if (!VAR_3 || VAR_2[VAR_3 - 1])
        VAR_4++;
    VAR_2++;
    if ((VAR_6 = FUNC_0(VAR_4)) == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 2)
        VAR_6[VAR_5 >> 1] = VAR_2[VAR_5];
    VAR_6[VAR_4 - 1] = 0;
    return VAR_6;
}
