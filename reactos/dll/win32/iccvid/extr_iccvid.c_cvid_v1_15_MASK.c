
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * b; int * g; int * r; } ;
typedef TYPE_1__ cvid_codebook ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2, BOOL VAR_3,
    cvid_codebook *VAR_4)
{
unsigned short *VAR_5 = (unsigned short *)VAR_0;
int VAR_6;
int VAR_7, VAR_8;

    if (!VAR_3)
        VAR_6 = -VAR_2/2;
    else
        VAR_6 = VAR_2/2;


    for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
    {
        if (&VAR_5[VAR_8*VAR_6] < (unsigned short *)VAR_1) return;
        for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
            VAR_5[VAR_8*VAR_6 + VAR_7] = FUNC_0(VAR_4->r[VAR_7/2+(VAR_8/2)*2], VAR_4->g[VAR_7/2+(VAR_8/2)*2], VAR_4->b[VAR_7/2+(VAR_8/2)*2]);
    }
}
