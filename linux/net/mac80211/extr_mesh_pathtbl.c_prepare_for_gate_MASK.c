
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct mesh_path {TYPE_3__* sdata; int next_hop; } ;
struct ieee80211s_hdr {int flags; char* eaddr1; char* eaddr2; } ;
struct ieee80211_hdr {char* addr3; char* addr4; char* addr1; char* addr2; int frame_control; } ;
struct TYPE_5__ {char* addr; } ;
struct TYPE_8__ {TYPE_1__ sta; } ;
struct TYPE_6__ {char* addr; } ;
struct TYPE_7__ {TYPE_2__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__,struct ieee80211_hdr*,int) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_3, char *VAR_4,
        struct mesh_path *VAR_5)
{
 struct ieee80211_hdr *VAR_6;
 struct ieee80211s_hdr *VAR_7;
 int VAR_8, VAR_9;
 char *VAR_10;

 VAR_6 = (struct ieee80211_hdr *) VAR_3->data;
 VAR_9 = FUNC_0(VAR_6->frame_control);
 VAR_7 = (struct ieee80211s_hdr *) (VAR_3->data + VAR_9);

 if (!(VAR_7->flags & VAR_1)) {

  VAR_8 = 6;


  FUNC_6(VAR_3, 2 * VAR_0);
  FUNC_2(VAR_3->data, VAR_6, VAR_9 + VAR_8);

  VAR_6 = (struct ieee80211_hdr *) VAR_3->data;



  VAR_7 = (struct ieee80211s_hdr *) (VAR_3->data + VAR_9);
  VAR_7->flags = VAR_2;
  FUNC_1(VAR_7->eaddr1, VAR_6->addr3, VAR_0);
  FUNC_1(VAR_7->eaddr2, VAR_6->addr4, VAR_0);
 }


 VAR_6 = (struct ieee80211_hdr *) VAR_3->data;
 FUNC_4();
 VAR_10 = FUNC_3(VAR_5->next_hop)->sta.addr;
 FUNC_1(VAR_6->addr1, VAR_10, VAR_0);
 FUNC_5();
 FUNC_1(VAR_6->addr2, VAR_5->sdata->vif.addr, VAR_0);
 FUNC_1(VAR_6->addr3, VAR_4, VAR_0);
}
