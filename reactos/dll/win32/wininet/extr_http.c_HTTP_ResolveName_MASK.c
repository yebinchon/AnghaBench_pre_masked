
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr_len; int addr_str; int name; int addr; int port; } ;
typedef TYPE_1__ server_t ;
struct TYPE_7__ {int dwContext; } ;
struct TYPE_6__ {TYPE_3__ hdr; TYPE_1__* server; TYPE_1__* proxy; } ;
typedef TYPE_2__ http_request_t ;
typedef int WCHAR ;
typedef int SOCKADDR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static DWORD FUNC_6(http_request_t *VAR_4)
{
    server_t *VAR_5 = VAR_4->proxy ? VAR_4->proxy : VAR_4->server;
    int VAR_6;

    if(VAR_5->addr_len)
        return VAR_1;

    FUNC_1(&VAR_4->hdr, VAR_4->hdr.dwContext,
                          VAR_3,
                          VAR_5->name,
                          (FUNC_5(VAR_5->name)+1) * sizeof(WCHAR));

    VAR_6 = sizeof(VAR_5->addr);
    if (!FUNC_0(VAR_5->name, VAR_5->port, (SOCKADDR*)&VAR_5->addr, &VAR_6, VAR_5->addr_str))
        return VAR_0;

    VAR_5->addr_len = VAR_6;
    FUNC_1(&VAR_4->hdr, VAR_4->hdr.dwContext,
                          VAR_2,
                          VAR_5->addr_str, FUNC_4(VAR_5->addr_str)+1);

    FUNC_2("resolved %s to %s\n", FUNC_3(VAR_5->name), VAR_5->addr_str);
    return VAR_1;
}
