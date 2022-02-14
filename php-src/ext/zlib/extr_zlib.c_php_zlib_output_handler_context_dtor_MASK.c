
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
struct TYPE_5__ {TYPE_1__ buffer; } ;
typedef TYPE_2__ php_zlib_context ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 php_zlib_context *VAR_1 = (php_zlib_context *) VAR_0;

 if (VAR_1) {
  if (VAR_1->buffer.data) {
   FUNC_0(VAR_1->buffer.data);
  }
  FUNC_0(VAR_1);
 }
}
