
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sha1; int md5; } ;
typedef TYPE_1__ MD5_SHA1_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (unsigned char*,int *) ;

int FUNC_2(unsigned char *VAR_1, MD5_SHA1_CTX *VAR_2)
{
    if (!FUNC_0(VAR_1, &VAR_2->md5))
        return 0;
    return FUNC_1(VAR_1 + VAR_0, &VAR_2->sha1);
}
