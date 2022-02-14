
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sha1; int md5; } ;
typedef TYPE_1__ MD5_SHA1_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(MD5_SHA1_CTX *VAR_0)
{
    if (!FUNC_0(&VAR_0->md5))
        return 0;
    return FUNC_1(&VAR_0->sha1);
}
