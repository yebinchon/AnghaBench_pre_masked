
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ sk; int protocol; int dev; scalar_t__ ignore_df; } ;
struct dst_entry {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct dst_entry *VAR_7 = FUNC_4(VAR_4);

 if (VAR_4->ignore_df)
  goto out;

 VAR_5 = FUNC_0(VAR_7);
 if (VAR_5 < VAR_3)
  VAR_5 = VAR_3;

 if ((!FUNC_6(VAR_4) && VAR_4->len > VAR_5) ||
     (FUNC_6(VAR_4) &&
      !FUNC_5(VAR_4, FUNC_3(VAR_4)))) {
  VAR_4->dev = VAR_7->dev;
  VAR_4->protocol = FUNC_1(VAR_1);

  if (FUNC_7(VAR_4))
   FUNC_8(VAR_4, VAR_5);
  else if (VAR_4->sk)
   FUNC_9(VAR_4, VAR_5);
  else
   FUNC_2(VAR_4, VAR_2, 0, VAR_5);
  VAR_6 = -VAR_0;
 }
out:
 return VAR_6;
}
