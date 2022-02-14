
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ack; } ;
typedef TYPE_1__ tlsextctx ;
typedef int SSL ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(SSL *VAR_3, int *VAR_4, void *VAR_5)
{
    tlsextctx *VAR_6 = (tlsextctx *) VAR_5;
    const char *VAR_7 = FUNC_1(VAR_3, VAR_1);
    if (FUNC_2(VAR_3) != -1)
        VAR_6->ack = !FUNC_3(VAR_3) && VAR_7 != ((void*)0);
    else
        FUNC_0(VAR_2, "Can't use SSL_get_servername\n");

    return VAR_0;
}
