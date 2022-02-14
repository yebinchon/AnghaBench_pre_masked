
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int * sk; int * head; int cloned; } ;
struct TYPE_2__ {int dataref; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_0)
{
 if (FUNC_1(VAR_0->head)) {
  if (!VAR_0->cloned ||
      !FUNC_0(&(FUNC_2(VAR_0)->dataref)))
   FUNC_4(VAR_0->head);

  VAR_0->head = ((void*)0);
 }
 if (VAR_0->sk != ((void*)0))
  FUNC_3(VAR_0);
}
