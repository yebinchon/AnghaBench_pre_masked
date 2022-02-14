
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int version; int not_supported; scalar_t__ check_success; } ;
struct TYPE_4__ {int http_version; int effective_host; int use_fileserver_port; int testing_host; int checking; } ;
typedef TYPE_1__ HttpServerState ;
typedef TYPE_2__ HttpProtocolVersion ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (HttpProtocolVersion *VAR_3, void *VAR_4)
{
    HttpServerState *VAR_5 = VAR_4;

    VAR_5->checking = VAR_1;

    if (VAR_3->check_success && !VAR_3->not_supported) {
        VAR_5->http_version = FUNC_0(VAR_3->version, VAR_0);
        VAR_5->effective_host = FUNC_1(VAR_5->testing_host);
        VAR_5->use_fileserver_port = VAR_2;
        FUNC_2 ("File syncing protocol version on server %s is %d. "
                      "Client file syncing protocol version is %d. Use version %d.\n",
                      VAR_5->effective_host, VAR_3->version, VAR_0,
                      VAR_5->http_version);
    }
}
