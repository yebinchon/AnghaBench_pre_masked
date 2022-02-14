
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int digest; } ;
typedef int SECURITY_STATUS ;
typedef int * PBYTE ;
typedef TYPE_1__ MD4_CTX ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,int *,int *) ;
 int FUNC_4 (int *,int ,int) ;

SECURITY_STATUS FUNC_5(PBYTE VAR_1, int VAR_2, PBYTE VAR_3)
{
    MD4_CTX VAR_4;
    BYTE VAR_5[16];

    FUNC_3("(%p, %p)\n", VAR_1, VAR_3);

    FUNC_1(&VAR_4);
    FUNC_2(&VAR_4, VAR_1, VAR_2);
    FUNC_0(&VAR_4);

    FUNC_4(VAR_5, VAR_4.digest, 0x10);

    FUNC_1(&VAR_4);
    FUNC_2(&VAR_4, VAR_5, 0x10u);
    FUNC_0(&VAR_4);

    FUNC_4(VAR_3, VAR_4.digest, 0x10);

    return VAR_0;
}
