
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int object_header_t ;
struct TYPE_4__ {int dwContext; } ;
struct TYPE_3__ {TYPE_2__ hdr; int bytesWritten; int netconn; } ;
typedef TYPE_1__ http_request_t ;
typedef int LPINT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,void const*,scalar_t__,int ,int ) ;

__attribute__((used)) static DWORD FUNC_2(object_header_t *VAR_3, const void *VAR_4, DWORD VAR_5, DWORD *VAR_6)
{
    DWORD VAR_7;
    http_request_t *VAR_8 = (http_request_t*)VAR_3;

    FUNC_0(&VAR_8->hdr, VAR_8->hdr.dwContext, VAR_2, ((void*)0), 0);

    *VAR_6 = 0;
    VAR_7 = FUNC_1(VAR_8->netconn, VAR_4, VAR_5, 0, (LPINT)VAR_6);
    if (VAR_7 == VAR_0)
        VAR_8->bytesWritten += *VAR_6;

    FUNC_0(&VAR_8->hdr, VAR_8->hdr.dwContext, VAR_1, VAR_6, sizeof(DWORD));
    return VAR_7;
}
