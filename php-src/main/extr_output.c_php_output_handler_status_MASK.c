
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {scalar_t__ used; scalar_t__ size; } ;
struct TYPE_5__ {int flags; TYPE_1__ buffer; scalar_t__ size; scalar_t__ level; int name; } ;
typedef TYPE_2__ php_output_handler ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline zval *FUNC_5(php_output_handler *VAR_0, zval *VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));

 FUNC_3(VAR_1);
 FUNC_2(VAR_1, "name", FUNC_4(VAR_0->name));
 FUNC_1(VAR_1, "type", (zend_long) (VAR_0->flags & 0xf));
 FUNC_1(VAR_1, "flags", (zend_long) VAR_0->flags);
 FUNC_1(VAR_1, "level", (zend_long) VAR_0->level);
 FUNC_1(VAR_1, "chunk_size", (zend_long) VAR_0->size);
 FUNC_1(VAR_1, "buffer_size", (zend_long) VAR_0->buffer.size);
 FUNC_1(VAR_1, "buffer_used", (zend_long) VAR_0->buffer.used);

 return VAR_1;
}
