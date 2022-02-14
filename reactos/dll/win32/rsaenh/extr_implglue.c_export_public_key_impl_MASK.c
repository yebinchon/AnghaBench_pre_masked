
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int e; int N; } ;
struct TYPE_5__ {TYPE_1__ rsa; } ;
typedef TYPE_2__ KEY_CONTEXT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;

BOOL FUNC_5(BYTE *VAR_1, const KEY_CONTEXT *VAR_2, DWORD VAR_3,DWORD *VAR_4)
{
    FUNC_2(&VAR_2->rsa.N, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.N));
    if (FUNC_3(&VAR_2->rsa.N) < VAR_3)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.N), 0,
               VAR_3 - FUNC_3(&VAR_2->rsa.N));
    *VAR_4 = (DWORD)FUNC_1(&VAR_2->rsa.e);
    return VAR_0;
}
