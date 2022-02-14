
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int data; int* len; } ;
struct TYPE_5__ {int* variable; int capab_info; } ;
struct TYPE_4__ {int* variable; int capab_info; } ;
struct TYPE_6__ {TYPE_2__ assoc_req; TYPE_1__ reassoc_req; } ;
struct ieee80211_mgmt {int* sa; int* da; TYPE_3__ u; int frame_control; } ;
struct ieee80211_mgd_assoc_data {int* fils_nonces; int fils_kek_len; int fils_kek; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*,size_t,int,int const**,size_t*,int*) ;
 int* FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

int FUNC_4(struct sk_buff *VAR_5,
      struct ieee80211_mgd_assoc_data *VAR_6)
{
 struct ieee80211_mgmt *VAR_7 = (void *)VAR_5->data;
 u8 *VAR_8, *VAR_9, *VAR_10;
 const u8 *VAR_11[5 + 1], *VAR_12;
 size_t VAR_13[5 + 1];
 size_t VAR_14;

 if (FUNC_2(VAR_7->frame_control)) {
  VAR_8 = (u8 *)&VAR_7->u.reassoc_req.capab_info;
  VAR_9 = VAR_7->u.reassoc_req.variable;
 } else {
  VAR_8 = (u8 *)&VAR_7->u.assoc_req.capab_info;
  VAR_9 = VAR_7->u.assoc_req.variable;
 }

 VAR_12 = FUNC_1(VAR_4,
           VAR_9, VAR_5->data + VAR_5->len - VAR_9);
 if (!VAR_12 || VAR_12[1] != 1 + 8)
  return -VAR_1;

 VAR_10 = (u8 *)VAR_12 + 2 + 1 + 8;




 VAR_11[0] = VAR_7->sa;
 VAR_13[0] = VAR_2;

 VAR_11[1] = VAR_7->da;
 VAR_13[1] = VAR_2;

 VAR_11[2] = VAR_6->fils_nonces;
 VAR_13[2] = VAR_3;

 VAR_11[3] = &VAR_6->fils_nonces[VAR_3];
 VAR_13[3] = VAR_3;



 VAR_11[4] = VAR_8;
 VAR_13[4] = VAR_10 - VAR_8;

 VAR_14 = VAR_5->data + VAR_5->len - VAR_10;
 FUNC_3(VAR_5, VAR_0);
 return FUNC_0(VAR_6->fils_kek, VAR_6->fils_kek_len,
          VAR_10, VAR_14, 5, VAR_11, VAR_13, VAR_10);
}
