
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {TYPE_1__* chain; } ;
struct tcf_chain {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tcf_chain* FUNC_3 (int ,int) ;

int FUNC_4(int VAR_7, struct tcf_proto *VAR_8,
        struct tcf_chain **VAR_9,
        struct netlink_ext_ack *VAR_10)
{
 int VAR_11 = FUNC_2(VAR_7), VAR_12 = -VAR_0;
 u32 VAR_13;

 if (!VAR_11)
  VAR_12 = VAR_7 > VAR_6 ? -VAR_0 : 0;
 else if (VAR_11 <= VAR_2 || VAR_7 == VAR_5)
  VAR_12 = 0;
 if (VAR_12) {
  FUNC_0(VAR_10, "invalid control action");
  goto end;
 }

 if (FUNC_1(VAR_7, VAR_4)) {
  VAR_13 = VAR_7 & VAR_3;
  if (!VAR_8 || !VAR_9) {
   VAR_12 = -VAR_0;
   FUNC_0(VAR_10,
           "can't goto NULL proto/chain");
   goto end;
  }
  *VAR_9 = FUNC_3(VAR_8->chain->block, VAR_13);
  if (!*VAR_9) {
   VAR_12 = -VAR_1;
   FUNC_0(VAR_10,
           "can't allocate goto_chain");
  }
 }
end:
 return VAR_12;
}
