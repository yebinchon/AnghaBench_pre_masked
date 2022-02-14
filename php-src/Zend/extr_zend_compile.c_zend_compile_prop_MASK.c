
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int znode ;
struct TYPE_5__ {int extended_value; } ;
typedef TYPE_1__ zend_op ;
typedef int zend_ast ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static zend_op *FUNC_3(znode *VAR_1, zend_ast *VAR_2, uint32_t VAR_3, int VAR_4)
{
 uint32_t VAR_5 = FUNC_0();
 zend_op *VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  VAR_6->extended_value |= VAR_0;
 }
 return FUNC_1(VAR_5);
}
