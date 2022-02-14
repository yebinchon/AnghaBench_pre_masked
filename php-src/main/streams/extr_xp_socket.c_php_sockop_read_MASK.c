
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_9__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_10__ {int socket; TYPE_1__ timeout; scalar_t__ is_blocked; scalar_t__ timeout_event; } ;
typedef TYPE_3__ php_netstream_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(php_stream *VAR_3, char *VAR_4, size_t VAR_5)
{
 php_netstream_data_t *VAR_6 = (php_netstream_data_t*)VAR_3->abstract;
 ssize_t VAR_7 = 0;
 int VAR_8;

 if (!VAR_6 || VAR_6->socket == -1) {
  return -1;
 }

 if (VAR_6->is_blocked) {
  FUNC_2(VAR_3, VAR_6);
  if (VAR_6->timeout_event)
   return 0;
 }

 VAR_7 = FUNC_5(VAR_6->socket, VAR_4, FUNC_1(VAR_5), (VAR_6->is_blocked && VAR_6->timeout.tv_sec != -1) ? VAR_2 : 0);
 VAR_8 = FUNC_3();

 if (VAR_7 < 0) {
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
   VAR_7 = 0;
  } else {
   VAR_3->eof = 1;
  }
 } else if (VAR_7 == 0) {
  VAR_3->eof = 1;
 }

 if (VAR_7 > 0) {
  FUNC_4(FUNC_0(VAR_3), VAR_7, 0);
 }

 return VAR_7;
}
