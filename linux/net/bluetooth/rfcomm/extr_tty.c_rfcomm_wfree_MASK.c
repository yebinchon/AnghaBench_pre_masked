
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ sk; } ;
struct rfcomm_dev {int port; int flags; int wmem_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1)
{
 struct rfcomm_dev *VAR_2 = (void *) VAR_1->sk;
 FUNC_0(&VAR_2->wmem_alloc);
 if (FUNC_1(VAR_0, &VAR_2->flags))
  FUNC_3(&VAR_2->port);
 FUNC_2(&VAR_2->port);
}
