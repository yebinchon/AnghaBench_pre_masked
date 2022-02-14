
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* php_output_handler_func_t ) (int ,int ,char**,size_t*,int ) ;
struct TYPE_6__ {char* data; size_t used; int free; } ;
struct TYPE_7__ {int used; int data; } ;
struct TYPE_8__ {TYPE_1__ out; int op; TYPE_2__ in; } ;
typedef TYPE_3__ php_output_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(void **VAR_2, php_output_context *VAR_3)
{
 php_output_handler_func_t VAR_4 = *(php_output_handler_func_t *) VAR_2;

 if (VAR_4) {
  char *VAR_5 = ((void*)0);
  size_t VAR_6 = 0;

  VAR_4(VAR_3->in.data, VAR_3->in.used, &VAR_5, &VAR_6, VAR_3->op);

  if (VAR_5) {
   VAR_3->out.data = VAR_5;
   VAR_3->out.used = VAR_6;
   VAR_3->out.free = 1;
  } else {
   FUNC_0(VAR_3);
  }

  return VAR_1;
 }
 return VAR_0;
}
