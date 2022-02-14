
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct netns_ipvs {scalar_t__ sync_state; } ;
struct net {int dummy; } ;
struct ip_vs_service_user_kern {int dummy; } ;
struct ip_vs_service {scalar_t__ af; } ;
struct ip_vs_dest_user_kern {scalar_t__ af; int conn_flags; } ;
struct genl_info {int * attrs; TYPE_1__* genlhdr; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;


 int VAR_6 ;


 int VAR_7 ;




 int VAR_8 ;
 int FUNC_0 (struct ip_vs_service*,struct ip_vs_dest_user_kern*) ;
 int FUNC_1 (struct netns_ipvs*,struct ip_vs_service_user_kern*,struct ip_vs_service**) ;
 int FUNC_2 (struct ip_vs_service*,struct ip_vs_dest_user_kern*) ;
 int FUNC_3 (struct ip_vs_service*) ;
 int FUNC_4 (struct ip_vs_service*,struct ip_vs_dest_user_kern*) ;
 int FUNC_5 (struct ip_vs_service*,struct ip_vs_service_user_kern*) ;
 int FUNC_6 (struct netns_ipvs*,int) ;
 int FUNC_7 (struct ip_vs_dest_user_kern*,int ,int) ;
 int FUNC_8 (struct netns_ipvs*,struct ip_vs_service_user_kern*,int ,int,struct ip_vs_service**) ;
 int FUNC_9 (struct netns_ipvs*,int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct netns_ipvs*) ;
 int FUNC_12 (struct ip_vs_service*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct netns_ipvs* FUNC_15 (struct net*) ;
 struct net* FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 bool VAR_11 = 0, VAR_12 = 0;
 struct ip_vs_service *VAR_13 = ((void*)0);
 struct ip_vs_service_user_kern VAR_14;
 struct ip_vs_dest_user_kern VAR_15;
 int VAR_16 = 0, VAR_17;
 struct net *VAR_18 = FUNC_16(VAR_9->sk);
 struct netns_ipvs *VAR_19 = FUNC_15(VAR_18);

 VAR_17 = VAR_10->genlhdr->cmd;

 FUNC_13(&VAR_8);

 if (VAR_17 == VAR_6) {
  VAR_16 = FUNC_6(VAR_19, 0);
  goto out;
 } else if (VAR_17 == VAR_7) {
  VAR_16 = FUNC_9(VAR_19, VAR_10->attrs);
  goto out;
 } else if (VAR_17 == 129 &&
     !VAR_10->attrs[VAR_5]) {
  VAR_16 = FUNC_11(VAR_19);
  goto out;
 }




 if (VAR_17 == 132 || VAR_17 == 130)
  VAR_11 = 1;

 VAR_16 = FUNC_8(VAR_19, &VAR_14,
           VAR_10->attrs[VAR_5],
           VAR_11, &VAR_13);
 if (VAR_16)
  goto out;


 if ((VAR_17 != 132) && (VAR_13 == ((void*)0))) {
  VAR_16 = -VAR_3;
  goto out;
 }




 if (VAR_17 == 133 || VAR_17 == 131 ||
     VAR_17 == 135) {
  if (VAR_17 != 135)
   VAR_12 = 1;

  VAR_16 = FUNC_7(&VAR_15,
         VAR_10->attrs[VAR_4],
         VAR_12);
  if (VAR_16)
   goto out;







  if (VAR_15.af == 0)
   VAR_15.af = VAR_13->af;

  if (!FUNC_10(VAR_15.af)) {
   VAR_16 = -VAR_0;
   goto out;
  }

  if (VAR_15.af != VAR_13->af && VAR_17 != 135) {



   if (VAR_19->sync_state) {
    VAR_16 = -VAR_2;
    goto out;
   }


   switch (VAR_15.conn_flags) {
   case 128:

    break;
   default:
    VAR_16 = -VAR_2;
    goto out;
   }
  }
 }

 switch (VAR_17) {
 case 132:
  if (VAR_13 == ((void*)0))
   VAR_16 = FUNC_1(VAR_19, &VAR_14, &VAR_13);
  else
   VAR_16 = -VAR_1;
  break;
 case 130:
  VAR_16 = FUNC_5(VAR_13, &VAR_14);
  break;
 case 134:
  VAR_16 = FUNC_3(VAR_13);

  break;
 case 133:
  VAR_16 = FUNC_0(VAR_13, &VAR_15);
  break;
 case 131:
  VAR_16 = FUNC_4(VAR_13, &VAR_15);
  break;
 case 135:
  VAR_16 = FUNC_2(VAR_13, &VAR_15);
  break;
 case 129:
  VAR_16 = FUNC_12(VAR_13);
  break;
 default:
  VAR_16 = -VAR_2;
 }

out:
 FUNC_14(&VAR_8);

 return VAR_16;
}
