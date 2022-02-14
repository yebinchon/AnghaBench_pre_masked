
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct timeval {int tv_sec; } ;
struct TYPE_8__ {int flags; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_9__ {TYPE_1__* reneg; } ;
typedef TYPE_3__ php_openssl_netstream_data_t ;
struct TYPE_7__ {scalar_t__ prev_handshake; int tokens; int limit; int window; int should_close; } ;
typedef int SSL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int *,int,int *,int ,int *) ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,char*) ;
 TYPE_2__* FUNC_6 (int const*) ;
 int * FUNC_7 (scalar_t__,char*,char*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(const SSL *VAR_4)
{
 php_stream *VAR_5;
 php_openssl_netstream_data_t *VAR_6;
 struct timeval VAR_7;
 zend_long VAR_8;

 VAR_5 = FUNC_6(VAR_4);
 VAR_6 = (php_openssl_netstream_data_t*)VAR_5->abstract;
 FUNC_3(&VAR_7, ((void*)0));


 if (VAR_6->reneg->prev_handshake == 0) {
  VAR_6->reneg->prev_handshake = VAR_7.tv_sec;
  return;
 }

 VAR_8 = (VAR_7.tv_sec - VAR_6->reneg->prev_handshake);
 VAR_6->reneg->prev_handshake = VAR_7.tv_sec;
 VAR_6->reneg->tokens -= (VAR_8 * (VAR_6->reneg->limit / VAR_6->reneg->window));

 if (VAR_6->reneg->tokens < 0) {
  VAR_6->reneg->tokens = 0;
 }
 ++VAR_6->reneg->tokens;


 if (VAR_6->reneg->tokens > VAR_6->reneg->limit) {
  zval *VAR_9;


  VAR_6->reneg->should_close = 1;

  if (FUNC_0(VAR_5) && (VAR_9 = FUNC_7(FUNC_0(VAR_5),
    "ssl", "reneg_limit_callback")) != ((void*)0)
  ) {
   zval VAR_10, VAR_11;

   FUNC_8(VAR_5, &VAR_10);


   VAR_5->flags |= VAR_3;
   if (VAR_1 == FUNC_2(((void*)0), ((void*)0), VAR_9, &VAR_11, 1, &VAR_10, 0, ((void*)0))) {
    FUNC_4(VAR_0, "SSL: failed invoking reneg limit notification callback");
   }
   VAR_5->flags ^= VAR_3;


   if (FUNC_1(VAR_11) == VAR_2) {
    VAR_6->reneg->should_close = 0;
   }

   FUNC_9(&VAR_11);
  } else {
   FUNC_5(((void*)0), VAR_0,
    "SSL: client-initiated handshake rate limit exceeded by peer");
  }
 }
}
