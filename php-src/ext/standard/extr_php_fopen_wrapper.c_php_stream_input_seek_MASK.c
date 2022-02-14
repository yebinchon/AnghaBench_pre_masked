
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_off_t ;
struct TYPE_5__ {TYPE_3__* body; int position; } ;
typedef TYPE_1__ php_stream_input_t ;
struct TYPE_6__ {TYPE_1__* abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_7__ {int position; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_1(php_stream *VAR_0, zend_off_t VAR_1, int VAR_2, zend_off_t *VAR_3)
{
 php_stream_input_t *VAR_4 = VAR_0->abstract;

 if (VAR_4->body) {
  int VAR_5 = FUNC_0(VAR_4->body, VAR_1, VAR_2);
  *VAR_3 = VAR_4->position = (VAR_4->body)->position;
  return VAR_5;
 }

 return -1;
}
