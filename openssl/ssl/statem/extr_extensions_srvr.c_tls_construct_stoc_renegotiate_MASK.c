
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_5__ {int previous_server_finished_len; int previous_server_finished; int previous_client_finished_len; int previous_client_finished; int send_connection_binding; } ;
struct TYPE_6__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

EXT_RETURN FUNC_6(SSL *VAR_7, WPACKET *VAR_8,
                                          unsigned int VAR_9, X509 *VAR_10,
                                          size_t VAR_11)
{
    if (!VAR_7->s3.send_connection_binding)
        return VAR_2;


    if (!FUNC_3(VAR_8, VAR_6)
            || !FUNC_4(VAR_8)
            || !FUNC_5(VAR_8)
            || !FUNC_2(VAR_8, VAR_7->s3.previous_client_finished,
                               VAR_7->s3.previous_client_finished_len)
            || !FUNC_2(VAR_8, VAR_7->s3.previous_server_finished,
                               VAR_7->s3.previous_server_finished_len)
            || !FUNC_1(VAR_8)
            || !FUNC_1(VAR_8)) {
        FUNC_0(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
