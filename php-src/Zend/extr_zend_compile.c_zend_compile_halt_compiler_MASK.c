
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_long ;
struct TYPE_4__ {struct TYPE_4__** child; } ;
typedef TYPE_1__ zend_ast ;
typedef int const_name ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 () ;
 int * FUNC_7 (char const*,int,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int *,int ) ;

void FUNC_10(zend_ast *VAR_4)
{
 zend_ast *VAR_5 = VAR_4->child[0];
 zend_long VAR_6 = FUNC_3(FUNC_4(VAR_5));

 zend_string *VAR_7, *VAR_8;
 const char VAR_9[] = "__COMPILER_HALT_OFFSET__";

 if (FUNC_0(VAR_2) && FUNC_0(VAR_3)) {
  FUNC_5(VAR_1,
   "__HALT_COMPILER() can only be used from the outermost scope");
 }

 VAR_7 = FUNC_6();
 VAR_8 = FUNC_7(VAR_9, sizeof(VAR_9) - 1,
  FUNC_2(VAR_7), FUNC_1(VAR_7), 0);

 FUNC_8(FUNC_2(VAR_8), FUNC_1(VAR_8), VAR_6, VAR_0, 0);
 FUNC_9(VAR_8, 0);
}
