
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct socket {TYPE_1__* sk; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct inode_security_struct {scalar_t__ sid; } ;
struct TYPE_2__ {scalar_t__ sk_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct socket*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct inode_security_struct* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_7, struct sk_buff *VAR_8, u32 *VAR_9)
{
 u32 VAR_10 = VAR_6;
 u16 VAR_11;
 struct inode_security_struct *VAR_12;

 if (VAR_8 && VAR_8->protocol == FUNC_1(VAR_1))
  VAR_11 = VAR_3;
 else if (VAR_8 && VAR_8->protocol == FUNC_1(VAR_2))
  VAR_11 = VAR_4;
 else if (VAR_7)
  VAR_11 = VAR_7->sk->sk_family;
 else
  goto out;

 if (VAR_7 && VAR_11 == VAR_5) {
  VAR_12 = FUNC_2(FUNC_0(VAR_7));
  VAR_10 = VAR_12->sid;
 } else if (VAR_8)
  FUNC_3(VAR_8, VAR_11, &VAR_10);

out:
 *VAR_9 = VAR_10;
 if (VAR_10 == VAR_6)
  return -VAR_0;
 return 0;
}
