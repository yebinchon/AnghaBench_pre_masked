
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zend_bool ;
typedef int php_stream ;
typedef int php_socket_t ;
typedef int fd_set ;
struct TYPE_11__ {TYPE_2__* data; } ;
struct TYPE_10__ {TYPE_3__* data; } ;
struct TYPE_9__ {int thread_id; TYPE_5__* vio; } ;
struct TYPE_7__ {int * (* get_stream ) (TYPE_5__*) ;} ;
struct TYPE_8__ {TYPE_1__ m; } ;
typedef TYPE_4__ MYSQLND ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int,void*,int) ;
 int * FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static unsigned int
FUNC_7(MYSQLND ** VAR_5, fd_set * VAR_6)
{
 php_socket_t VAR_7;
 php_stream *VAR_8 = ((void*)0);
 unsigned int VAR_9 = 0;
 zend_bool VAR_10 = VAR_0;
 MYSQLND **VAR_11 = VAR_5, **VAR_12 = VAR_5;
 FUNC_0("mysqlnd_stream_array_from_fd_set");

 while (*VAR_11) {
  VAR_8 = (*VAR_11)->data->vio->data->m.get_stream((*VAR_11)->data->vio);
  FUNC_1("conn=%llu stream=%p", (*VAR_11)->data->thread_id, VAR_8);
  if (VAR_8 != ((void*)0) && VAR_3 == FUNC_5(VAR_8, VAR_1 | VAR_2,
          (void*)&VAR_7, 1) && FUNC_4(VAR_7)) {
   if (FUNC_3(VAR_7, VAR_6)) {
    if (VAR_10) {
     *VAR_12 = *VAR_11;
    }
    ++VAR_12;
    ++VAR_11;
    ++VAR_9;
    continue;
   }
  }
  VAR_10 = VAR_4;
  ++VAR_11;
 }
 *VAR_12 = ((void*)0);

 FUNC_2(VAR_9);
}
