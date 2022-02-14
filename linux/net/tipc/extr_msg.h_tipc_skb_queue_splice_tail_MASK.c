
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;


 int FUNC_0 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff_head *VAR_0,
           struct sk_buff_head *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->lock);
}
