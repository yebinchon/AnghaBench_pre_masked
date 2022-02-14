
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef size_t zend_ulong ;
typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__ ptr; } ;
typedef TYPE_1__ mysqli_object ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef int MYSQL_RES ;
typedef TYPE_2__ MYSQLI_RESOURCE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,size_t const) ;
 int FUNC_3 (int *) ;
 size_t* FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static zval *FUNC_6(mysqli_object *VAR_1, zval *VAR_2)
{
 MYSQL_RES *VAR_3;



 const zend_ulong *VAR_4;

 uint32_t VAR_5;

 FUNC_0(VAR_0);
 VAR_3 = (MYSQL_RES *)((MYSQLI_RESOURCE *)(VAR_1->ptr))->ptr;
 VAR_5 = FUNC_5(VAR_3);
 if (!VAR_3 || !VAR_5 || !(VAR_4 = FUNC_4(VAR_3))) {
  FUNC_1(VAR_2);
 } else {
  zend_ulong VAR_6;

  FUNC_3(VAR_2);

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   FUNC_2(VAR_2, VAR_6, VAR_4[VAR_6]);
  }
 }
 return VAR_2;
}
