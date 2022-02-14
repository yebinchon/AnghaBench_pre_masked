
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_5__ {TYPE_4__* innerstream; } ;
typedef TYPE_1__ php_stream_temp_data ;
struct TYPE_6__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_7__ {int eof; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_4__*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(php_stream *VAR_0, char *VAR_1, size_t VAR_2)
{
 php_stream_temp_data *VAR_3 = (php_stream_temp_data*)VAR_0->abstract;
 size_t VAR_4;

 FUNC_0(VAR_3 != ((void*)0));

 if (!VAR_3->innerstream) {
  return -1;
 }

 VAR_4 = FUNC_1(VAR_3->innerstream, VAR_1, VAR_2);

 VAR_0->eof = VAR_3->innerstream->eof;

 return VAR_4;
}
