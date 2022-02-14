
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ARGB ;


 int FUNC_0 (int,int ) ;
 unsigned char FUNC_1 (int ,int) ;

__attribute__((used)) static ARGB FUNC_2(ARGB VAR_0, int VAR_1[5][5])
{
    int VAR_2[5], VAR_3[4];
    int VAR_4, VAR_5;
    unsigned char VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_2[0] = ((VAR_0 >> 16) & 0xff);
    VAR_2[1] = ((VAR_0 >> 8) & 0xff);
    VAR_2[2] = (VAR_0 & 0xff);
    VAR_2[3] = ((VAR_0 >> 24) & 0xff);
    VAR_2[4] = 255;

    for (VAR_4=0; VAR_4<4; VAR_4++)
    {
        VAR_3[VAR_4] = 0;

        for (VAR_5=0; VAR_5<5; VAR_5++)
            VAR_3[VAR_4] += VAR_1[VAR_5][VAR_4] * VAR_2[VAR_5];
    }

    VAR_6 = FUNC_1(FUNC_0(VAR_3[3] / 256, 0), 255);
    VAR_7 = FUNC_1(FUNC_0(VAR_3[0] / 256, 0), 255);
    VAR_8 = FUNC_1(FUNC_0(VAR_3[1] / 256, 0), 255);
    VAR_9 = FUNC_1(FUNC_0(VAR_3[2] / 256, 0), 255);

    return (VAR_6 << 24) | (VAR_7 << 16) | (VAR_8 << 8) | VAR_9;
}
