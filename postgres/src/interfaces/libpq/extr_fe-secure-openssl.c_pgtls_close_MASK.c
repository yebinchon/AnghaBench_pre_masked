
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl_in_use; int * engine; int * peer; int * ssl; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

void
FUNC_6(PGconn *VAR_0)
{
 bool VAR_1 = 0;

 if (VAR_0->ssl)
 {





  VAR_1 = 1;

  FUNC_3(VAR_0->ssl);
  FUNC_2(VAR_0->ssl);
  VAR_0->ssl = ((void*)0);
  VAR_0->ssl_in_use = 0;
 }

 if (VAR_0->peer)
 {
  FUNC_4(VAR_0->peer);
  VAR_0->peer = ((void*)0);
 }
 if (VAR_1)
  FUNC_5();
}
