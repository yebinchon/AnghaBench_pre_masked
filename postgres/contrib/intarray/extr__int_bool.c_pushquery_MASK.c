
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* int32 ;
struct TYPE_4__ {int num; TYPE_2__* str; } ;
typedef TYPE_1__ WORKSTATE ;
struct TYPE_5__ {struct TYPE_5__* next; void* val; void* type; } ;
typedef TYPE_2__ NODE ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(WORKSTATE *VAR_0, int32 VAR_1, int32 VAR_2)
{
 NODE *VAR_3 = (NODE *) FUNC_0(sizeof(NODE));

 VAR_3->type = VAR_1;
 VAR_3->val = VAR_2;
 VAR_3->next = VAR_0->str;
 VAR_0->str = VAR_3;
 VAR_0->num++;
}
