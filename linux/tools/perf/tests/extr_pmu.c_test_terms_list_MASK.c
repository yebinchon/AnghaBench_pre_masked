
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_3__ {int list; } ;
typedef struct list_head LIST_HEAD ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,struct list_head*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct list_head *FUNC_2(void)
{
 static LIST_HEAD(VAR_1);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_1(&VAR_0[VAR_2].list, &VAR_1);

 return &VAR_1;
}
