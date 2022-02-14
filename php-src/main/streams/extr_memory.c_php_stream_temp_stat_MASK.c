
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int innerstream; } ;
typedef TYPE_1__ php_stream_temp_data ;
typedef int php_stream_statbuf ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(php_stream *VAR_0, php_stream_statbuf *VAR_1)
{
 php_stream_temp_data *VAR_2 = (php_stream_temp_data*)VAR_0->abstract;

 if (!VAR_2 || !VAR_2->innerstream) {
  return -1;
 }
 return FUNC_0(VAR_2->innerstream, VAR_1);
}
