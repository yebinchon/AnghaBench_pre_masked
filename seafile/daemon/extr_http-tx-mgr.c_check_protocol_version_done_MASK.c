
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int result ;
struct TYPE_7__ {struct TYPE_7__* host; int user_data; int (* callback ) (TYPE_1__*,int ) ;int error_code; int version; int not_supported; int success; } ;
struct TYPE_6__ {int error_code; int version; int not_supported; int check_success; } ;
typedef TYPE_1__ HttpProtocolVersion ;
typedef TYPE_2__ CheckProtocolData ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3 (void *VAR_0)
{
    CheckProtocolData *VAR_1 = VAR_0;
    HttpProtocolVersion VAR_2;

    FUNC_1 (&VAR_2, 0, sizeof(VAR_2));
    VAR_2.check_success = VAR_1->success;
    VAR_2.not_supported = VAR_1->not_supported;
    VAR_2.version = VAR_1->version;
    VAR_2.error_code = VAR_1->error_code;

    VAR_1->callback (&VAR_2, VAR_1->user_data);

    FUNC_0 (VAR_1->host);
    FUNC_0 (VAR_1);
}
