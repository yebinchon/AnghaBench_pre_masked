
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int digest; } ;
struct TYPE_6__ {int digest; } ;
struct TYPE_5__ {int sha512; int sha384; int sha256; int sha; TYPE_3__ md5; TYPE_4__ md4; int md2; } ;
typedef int PULONG ;
typedef TYPE_1__ HASH_CONTEXT ;
typedef int BYTE ;
typedef int BOOL ;
typedef int ALG_ID ;


 int FUNC_0 (int *,int ) ;







 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,int) ;

BOOL FUNC_9(ALG_ID VAR_3, HASH_CONTEXT *VAR_4, BYTE *VAR_5)
{
    switch (VAR_3)
    {
        case 134:
            FUNC_7(&VAR_4->md2, VAR_5);
            break;

        case 133:
            FUNC_1(&VAR_4->md4);
            FUNC_8(VAR_5, VAR_4->md4.digest, 16);
            break;

        case 132:
            FUNC_2(&VAR_4->md5);
            FUNC_8(VAR_5, VAR_4->md5.digest, 16);
            break;

        case 131:
            FUNC_0(&VAR_4->sha, (PULONG)VAR_5);
            break;

        case 130:
            FUNC_3(VAR_5, &VAR_4->sha256);
            break;

        case 129:
            FUNC_4(VAR_5, &VAR_4->sha384);
            break;

        case 128:
            FUNC_5(VAR_5, &VAR_4->sha512);
            break;

        default:
            FUNC_6(VAR_1);
            return VAR_0;
    }

    return VAR_2;
}
