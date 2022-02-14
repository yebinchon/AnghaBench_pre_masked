
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_chan {scalar_t__ fcs; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct l2cap_chan *VAR_6, struct sk_buff *VAR_7)
{
 u16 VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_3(VAR_1, &VAR_6->flags))
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_2;

 if (VAR_6->fcs == VAR_4) {
  FUNC_2(VAR_7, VAR_7->len - VAR_5);
  VAR_9 = FUNC_1(VAR_7->data + VAR_7->len);
  VAR_8 = FUNC_0(0, VAR_7->data - VAR_10, VAR_7->len + VAR_10);

  if (VAR_8 != VAR_9)
   return -VAR_0;
 }
 return 0;
}
