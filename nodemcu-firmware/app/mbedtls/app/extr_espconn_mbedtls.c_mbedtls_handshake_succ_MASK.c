
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * hostname; int * session; int * session_negotiate; int * transform_negotiate; int * handshake; } ;
typedef TYPE_1__ mbedtls_ssl_context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(mbedtls_ssl_context *VAR_0)
{
 FUNC_0(VAR_0);
 if( VAR_0->handshake )
    {
        FUNC_1( VAR_0->handshake );
        FUNC_3( VAR_0->transform_negotiate );
        FUNC_2( VAR_0->session_negotiate );

        FUNC_5( VAR_0->handshake );
        FUNC_5( VAR_0->transform_negotiate );
        FUNC_5( VAR_0->session_negotiate );
  VAR_0->handshake = ((void*)0);
  VAR_0->transform_negotiate = ((void*)0);
  VAR_0->session_negotiate = ((void*)0);
    }

    if( VAR_0->session )
    {
        FUNC_2( VAR_0->session );
        FUNC_5( VAR_0->session );
  VAR_0->session = ((void*)0);
    }
}
