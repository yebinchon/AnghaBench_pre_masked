
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct amp_mgr {int dummy; } ;
struct amp_ctrl {int dummy; } ;
struct a2mp_info_rsp {int id; scalar_t__ status; } ;
struct a2mp_cmd {int len; } ;
struct a2mp_amp_assoc_req {int id; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amp_mgr*) ;
 int FUNC_2 (struct amp_mgr*,int ,int ,int,struct a2mp_amp_assoc_req*) ;
 struct amp_ctrl* FUNC_3 (struct amp_mgr*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct amp_mgr *VAR_3, struct sk_buff *VAR_4,
       struct a2mp_cmd *VAR_5)
{
 struct a2mp_info_rsp *VAR_6 = (struct a2mp_info_rsp *) VAR_4->data;
 struct a2mp_amp_assoc_req VAR_7;
 struct amp_ctrl *VAR_8;

 if (FUNC_4(VAR_5->len) < sizeof(*VAR_6))
  return -VAR_1;

 FUNC_0("id %d status 0x%2.2x", VAR_6->id, VAR_6->status);

 if (VAR_6->status)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_3, VAR_6->id);
 if (!VAR_8)
  return -VAR_2;

 VAR_7.id = VAR_6->id;
 FUNC_2(VAR_3, VAR_0, FUNC_1(VAR_3), sizeof(VAR_7),
    &VAR_7);

 FUNC_5(VAR_4, sizeof(*VAR_6));
 return 0;
}
