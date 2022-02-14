
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zend_bool ;
struct TYPE_4__ {char* data; size_t used; size_t size; scalar_t__ free; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
typedef TYPE_2__ php_output_context ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(php_output_context *VAR_0, char *VAR_1, size_t VAR_2, size_t VAR_3, zend_bool VAR_4)
{
 if (VAR_0->in.free && VAR_0->in.data) {
  FUNC_0(VAR_0->in.data);
 }
 VAR_0->in.data = VAR_1;
 VAR_0->in.used = VAR_3;
 VAR_0->in.free = VAR_4;
 VAR_0->in.size = VAR_2;
}
