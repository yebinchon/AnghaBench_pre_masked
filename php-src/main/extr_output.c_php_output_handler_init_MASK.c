
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {int size; int data; } ;
struct TYPE_6__ {size_t size; int flags; TYPE_1__ buffer; int name; } ;
typedef TYPE_2__ php_output_handler ;


 int FUNC_0 (size_t) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline php_output_handler *FUNC_4(zend_string *VAR_0, size_t VAR_1, int VAR_2)
{
 php_output_handler *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(php_output_handler));
 VAR_3->name = FUNC_3(VAR_0);
 VAR_3->size = VAR_1;
 VAR_3->flags = VAR_2;
 VAR_3->buffer.size = FUNC_0(VAR_1);
 VAR_3->buffer.data = FUNC_2(VAR_3->buffer.size);

 return VAR_3;
}
