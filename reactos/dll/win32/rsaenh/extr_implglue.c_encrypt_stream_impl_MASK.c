
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rc4; } ;
typedef TYPE_1__ KEY_CONTEXT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ALG_ID ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *) ;

BOOL FUNC_2(ALG_ID VAR_3, KEY_CONTEXT *VAR_4, BYTE *VAR_5, DWORD VAR_6)
{
    switch (VAR_3) {
        case 128:
            FUNC_1(VAR_5, VAR_6, &VAR_4->rc4);
            break;

        default:
            FUNC_0(VAR_1);
            return VAR_0;
    }

    return VAR_2;
}
