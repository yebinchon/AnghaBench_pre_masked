
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t (* fsizer ) (int ) ;int handle; scalar_t__ isatty; } ;
struct TYPE_6__ {TYPE_1__ stream; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ handle; } ;
typedef TYPE_3__ zend_file_handle ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(zend_file_handle *VAR_1)
{
 FUNC_0(VAR_1->type == VAR_0);
 if (VAR_1->handle.stream.isatty) {
  return 0;
 }
 return VAR_1->handle.stream.fsizer(VAR_1->handle.stream.handle);
}
