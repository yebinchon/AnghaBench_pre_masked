
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * handshake_dgst; int * handshake_buffer; } ;
struct TYPE_5__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(SSL *VAR_0)
{
    FUNC_0(VAR_0->s3.handshake_buffer);
    VAR_0->s3.handshake_buffer = ((void*)0);
    FUNC_1(VAR_0->s3.handshake_dgst);
    VAR_0->s3.handshake_dgst = ((void*)0);
}
