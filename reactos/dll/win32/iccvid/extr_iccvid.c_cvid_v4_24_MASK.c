
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * r; int * g; int * b; } ;
typedef TYPE_1__ cvid_codebook ;
typedef int BOOL ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2, BOOL VAR_3,
    cvid_codebook *VAR_4, cvid_codebook *VAR_5, cvid_codebook *VAR_6, cvid_codebook *VAR_7)
{
int VAR_8;
cvid_codebook * VAR_9[] = {VAR_4,VAR_5,VAR_6,VAR_7};
int VAR_10, VAR_11;

    if (!VAR_3)
        VAR_8 = -VAR_2;
    else
        VAR_8 = VAR_2;


    for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
    {
        if (&VAR_0[VAR_11*VAR_8] < VAR_1) return;
        for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
        {
            VAR_0[VAR_11*VAR_8 + VAR_10*3 + 0] = VAR_9[VAR_10/2+(VAR_11/2)*2]->b[VAR_10%2+(VAR_11%2)*2];
            VAR_0[VAR_11*VAR_8 + VAR_10*3 + 1] = VAR_9[VAR_10/2+(VAR_11/2)*2]->g[VAR_10%2+(VAR_11%2)*2];
            VAR_0[VAR_11*VAR_8 + VAR_10*3 + 2] = VAR_9[VAR_10/2+(VAR_11/2)*2]->r[VAR_10%2+(VAR_11%2)*2];
        }
    }
}
