
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; struct TYPE_5__* data; } ;
typedef TYPE_1__ php_stream_memory_data ;
struct TYPE_6__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(php_stream *VAR_1, int VAR_2)
{
 php_stream_memory_data *VAR_3 = (php_stream_memory_data*)VAR_1->abstract;
 FUNC_0(VAR_3 != ((void*)0));

 if (VAR_3->data && VAR_2 && VAR_3->mode != VAR_0) {
  FUNC_1(VAR_3->data);
 }
 FUNC_1(VAR_3);
 return 0;
}
