
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int php_stream ;
typedef scalar_t__ php_socket_t ;
typedef int fd_set ;
struct TYPE_11__ {TYPE_2__* data; } ;
struct TYPE_10__ {TYPE_3__* data; } ;
struct TYPE_9__ {int thread_id; TYPE_5__* vio; } ;
struct TYPE_7__ {int * (* get_stream ) (TYPE_5__*) ;} ;
struct TYPE_8__ {TYPE_1__ m; } ;
typedef TYPE_4__ MYSQLND ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int,void*,int) ;
 int * FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static unsigned int
FUNC_7(MYSQLND ** VAR_3, fd_set * VAR_4, php_socket_t * VAR_5)
{
 php_socket_t VAR_6;
 php_stream *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;
 MYSQLND **VAR_9 = VAR_3;
 FUNC_0("mysqlnd_stream_array_to_fd_set");

 while (*VAR_9) {





  VAR_7 = (*VAR_9)->data->vio->data->m.get_stream((*VAR_9)->data->vio);
  FUNC_1("conn=%llu stream=%p", (*VAR_9)->data->thread_id, VAR_7);
  if (VAR_7 != ((void*)0) &&
   VAR_2 == FUNC_5(VAR_7, VAR_0 | VAR_1, (void*)&VAR_6, 1) &&
   FUNC_4(VAR_6))
  {

   FUNC_3(VAR_6, VAR_4);

   if (VAR_6 > *VAR_5) {
    *VAR_5 = VAR_6;
   }
   ++VAR_8;
  }
  ++VAR_9;
 }
 FUNC_2(VAR_8 ? 1 : 0);
}
