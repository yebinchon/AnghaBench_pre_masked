
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int protocol; scalar_t__ sk; scalar_t__ ignore_df; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (scalar_t__,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6)
{
 int VAR_7, VAR_8 = 0;

 if (FUNC_0(VAR_6)->flags & VAR_4)
  goto out;

 if (!(FUNC_5(VAR_6)->frag_off & FUNC_3(VAR_5)) || VAR_6->ignore_df)
  goto out;

 VAR_7 = FUNC_1(FUNC_7(VAR_6));
 if ((!FUNC_9(VAR_6) && VAR_6->len > VAR_7) ||
     (FUNC_9(VAR_6) &&
      !FUNC_8(VAR_6, FUNC_6(VAR_6->sk, VAR_6)))) {
  VAR_6->protocol = FUNC_3(VAR_1);

  if (VAR_6->sk)
   FUNC_10(VAR_6, VAR_7);
  else
   FUNC_4(VAR_6, VAR_2,
      VAR_3, FUNC_2(VAR_7));
  VAR_8 = -VAR_0;
 }
out:
 return VAR_8;
}
