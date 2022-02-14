
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ssl_version; scalar_t__ session_id_length; int session_id; } ;
typedef TYPE_1__ SSL_SESSION ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const SSL_SESSION *VAR_0, const SSL_SESSION *VAR_1)
{
    if (VAR_0->ssl_version != VAR_1->ssl_version)
        return 1;
    if (VAR_0->session_id_length != VAR_1->session_id_length)
        return 1;
    return FUNC_0(VAR_0->session_id, VAR_1->session_id, VAR_0->session_id_length);
}
