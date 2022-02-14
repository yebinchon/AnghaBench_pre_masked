
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; int buffer_size; int xclient; int pass_error_message; int enable; } ;
typedef TYPE_1__ ngx_mail_proxy_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_mail_proxy_conf_t *VAR_5 = VAR_3;
    ngx_mail_proxy_conf_t *VAR_6 = VAR_4;

    FUNC_2(VAR_6->enable, VAR_5->enable, 0);
    FUNC_2(VAR_6->pass_error_message, VAR_5->pass_error_message, 0);
    FUNC_2(VAR_6->xclient, VAR_5->xclient, 1);
    FUNC_1(VAR_6->buffer_size, VAR_5->buffer_size,
                              (size_t) VAR_1);
    FUNC_0(VAR_6->timeout, VAR_5->timeout, 24 * 60 * 60000);

    return VAR_0;
}
