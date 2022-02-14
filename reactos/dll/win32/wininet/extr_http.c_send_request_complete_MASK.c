
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dwContext; } ;
struct TYPE_6__ {TYPE_4__ hdr; } ;
typedef TYPE_1__ http_request_t ;
struct TYPE_7__ {int dwError; int dwResult; } ;
typedef TYPE_2__ INTERNET_ASYNC_RESULT ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int ,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(http_request_t *VAR_1, DWORD_PTR VAR_2, DWORD VAR_3)
{
    INTERNET_ASYNC_RESULT VAR_4;

    VAR_4.dwResult = VAR_2;
    VAR_4.dwError = VAR_3;

    FUNC_0(&VAR_1->hdr, VAR_1->hdr.dwContext, VAR_0, &VAR_4,
            sizeof(INTERNET_ASYNC_RESULT));
}
