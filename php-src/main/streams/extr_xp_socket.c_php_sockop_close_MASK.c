
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_7__ {int socket; } ;
typedef TYPE_2__ php_netstream_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (void*,int ,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*,int ) ;

__attribute__((used)) static int FUNC_6(php_stream *VAR_4, int VAR_5)
{
 php_netstream_data_t *VAR_6 = (php_netstream_data_t*)VAR_4->abstract;




 if (!VAR_6) {
  return 0;
 }

 if (VAR_5) {





  if (VAR_6->socket != VAR_3) {
   FUNC_0(VAR_6->socket);
   VAR_6->socket = VAR_3;
  }

 }

 FUNC_1(VAR_6, FUNC_4(VAR_4));

 return 0;
}
