
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sha1tmp ;
typedef int padtmp ;
typedef int md5tmp ;
struct TYPE_5__ {int sha1; int md5; } ;
typedef TYPE_1__ MD5_SHA1_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,void*,int) ;
 int FUNC_7 (unsigned char*,int,int) ;

int FUNC_8(MD5_SHA1_CTX *VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
    unsigned char VAR_7[48];
    unsigned char VAR_8[VAR_1];
    unsigned char VAR_9[VAR_2];

    if (VAR_4 != VAR_0)
        return -2;

    if (VAR_3 == ((void*)0))
        return 0;


    if (VAR_5 != 48)
        return 0;





    if (FUNC_6(VAR_3, VAR_6, VAR_5) <= 0)
        return 0;


    FUNC_7(VAR_7, 0x36, sizeof(VAR_7));

    if (!FUNC_1(&VAR_3->md5, VAR_7, sizeof(VAR_7)))
        return 0;

    if (!FUNC_0(VAR_8, &VAR_3->md5))
        return 0;

    if (!FUNC_4(&VAR_3->sha1, VAR_7, 40))
        return 0;

    if (!FUNC_3(VAR_9, &VAR_3->sha1))
        return 0;



    if (!FUNC_5(VAR_3))
        return 0;

    if (FUNC_6(VAR_3, VAR_6, VAR_5) <= 0)
        return 0;


    FUNC_7(VAR_7, 0x5c, sizeof(VAR_7));

    if (!FUNC_1(&VAR_3->md5, VAR_7, sizeof(VAR_7)))
        return 0;

    if (!FUNC_1(&VAR_3->md5, VAR_8, sizeof(VAR_8)))
        return 0;

    if (!FUNC_4(&VAR_3->sha1, VAR_7, 40))
        return 0;

    if (!FUNC_4(&VAR_3->sha1, VAR_9, sizeof(VAR_9)))
        return 0;



    FUNC_2(VAR_8, sizeof(VAR_8));
    FUNC_2(VAR_9, sizeof(VAR_9));

    return 1;
}
