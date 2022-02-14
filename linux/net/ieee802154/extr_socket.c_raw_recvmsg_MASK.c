
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {size_t len; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,struct msghdr*,size_t) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sock*,int,int,int*) ;
 int FUNC_3 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_2, struct msghdr *VAR_3, size_t VAR_4,
         int VAR_5, int VAR_6, int *VAR_7)
{
 size_t VAR_8 = 0;
 int VAR_9 = -VAR_0;
 struct sk_buff *VAR_10;

 VAR_10 = FUNC_2(VAR_2, VAR_6, VAR_5, &VAR_9);
 if (!VAR_10)
  goto out;

 VAR_8 = VAR_10->len;
 if (VAR_4 < VAR_8) {
  VAR_3->msg_flags |= VAR_1;
  VAR_8 = VAR_4;
 }

 VAR_9 = FUNC_0(VAR_10, 0, VAR_3, VAR_8);
 if (VAR_9)
  goto done;

 FUNC_3(VAR_3, VAR_2, VAR_10);

 if (VAR_6 & VAR_1)
  VAR_8 = VAR_10->len;
done:
 FUNC_1(VAR_2, VAR_10);
out:
 if (VAR_9)
  return VAR_9;
 return VAR_8;
}
