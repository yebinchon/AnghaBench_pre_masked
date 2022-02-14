
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sock*,unsigned int,void (*) (struct sock*,struct sk_buff*),int*,int*,struct sk_buff**) ;
 int FUNC_1 (struct sock*,int*,long*,struct sk_buff*) ;
 long FUNC_2 (struct sock*,unsigned int) ;

struct sk_buff *FUNC_3(struct sock *VAR_2, unsigned int VAR_3,
        void (*VAR_4)(struct sock *VAR_5,
             struct sk_buff *VAR_6),
        int *VAR_7, int *VAR_8)
{
 struct sk_buff *VAR_9, *VAR_10;
 long VAR_11;

 VAR_11 = FUNC_2(VAR_2, VAR_3 & VAR_1);

 do {
  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8,
           &VAR_10);
  if (VAR_9)
   return VAR_9;

  if (*VAR_8 != -VAR_0)
   break;
 } while (VAR_11 &&
  !FUNC_1(VAR_2, VAR_8, &VAR_11, VAR_10));

 return ((void*)0);
}
