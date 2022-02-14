
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int protocol; } ;
typedef TYPE_1__ stgmed_buf_t ;
typedef int buf ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ,int *,int,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(stgmed_buf_t *VAR_1)
{
    BYTE VAR_2[8192];
    DWORD VAR_3;
    HRESULT VAR_4;

    do VAR_4 = FUNC_0(VAR_1->protocol, VAR_2, sizeof(VAR_2), &VAR_3);
    while(VAR_4 == VAR_0);
}
