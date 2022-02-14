
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int lock; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff_head*) ;

__attribute__((used)) static inline void FUNC_5(struct sk_buff_head *VAR_0,
         struct sk_buff_head *VAR_1)
{
 struct sk_buff_head VAR_2;

 FUNC_0(&VAR_2);

 FUNC_2(&VAR_0->lock);
 FUNC_1(VAR_0, &VAR_2);
 FUNC_3(&VAR_0->lock);
 FUNC_4(&VAR_2, VAR_1);
}
