
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct sk_msg {int skb; TYPE_1__ sg; } ;
struct scatterlist {scalar_t__ length; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_msg*,int ,scalar_t__) ;
 struct scatterlist* FUNC_2 (struct sk_msg*,int ) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_msg*,int ,int) ;
 int FUNC_4 (struct sk_msg*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_0, struct sk_msg *VAR_1, u32 VAR_2,
    bool VAR_3)
{
 struct scatterlist *VAR_4 = FUNC_2(VAR_1, VAR_2);
 int VAR_5 = 0;

 while (VAR_1->sg.size) {
  VAR_1->sg.size -= VAR_4->length;
  VAR_5 += FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_5(VAR_2);
  FUNC_1(VAR_1, VAR_2, VAR_1->sg.size);
  VAR_4 = FUNC_2(VAR_1, VAR_2);
 }
 FUNC_0(VAR_1->skb);
 FUNC_4(VAR_1);
 return VAR_5;
}
