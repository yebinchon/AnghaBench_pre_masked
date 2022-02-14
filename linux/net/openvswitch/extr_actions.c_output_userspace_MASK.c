
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int upcall ;
typedef int uint32_t ;
struct vport {int dev; } ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct dp_upcall_info {int actions_len; struct nlattr const* actions; int egress_tun_info; int portid; struct nlattr const* userdata; int mru; int cmd; } ;
struct datapath {int dummy; } ;
struct TYPE_2__ {int mru; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;




 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct dp_upcall_info*,int ,int) ;
 struct nlattr* FUNC_3 (struct nlattr const*) ;
 int FUNC_4 (struct nlattr const*) ;
 int FUNC_5 (struct nlattr const*) ;
 struct nlattr* FUNC_6 (struct nlattr const*,int*) ;
 int FUNC_7 (struct nlattr const*) ;
 int FUNC_8 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct dp_upcall_info*,int ) ;
 struct vport* FUNC_9 (struct datapath*,int ) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct datapath *VAR_1, struct sk_buff *VAR_2,
       struct sw_flow_key *VAR_3, const struct nlattr *VAR_4,
       const struct nlattr *VAR_5, int VAR_6,
       uint32_t VAR_7)
{
 struct dp_upcall_info VAR_8;
 const struct nlattr *VAR_9;
 int VAR_10;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cmd = VAR_0;
 VAR_8.mru = FUNC_0(VAR_2)->mru;

 for (VAR_9 = FUNC_3(VAR_4), VAR_10 = FUNC_5(VAR_4); VAR_10 > 0;
   VAR_9 = FUNC_6(VAR_9, &VAR_10)) {
  switch (FUNC_7(VAR_9)) {
  case 128:
   VAR_8.userdata = VAR_9;
   break;

  case 129:
   VAR_8.portid = FUNC_4(VAR_9);
   break;

  case 130: {

   struct vport *VAR_11;

   VAR_11 = FUNC_9(VAR_1, FUNC_4(VAR_9));
   if (VAR_11) {
    int VAR_12;

    VAR_12 = FUNC_1(VAR_11->dev, VAR_2);
    if (!VAR_12)
     VAR_8.egress_tun_info = FUNC_10(VAR_2);
   }

   break;
  }

  case 131: {

   VAR_8.actions = VAR_5;
   VAR_8.actions_len = VAR_6;
   break;
  }

  }
 }

 return FUNC_8(VAR_1, VAR_2, VAR_3, &VAR_8, VAR_7);
}
