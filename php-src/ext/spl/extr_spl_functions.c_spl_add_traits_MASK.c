
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {size_t num_traits; TYPE_1__* trait_names; } ;
typedef TYPE_2__ zend_class_entry ;
typedef size_t uint32_t ;
struct TYPE_7__ {int lc_name; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,int,int) ;
 TYPE_2__* FUNC_2 (int ,int ,int ) ;

void FUNC_3(zval *VAR_1, zend_class_entry * VAR_2, int VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 zend_class_entry *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_traits; VAR_5++) {
  VAR_6 = FUNC_2(VAR_2->trait_names[VAR_5].name,
   VAR_2->trait_names[VAR_5].lc_name, VAR_0);
  FUNC_0(VAR_6);
  FUNC_1(VAR_1, VAR_6, VAR_3, VAR_4);
 }
}
