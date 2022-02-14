
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl_in_use; int * peer_cn; int * peer; int * ssl; } ;
typedef TYPE_1__ Port ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(Port *VAR_0)
{
 if (VAR_0->ssl)
 {
  FUNC_1(VAR_0->ssl);
  FUNC_0(VAR_0->ssl);
  VAR_0->ssl = ((void*)0);
  VAR_0->ssl_in_use = 0;
 }

 if (VAR_0->peer)
 {
  FUNC_2(VAR_0->peer);
  VAR_0->peer = ((void*)0);
 }

 if (VAR_0->peer_cn)
 {
  FUNC_3(VAR_0->peer_cn);
  VAR_0->peer_cn = ((void*)0);
 }
}
