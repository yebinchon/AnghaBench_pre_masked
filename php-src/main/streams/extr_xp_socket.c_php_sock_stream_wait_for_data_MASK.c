
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
typedef int php_stream ;
struct TYPE_3__ {int socket; int timeout_event; struct timeval timeout; } ;
typedef TYPE_1__ php_netstream_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct timeval*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(php_stream *VAR_2, php_netstream_data_t *VAR_3)
{
 int VAR_4;
 struct timeval *VAR_5;

 if (!VAR_3 || VAR_3->socket == -1) {
  return;
 }

 VAR_3->timeout_event = 0;

 if (VAR_3->timeout.tv_sec == -1)
  VAR_5 = ((void*)0);
 else
  VAR_5 = &VAR_3->timeout;

 while(1) {
  VAR_4 = FUNC_0(VAR_3->socket, VAR_1, VAR_5);

  if (VAR_4 == 0)
   VAR_3->timeout_event = 1;

  if (VAR_4 >= 0)
   break;

  if (FUNC_1() != VAR_0)
   break;
 }
}
