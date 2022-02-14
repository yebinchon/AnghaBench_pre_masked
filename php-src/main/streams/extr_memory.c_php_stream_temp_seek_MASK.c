
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_off_t ;
struct TYPE_6__ {TYPE_4__* innerstream; } ;
typedef TYPE_1__ php_stream_temp_data ;
struct TYPE_7__ {int eof; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_8__ {int eof; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_0, zend_off_t VAR_1, int VAR_2, zend_off_t *VAR_3)
{
 php_stream_temp_data *VAR_4 = (php_stream_temp_data*)VAR_0->abstract;
 int VAR_5;

 FUNC_0(VAR_4 != ((void*)0));

 if (!VAR_4->innerstream) {
  *VAR_3 = -1;
  return -1;
 }
 VAR_5 = FUNC_1(VAR_4->innerstream, VAR_1, VAR_2);
 *VAR_3 = FUNC_2(VAR_4->innerstream);
 VAR_0->eof = VAR_4->innerstream->eof;

 return VAR_5;
}
