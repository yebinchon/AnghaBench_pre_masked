
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_unlhsh_iface {int ifindex; int addr4_list; } ;
struct netlbl_unlhsh_addr4 {int secid; } ;
struct netlbl_audit {int dummy; } ;
struct netlbl_af4list {int dummy; } ;
struct net_device {int * name; } ;
struct net {int dummy; } ;
struct in_addr {int s_addr; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (struct audit_buffer*,char*,...) ;
 struct net_device* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct netlbl_unlhsh_addr4*,int ) ;
 int FUNC_5 (struct audit_buffer*,int,int *,int ,int ) ;
 struct netlbl_af4list* FUNC_6 (int ,int ,int *) ;
 struct audit_buffer* FUNC_7 (int ,struct netlbl_audit*) ;
 struct netlbl_unlhsh_addr4* FUNC_8 (struct netlbl_af4list*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (int ,char**,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net *VAR_4,
          struct netlbl_unlhsh_iface *VAR_5,
          const struct in_addr *VAR_6,
          const struct in_addr *VAR_7,
          struct netlbl_audit *VAR_8)
{
 struct netlbl_af4list *VAR_9;
 struct netlbl_unlhsh_addr4 *VAR_10;
 struct audit_buffer *VAR_11;
 struct net_device *VAR_12;
 char *VAR_13;
 u32 VAR_14;

 FUNC_11(&VAR_2);
 VAR_9 = FUNC_6(VAR_6->s_addr, VAR_7->s_addr,
        &VAR_5->addr4_list);
 FUNC_12(&VAR_2);
 if (VAR_9 != ((void*)0))
  VAR_10 = FUNC_8(VAR_9);
 else
  VAR_10 = ((void*)0);

 VAR_11 = FUNC_7(VAR_0,
           VAR_8);
 if (VAR_11 != ((void*)0)) {
  VAR_12 = FUNC_2(VAR_4, VAR_5->ifindex);
  FUNC_5(VAR_11, 1,
       (VAR_12 != ((void*)0) ? VAR_12->name : ((void*)0)),
       VAR_6->s_addr, VAR_7->s_addr);
  if (VAR_12 != ((void*)0))
   FUNC_3(VAR_12);
  if (VAR_10 != ((void*)0) &&
      FUNC_10(VAR_10->secid,
          &VAR_13, &VAR_14) == 0) {
   FUNC_1(VAR_11, " sec_obj=%s", VAR_13);
   FUNC_9(VAR_13, VAR_14);
  }
  FUNC_1(VAR_11, " res=%u", VAR_10 != ((void*)0) ? 1 : 0);
  FUNC_0(VAR_11);
 }

 if (VAR_10 == ((void*)0))
  return -VAR_1;

 FUNC_4(VAR_10, VAR_3);
 return 0;
}
