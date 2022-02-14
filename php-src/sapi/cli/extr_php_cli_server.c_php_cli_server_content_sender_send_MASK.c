
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ssize_t ;
typedef int php_socket_t ;
struct TYPE_11__ {int * last; TYPE_6__* first; } ;
struct TYPE_14__ {TYPE_2__ buffer; } ;
typedef TYPE_5__ php_cli_server_content_sender ;
struct TYPE_12__ {size_t p; int len; } ;
struct TYPE_10__ {size_t p; int len; } ;
struct TYPE_13__ {TYPE_3__ immortal; TYPE_1__ heap; } ;
struct TYPE_15__ {int type; TYPE_4__ data; struct TYPE_15__* next; } ;
typedef TYPE_6__ php_cli_server_chunk ;




 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 () ;
 size_t FUNC_3 (int ,size_t,int,int ) ;

__attribute__((used)) static int FUNC_4(php_cli_server_content_sender *VAR_0, php_socket_t VAR_1, size_t *VAR_2)
{
 php_cli_server_chunk *VAR_3, *VAR_4;
 size_t VAR_5 = 0;

 for (VAR_3 = VAR_0->buffer.first; VAR_3; VAR_3 = VAR_4) {



  ssize_t VAR_6;

  VAR_4 = VAR_3->next;

  switch (VAR_3->type) {
  case 129:



   VAR_6 = FUNC_3(VAR_1, VAR_3->data.heap.p, VAR_3->data.heap.len, 0);

   if (VAR_6 < 0) {
    *VAR_2 = VAR_5;
    return FUNC_2();



   } else if (VAR_6 == (ssize_t)VAR_3->data.heap.len) {

    FUNC_1(VAR_3);
    FUNC_0(VAR_3, 1);
    VAR_0->buffer.first = VAR_4;
    if (!VAR_4) {
     VAR_0->buffer.last = ((void*)0);
    }
   } else {
    VAR_3->data.heap.p += VAR_6;
    VAR_3->data.heap.len -= VAR_6;
   }
   VAR_5 += VAR_6;
   break;

  case 128:



   VAR_6 = FUNC_3(VAR_1, VAR_3->data.immortal.p, VAR_3->data.immortal.len, 0);

   if (VAR_6 < 0) {
    *VAR_2 = VAR_5;
    return FUNC_2();



   } else if (VAR_6 == (ssize_t)VAR_3->data.immortal.len) {

    FUNC_1(VAR_3);
    FUNC_0(VAR_3, 1);
    VAR_0->buffer.first = VAR_4;
    if (!VAR_4) {
     VAR_0->buffer.last = ((void*)0);
    }
   } else {
    VAR_3->data.immortal.p += VAR_6;
    VAR_3->data.immortal.len -= VAR_6;
   }
   VAR_5 += VAR_6;
   break;
  }
 }
 *VAR_2 = VAR_5;
 return 0;
}
