
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int num ;
struct TYPE_2__ {int bits; int r; } ;
typedef int RSA ;


 int FUNC_0 (unsigned char*,int const,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int const,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int const) ;
 int FUNC_9 (unsigned char*,unsigned char const,int const) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_10(int VAR_1)
{
    static const unsigned char VAR_2[8] = {
        0x80, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40
    };
    RSA *VAR_3 = FUNC_2();
    const int VAR_4 = VAR_0[VAR_1].bits;
    const int VAR_5 = VAR_0[VAR_1].r;
    const int VAR_6 = (VAR_4 + 7) / 8;
    int VAR_7 = 0;
    unsigned char VAR_8[2000];

    if (!FUNC_6(VAR_3) || !FUNC_5(VAR_6, (int)sizeof(VAR_8)))
        goto err;







    FUNC_9(VAR_8, VAR_2[VAR_4 % 8], VAR_6);






    if (FUNC_7(FUNC_4(VAR_3, FUNC_0(VAR_8, VAR_6, ((void*)0)),
                               FUNC_0(VAR_8, VAR_6, ((void*)0)), ((void*)0)))
            && FUNC_8(FUNC_3(VAR_3), VAR_5))
        VAR_7 = 1;
err:
    FUNC_1(VAR_3);
    return VAR_7;
}
