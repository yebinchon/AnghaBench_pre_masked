
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sha512; int sha384; int sha256; int sha; int md5; int md4; int md2; } ;
typedef TYPE_1__ HASH_CONTEXT ;
typedef int BOOL ;
typedef int ALG_ID ;


 int FUNC_0 (int *) ;







 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;

BOOL FUNC_7(ALG_ID VAR_1, HASH_CONTEXT *VAR_2)
{
    switch (VAR_1)
    {
        case 134:
            FUNC_6(&VAR_2->md2);
            break;

        case 133:
            FUNC_1(&VAR_2->md4);
            break;

        case 132:
            FUNC_2(&VAR_2->md5);
            break;

        case 131:
            FUNC_0(&VAR_2->sha);
            break;

        case 130:
            FUNC_3(&VAR_2->sha256);
            break;

        case 129:
            FUNC_4(&VAR_2->sha384);
            break;

        case 128:
            FUNC_5(&VAR_2->sha512);
            break;
    }

    return VAR_0;
}
