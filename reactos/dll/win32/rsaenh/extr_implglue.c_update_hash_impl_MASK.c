
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sha512; int sha384; int sha256; int sha; int md5; int md4; int md2; } ;
typedef TYPE_1__ HASH_CONTEXT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ALG_ID ;


 int FUNC_0 (int *,int const*,int ) ;







 int VAR_0 ;
 int FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int *,int const*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int *,int const*,int ) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int *,int const*,int ) ;

BOOL FUNC_8(ALG_ID VAR_3, HASH_CONTEXT *VAR_4, const BYTE *VAR_5,
                      DWORD VAR_6)
{
    switch (VAR_3)
    {
        case 134:
            FUNC_7(&VAR_4->md2, VAR_5, VAR_6);
            break;

        case 133:
            FUNC_1(&VAR_4->md4, VAR_5, VAR_6);
            break;

        case 132:
            FUNC_2(&VAR_4->md5, VAR_5, VAR_6);
            break;

        case 131:
            FUNC_0(&VAR_4->sha, VAR_5, VAR_6);
            break;

        case 130:
            FUNC_3(&VAR_4->sha256, VAR_5, VAR_6);
            break;

        case 129:
            FUNC_4(&VAR_4->sha384, VAR_5, VAR_6);
            break;

        case 128:
            FUNC_5(&VAR_4->sha512, VAR_5, VAR_6);
            break;

        default:
            FUNC_6(VAR_1);
            return VAR_0;
    }

    return VAR_2;
}
