
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* recv_seal_key; void* recv_sign_key; void* send_seal_key; void* send_sign_key; } ;
struct TYPE_6__ {TYPE_1__ ntlm2; } ;
struct TYPE_7__ {scalar_t__ mode; TYPE_2__ crypt; int session_key; } ;
typedef int SECURITY_STATUS ;
typedef TYPE_3__* PNegoHelper ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

SECURITY_STATUS FUNC_3(PNegoHelper VAR_6)
{
    VAR_6->crypt.ntlm2.send_sign_key = FUNC_1(FUNC_0(), 0, 16);
    VAR_6->crypt.ntlm2.send_seal_key = FUNC_1(FUNC_0(), 0, 16);
    VAR_6->crypt.ntlm2.recv_sign_key = FUNC_1(FUNC_0(), 0, 16);
    VAR_6->crypt.ntlm2.recv_seal_key = FUNC_1(FUNC_0(), 0, 16);

    if(VAR_6->mode == VAR_0)
    {
        FUNC_2(VAR_6->session_key, VAR_3,
                VAR_6->crypt.ntlm2.send_sign_key);
        FUNC_2(VAR_6->session_key, VAR_2,
                VAR_6->crypt.ntlm2.send_seal_key);
        FUNC_2(VAR_6->session_key, VAR_5,
                VAR_6->crypt.ntlm2.recv_sign_key);
        FUNC_2(VAR_6->session_key, VAR_4,
                VAR_6->crypt.ntlm2.recv_seal_key);
    }
    else
    {
        FUNC_2(VAR_6->session_key, VAR_5,
                VAR_6->crypt.ntlm2.send_sign_key);
        FUNC_2(VAR_6->session_key, VAR_4,
                VAR_6->crypt.ntlm2.send_seal_key);
        FUNC_2(VAR_6->session_key, VAR_3,
                VAR_6->crypt.ntlm2.recv_sign_key);
        FUNC_2(VAR_6->session_key, VAR_2,
                VAR_6->crypt.ntlm2.recv_seal_key);
    }

    return VAR_1;
}
