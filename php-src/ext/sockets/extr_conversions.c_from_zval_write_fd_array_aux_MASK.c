
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int ser_context ;
typedef int php_stream ;
struct TYPE_2__ {int bsd_socket; } ;
typedef TYPE_1__ php_socket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ,void**,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_8(zval *VAR_4, unsigned VAR_5, void **VAR_6, ser_context *VAR_7)
{
 int *VAR_8 = VAR_6[0];

 if (FUNC_0(VAR_4) == VAR_1) {
  php_stream *VAR_9;
  php_socket *VAR_10;

  VAR_10 = (php_socket *)FUNC_7(VAR_4, ((void*)0), FUNC_4());
  if (VAR_10) {
   VAR_8[VAR_5] = VAR_10->bsd_socket;
   return;
  }

  VAR_9 = (php_stream *)FUNC_6(VAR_4, ((void*)0), FUNC_3(), FUNC_2());
  if (VAR_9 == ((void*)0)) {
   FUNC_1(VAR_7, "resource is not a stream or a socket");
   return;
  }

  if (FUNC_5(VAR_9, VAR_2, (void **)&VAR_8[VAR_5 - 1],
    VAR_3) == VAR_0) {
   FUNC_1(VAR_7, "cast stream to file descriptor failed");
   return;
  }
 } else {
  FUNC_1(VAR_7, "expected a resource variable");
 }
}
