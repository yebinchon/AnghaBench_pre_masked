
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int znode ;
struct TYPE_8__ {int children; TYPE_2__** child; } ;
typedef TYPE_1__ zend_ast_list ;
struct TYPE_9__ {struct TYPE_9__** child; } ;
typedef TYPE_2__ zend_ast ;
typedef size_t uint32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (size_t*) ;
 size_t* FUNC_2 (int,int,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 size_t FUNC_6 (int ,int *,int ) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (size_t) ;

void FUNC_9(zend_ast *VAR_1)
{
 zend_ast_list *VAR_2 = FUNC_3(VAR_1);
 uint32_t VAR_3;
 uint32_t *VAR_4 = ((void*)0);

 if (VAR_2->children > 1) {
  VAR_4 = FUNC_2(sizeof(uint32_t), VAR_2->children - 1, 0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->children; ++VAR_3) {
  zend_ast *VAR_5 = VAR_2->child[VAR_3];
  zend_ast *VAR_6 = VAR_5->child[0];
  zend_ast *VAR_7 = VAR_5->child[1];

  if (VAR_6) {
   znode VAR_8;
   uint32_t VAR_9;
   FUNC_4(&VAR_8, VAR_6);
   VAR_9 = FUNC_6(VAR_0, &VAR_8, 0);

   FUNC_5(VAR_7);

   if (VAR_3 != VAR_2->children - 1) {
    VAR_4[VAR_3] = FUNC_7(0);
   }
   FUNC_8(VAR_9);
  } else {

   FUNC_0(VAR_3 == VAR_2->children - 1);
   FUNC_5(VAR_7);
  }
 }

 if (VAR_2->children > 1) {
  for (VAR_3 = 0; VAR_3 < VAR_2->children - 1; ++VAR_3) {
   FUNC_8(VAR_4[VAR_3]);
  }
  FUNC_1(VAR_4);
 }
}
