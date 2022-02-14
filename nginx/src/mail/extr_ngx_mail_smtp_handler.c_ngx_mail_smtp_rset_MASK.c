
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int out; int smtp_to; int smtp_from; } ;
typedef TYPE_1__ ngx_mail_session_t ;
typedef int ngx_int_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_mail_session_t *VAR_2, ngx_connection_t *VAR_3)
{
    FUNC_0(&VAR_2->smtp_from);
    FUNC_0(&VAR_2->smtp_to);
    FUNC_1(&VAR_2->out, VAR_1);

    return VAR_0;
}
