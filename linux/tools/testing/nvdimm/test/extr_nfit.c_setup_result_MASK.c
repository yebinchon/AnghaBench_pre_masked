
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union acpi_object {int dummy; } acpi_object ;
struct TYPE_6__ {size_t length; void* pointer; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_7__ {TYPE_2__ buffer; TYPE_1__ package; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int,int ) ;
 int FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static int FUNC_3(void *VAR_4, size_t VAR_5)
{
 VAR_3 = FUNC_0(sizeof(union acpi_object) + VAR_5, VAR_2);
 if (!VAR_3)
  return -VAR_1;
 VAR_3->package.type = VAR_0,
 VAR_3->buffer.pointer = (void *) (VAR_3 + 1);
 VAR_3->buffer.length = VAR_5;
 FUNC_1(VAR_3->buffer.pointer, VAR_4, VAR_5);
 FUNC_2(VAR_4, 0, VAR_5);
 return 0;
}
