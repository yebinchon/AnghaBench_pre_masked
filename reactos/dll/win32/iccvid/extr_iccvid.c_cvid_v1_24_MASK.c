
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * r; int * g; int * b; } ;
typedef TYPE_1__ cvid_codebook ;
typedef int BOOL ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2, BOOL VAR_3,
    cvid_codebook *VAR_4)
{
int VAR_5;
int VAR_6, VAR_7;

    if (!VAR_3)
        VAR_5 = -VAR_2;
    else
        VAR_5 = VAR_2;


    for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
    {
        if (&VAR_0[VAR_7*VAR_5] < VAR_1) return;
        for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
        {
            VAR_0[VAR_7*VAR_5 + VAR_6*3 + 0] = VAR_4->b[VAR_6/2+(VAR_7/2)*2];
            VAR_0[VAR_7*VAR_5 + VAR_6*3 + 1] = VAR_4->g[VAR_6/2+(VAR_7/2)*2];
            VAR_0[VAR_7*VAR_5 + VAR_6*3 + 2] = VAR_4->r[VAR_6/2+(VAR_7/2)*2];
        }
    }
}
