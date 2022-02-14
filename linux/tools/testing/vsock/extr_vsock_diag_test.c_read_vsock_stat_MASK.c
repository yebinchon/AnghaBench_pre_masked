
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_diag_msg {int dummy; } ;
struct nlmsghdr {int nlmsg_type; scalar_t__ nlmsg_len; } ;
struct nlmsgerr {int error; } ;
struct list_head {int dummy; } ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nlmsgerr* FUNC_0 (struct nlmsghdr const*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 struct nlmsghdr* FUNC_2 (struct nlmsghdr const*,int) ;
 scalar_t__ FUNC_3 (struct nlmsghdr const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct list_head*,struct nlmsgerr*) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,long*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_12(struct list_head *VAR_9)
{
 long VAR_10[8192 / sizeof(long)];
 int VAR_11;

 VAR_11 = FUNC_11(VAR_0, VAR_6, VAR_2);
 if (VAR_11 < 0) {
  FUNC_8("socket");
  FUNC_6(VAR_1);
 }

 FUNC_10(VAR_11);

 for (;;) {
  const struct nlmsghdr *VAR_12;
  ssize_t VAR_13;

  VAR_13 = FUNC_9(VAR_11, VAR_10, sizeof(VAR_10));
  if (VAR_13 == 0)
   goto done;
  if (VAR_13 < sizeof(*VAR_12)) {
   FUNC_7(VAR_8, "short read of %zd bytes\n", VAR_13);
   FUNC_6(VAR_1);
  }

  VAR_12 = (struct nlmsghdr *)VAR_10;

  while (FUNC_3(VAR_12, VAR_13)) {
   if (VAR_12->nlmsg_type == VAR_3)
    goto done;

   if (VAR_12->nlmsg_type == VAR_4) {
    const struct nlmsgerr *VAR_14 = FUNC_0(VAR_12);

    if (VAR_12->nlmsg_len < FUNC_1(sizeof(*VAR_14)))
     FUNC_7(VAR_8, "NLMSG_ERROR\n");
    else {
     VAR_7 = -VAR_14->error;
     FUNC_8("NLMSG_ERROR");
    }

    FUNC_6(VAR_1);
   }

   if (VAR_12->nlmsg_type != VAR_5) {
    FUNC_7(VAR_8, "unexpected nlmsg_type %#x\n",
     VAR_12->nlmsg_type);
    FUNC_6(VAR_1);
   }
   if (VAR_12->nlmsg_len <
       FUNC_1(sizeof(struct vsock_diag_msg))) {
    FUNC_7(VAR_8, "short vsock_diag_msg\n");
    FUNC_6(VAR_1);
   }

   FUNC_4(VAR_9, FUNC_0(VAR_12));

   VAR_12 = FUNC_2(VAR_12, VAR_13);
  }
 }

done:
 FUNC_5(VAR_11);
}
