
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* pCertInfo; } ;
struct TYPE_4__ {int Subject; } ;
typedef TYPE_2__* PCCERT_CONTEXT ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static WCHAR *FUNC_1(PCCERT_CONTEXT VAR_0, void *VAR_1)
{
    return FUNC_0(&VAR_0->pCertInfo->Subject);
}
