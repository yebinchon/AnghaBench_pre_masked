
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* valnode; } ;
struct TYPE_8__ {int cur; int len; int * ptr; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef int QueryItem ;
typedef TYPE_2__ PLAINTREE ;
typedef TYPE_3__ NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static QueryItem *
FUNC_2(NODE *VAR_2, int *VAR_3)
{
 PLAINTREE VAR_4;

 VAR_4.cur = 0;
 VAR_4.len = 16;
 if (VAR_2 && (VAR_2->valnode->type == VAR_1 || VAR_2->valnode->type == VAR_0))
 {
  VAR_4.ptr = (QueryItem *) FUNC_0(VAR_4.len * sizeof(QueryItem));
  FUNC_1(&VAR_4, VAR_2);
 }
 else
  VAR_4.ptr = ((void*)0);
 *VAR_3 = VAR_4.cur;
 return VAR_4.ptr;
}
