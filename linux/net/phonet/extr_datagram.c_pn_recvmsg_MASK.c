
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_pn {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_flags; int * msg_name; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sockaddr_pn*,int) ;
 int FUNC_2 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_3 (struct sk_buff*,int ,struct msghdr*,int) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_7, struct msghdr *VAR_8, size_t VAR_9,
        int VAR_10, int VAR_11, int *VAR_12)
{
 struct sk_buff *VAR_13 = ((void*)0);
 struct sockaddr_pn VAR_14;
 int VAR_15 = -VAR_1;
 int VAR_16;

 if (VAR_11 & ~(VAR_5|VAR_6|VAR_3|VAR_4|
   VAR_2))
  goto out_nofree;

 VAR_13 = FUNC_5(VAR_7, VAR_11, VAR_10, &VAR_15);
 if (VAR_13 == ((void*)0))
  goto out_nofree;

 FUNC_2(VAR_13, &VAR_14);

 VAR_16 = VAR_13->len;
 if (VAR_9 < VAR_16) {
  VAR_8->msg_flags |= VAR_6;
  VAR_16 = VAR_9;
 }

 VAR_15 = FUNC_3(VAR_13, 0, VAR_8, VAR_16);
 if (VAR_15) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_15 = (VAR_11 & VAR_6) ? VAR_13->len : VAR_16;

 if (VAR_8->msg_name != ((void*)0)) {
  FUNC_0(sizeof(VAR_14));
  FUNC_1(VAR_8->msg_name, &VAR_14, sizeof(VAR_14));
  *VAR_12 = sizeof(VAR_14);
 }

out:
 FUNC_4(VAR_7, VAR_13);

out_nofree:
 return VAR_15;
}
