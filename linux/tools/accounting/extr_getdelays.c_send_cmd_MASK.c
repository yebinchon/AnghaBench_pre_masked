
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_nl {int nl_family; } ;
struct sockaddr {int dummy; } ;
struct nlattr {scalar_t__ nla_len; void* nla_type; } ;
struct TYPE_4__ {int nlmsg_len; int nlmsg_pid; scalar_t__ nlmsg_seq; int nlmsg_flags; void* nlmsg_type; } ;
struct TYPE_3__ {int version; int cmd; } ;
struct msgtemplate {TYPE_2__ n; TYPE_1__ g; } ;
typedef int nladdr ;
typedef int __u8 ;
typedef int __u32 ;
typedef void* __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct msgtemplate*) ;
 int VAR_2 ;
 int FUNC_1 (struct nlattr*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (struct sockaddr_nl*,int ,int) ;
 int FUNC_6 (int,char*,int,int ,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_6, __u16 VAR_7, __u32 VAR_8,
      __u8 VAR_9, __u16 VAR_10,
      void *VAR_11, int VAR_12)
{
 struct nlattr *VAR_13;
 struct sockaddr_nl VAR_14;
 int VAR_15, VAR_16;
 char *VAR_17;

 struct msgtemplate VAR_18;

 VAR_18.n.nlmsg_len = FUNC_3(VAR_2);
 VAR_18.n.nlmsg_type = VAR_7;
 VAR_18.n.nlmsg_flags = VAR_4;
 VAR_18.n.nlmsg_seq = 0;
 VAR_18.n.nlmsg_pid = VAR_8;
 VAR_18.g.cmd = VAR_9;
 VAR_18.g.version = 0x1;
 VAR_13 = (struct nlattr *) FUNC_0(&VAR_18);
 VAR_13->nla_type = VAR_10;
 VAR_13->nla_len = VAR_12 + 1 + VAR_3;
 FUNC_4(FUNC_1(VAR_13), VAR_11, VAR_12);
 VAR_18.n.nlmsg_len += FUNC_2(VAR_13->nla_len);

 VAR_17 = (char *) &VAR_18;
 VAR_16 = VAR_18.n.nlmsg_len ;
 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.nl_family = VAR_0;
 while ((VAR_15 = FUNC_6(VAR_6, VAR_17, VAR_16, 0, (struct sockaddr *) &VAR_14,
      sizeof(VAR_14))) < VAR_16) {
  if (VAR_15 > 0) {
   VAR_17 += VAR_15;
   VAR_16 -= VAR_15;
  } else if (VAR_5 != VAR_1)
   return -1;
 }
 return 0;
}
