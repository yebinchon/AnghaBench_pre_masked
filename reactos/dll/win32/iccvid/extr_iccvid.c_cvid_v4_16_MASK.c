
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * b; int * g; int * r; } ;
typedef TYPE_1__ cvid_codebook ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2, BOOL VAR_3,
    cvid_codebook *VAR_4, cvid_codebook *VAR_5, cvid_codebook *VAR_6, cvid_codebook *VAR_7)
{
unsigned short *VAR_8 = (unsigned short *)VAR_0;
int VAR_9;
cvid_codebook * VAR_10[] = {VAR_4,VAR_5,VAR_6,VAR_7};
int VAR_11, VAR_12;

    if (!VAR_3)
        VAR_9 = -VAR_2/2;
    else
        VAR_9 = VAR_2/2;


    for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
    {
        if (&VAR_8[VAR_12*VAR_9] < (unsigned short *)VAR_1) return;
        for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
            VAR_8[VAR_12*VAR_9 + VAR_11] = FUNC_0(VAR_10[VAR_11/2+(VAR_12/2)*2]->r[VAR_11%2+(VAR_12%2)*2], VAR_10[VAR_11/2+(VAR_12/2)*2]->g[VAR_11%2+(VAR_12%2)*2], VAR_10[VAR_11/2+(VAR_12/2)*2]->b[VAR_11%2+(VAR_12%2)*2]);
    }
}
