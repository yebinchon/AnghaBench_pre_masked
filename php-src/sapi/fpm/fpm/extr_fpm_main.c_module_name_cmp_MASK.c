
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ zend_module_entry ;
struct TYPE_4__ {int val; } ;
typedef TYPE_2__ Bucket ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 Bucket *VAR_2 = (Bucket *) VAR_0;
 Bucket *VAR_3 = (Bucket *) VAR_1;

 return FUNC_1( ((zend_module_entry *) FUNC_0(VAR_2->val))->name,
      ((zend_module_entry *) FUNC_0(VAR_3->val))->name);
}
