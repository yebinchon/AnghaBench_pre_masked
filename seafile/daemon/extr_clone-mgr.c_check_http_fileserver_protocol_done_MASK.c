
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; int use_fileserver_port; int server_url; int effective_url; int http_protocol_version; } ;
struct TYPE_7__ {int error_code; int version; int not_supported; scalar_t__ check_success; } ;
typedef TYPE_1__ HttpProtocolVersion ;
typedef TYPE_2__ CloneTask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4 (HttpProtocolVersion *VAR_3, void *VAR_4)
{
    CloneTask *VAR_5 = VAR_4;

    if (VAR_5->state == VAR_1) {
        FUNC_2 (VAR_5, VAR_0);
        return;
    }

    if (VAR_3->check_success && !VAR_3->not_supported) {
        VAR_5->http_protocol_version = VAR_3->version;
        VAR_5->effective_url = FUNC_1 (VAR_5->server_url);
        VAR_5->use_fileserver_port = VAR_2;
        FUNC_0 (VAR_5);
    } else {

        FUNC_3 (VAR_5, VAR_3->error_code);
    }
}
