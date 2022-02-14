
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {struct TYPE_15__* left; struct TYPE_15__* right; TYPE_2__* valnode; } ;
struct TYPE_14__ {size_t cur; size_t len; TYPE_4__* ptr; } ;
struct TYPE_12__ {int left; } ;
struct TYPE_13__ {TYPE_3__ qoperator; } ;
struct TYPE_10__ {scalar_t__ oper; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_4__ QueryItem ;
typedef TYPE_5__ PLAINTREE ;
typedef TYPE_6__ NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (void*,int) ;

__attribute__((used)) static void
FUNC_4(PLAINTREE *VAR_2, NODE *VAR_3)
{

 FUNC_0();

 if (VAR_2->cur == VAR_2->len)
 {
  VAR_2->len *= 2;
  VAR_2->ptr = (QueryItem *) FUNC_3((void *) VAR_2->ptr, VAR_2->len * sizeof(QueryItem));
 }
 FUNC_1((void *) &(VAR_2->ptr[VAR_2->cur]), (void *) VAR_3->valnode, sizeof(QueryItem));
 if (VAR_3->valnode->type == VAR_1)
  VAR_2->cur++;
 else if (VAR_3->valnode->qoperator.oper == VAR_0)
 {
  VAR_2->ptr[VAR_2->cur].qoperator.left = 1;
  VAR_2->cur++;
  FUNC_4(VAR_2, VAR_3->right);
 }
 else
 {
  int VAR_4 = VAR_2->cur;

  VAR_2->cur++;
  FUNC_4(VAR_2, VAR_3->right);
  VAR_2->ptr[VAR_4].qoperator.left = VAR_2->cur - VAR_4;
  FUNC_4(VAR_2, VAR_3->left);
 }
 FUNC_2(VAR_3);
}
