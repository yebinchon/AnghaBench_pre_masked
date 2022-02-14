
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aes; int des; int des3; int rc2; int rc4; } ;
typedef TYPE_1__ KEY_CONTEXT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ALG_ID ;
 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int *) ;
 int FUNC_1 (int *,int,int ,int *) ;
 int FUNC_2 (int *,int,int ,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int,int,int ,int *) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

BOOL FUNC_8(ALG_ID VAR_1, KEY_CONTEXT *VAR_2, DWORD VAR_3,
                    DWORD VAR_4, DWORD VAR_5, BYTE *VAR_6)
{
    switch (VAR_1)
    {
        case 128:
            FUNC_7(&VAR_2->rc4);
            FUNC_5(VAR_6, VAR_3 + VAR_5, &VAR_2->rc4);
            FUNC_6(&VAR_2->rc4);
            break;

        case 129:
            FUNC_4(VAR_6, VAR_3 + VAR_5, VAR_4 ?
                      VAR_4 : VAR_3 << 3, 0, &VAR_2->rc2);
            break;

        case 136:
            FUNC_1(VAR_6, 24, 0, &VAR_2->des3);
            break;

        case 135:
            FUNC_3(VAR_6+16, VAR_6, 8);
            FUNC_1(VAR_6, 24, 0, &VAR_2->des3);
            break;

        case 130:
            FUNC_2(VAR_6, 8, 0, &VAR_2->des);
            break;

        case 134:
        case 133:
            FUNC_0(VAR_6, 16, 0, &VAR_2->aes);
            break;

        case 132:
            FUNC_0(VAR_6, 24, 0, &VAR_2->aes);
            break;

        case 131:
            FUNC_0(VAR_6, 32, 0, &VAR_2->aes);
            break;
    }

    return VAR_0;
}
