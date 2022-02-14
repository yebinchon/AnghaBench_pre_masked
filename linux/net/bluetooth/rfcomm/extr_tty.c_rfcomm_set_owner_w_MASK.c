
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int destructor; void* sk; } ;
struct rfcomm_dev {int wmem_alloc; int port; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1, struct rfcomm_dev *VAR_2)
{
 FUNC_1(&VAR_2->port);
 FUNC_0(&VAR_2->wmem_alloc);
 VAR_1->sk = (void *) VAR_2;
 VAR_1->destructor = VAR_0;
}
