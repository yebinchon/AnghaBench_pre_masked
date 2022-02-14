
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; scalar_t__ head; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,scalar_t__,int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct sk_buff *VAR_3,
           struct net_device *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_7 = (VAR_3->len >= VAR_0) ? 0 : VAR_0 - VAR_3->len;

 if (FUNC_11(VAR_3) >= VAR_7 + VAR_5) {

  if (FUNC_0(VAR_3, VAR_3->len + VAR_7, 0))
   return ((void*)0);

  VAR_6 = VAR_3;
 } else {
  VAR_6 = FUNC_1(VAR_2 + VAR_3->len +
     VAR_7 + VAR_5, VAR_1);
  if (!VAR_6)
   return ((void*)0);
  FUNC_7(VAR_6, VAR_2);

  FUNC_8(VAR_6);
  FUNC_9(VAR_6,
           FUNC_4(VAR_3) - VAR_3->head);
  FUNC_10(VAR_6,
      FUNC_12(VAR_3) - VAR_3->head);
  FUNC_3(VAR_3, FUNC_5(VAR_6, VAR_3->len));




  if (FUNC_6(VAR_6, VAR_6->len + VAR_7))
   return ((void*)0);

  FUNC_2(VAR_3);
 }

 return VAR_6;
}
