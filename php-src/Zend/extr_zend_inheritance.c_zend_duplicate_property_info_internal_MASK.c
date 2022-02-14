
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; int name; } ;
typedef TYPE_1__ zend_property_info ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static zend_property_info *FUNC_4(zend_property_info *VAR_0)
{
 zend_property_info* VAR_1 = FUNC_1(sizeof(zend_property_info), 1);
 FUNC_0(VAR_1, VAR_0, sizeof(zend_property_info));
 FUNC_2(VAR_1->name);
 FUNC_3(&VAR_1->type, 1);

 return VAR_1;
}
