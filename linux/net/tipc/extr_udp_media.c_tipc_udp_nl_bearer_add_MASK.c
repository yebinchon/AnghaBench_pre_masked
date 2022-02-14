
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_media_addr {int member_0; } ;
struct TYPE_2__ {int value; } ;
struct tipc_bearer {TYPE_1__ bcast_addr; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (struct nlattr*,struct udp_media_addr*,int *) ;
 scalar_t__ FUNC_3 (struct tipc_bearer*,struct udp_media_addr*) ;
 scalar_t__ FUNC_4 (struct udp_media_addr*) ;
 int FUNC_5 (struct tipc_bearer*,struct udp_media_addr*) ;

int FUNC_6(struct tipc_bearer *VAR_4, struct nlattr *VAR_5)
{
 int VAR_6;
 struct udp_media_addr VAR_7 = {0};
 struct nlattr *VAR_8[VAR_1 + 1];
 struct udp_media_addr *VAR_9;

 if (FUNC_0(VAR_8, VAR_1, VAR_5, VAR_3, ((void*)0)))
  return -VAR_0;

 if (!VAR_8[VAR_2])
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_8[VAR_2], &VAR_7, ((void*)0));
 if (VAR_6)
  return VAR_6;

 VAR_9 = (struct udp_media_addr *)&VAR_4->bcast_addr.value;
 if (FUNC_4(VAR_9)) {
  FUNC_1("Can't add remote ip to TIPC UDP multicast bearer\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_4, &VAR_7))
  return 0;

 return FUNC_5(VAR_4, &VAR_7);
}
