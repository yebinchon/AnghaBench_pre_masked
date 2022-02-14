
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ amp_type; int amp_assoc_size; int amp_pal_cap; int amp_min_latency; int amp_max_bw; int amp_total_bw; int id; int name; } ;
struct amp_mgr {int ident; } ;
struct a2mp_info_rsp {void* assoc_size; void* pal_cap; void* min_latency; void* max_bw; void* total_bw; scalar_t__ status; int id; } ;
typedef int rsp ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,struct amp_mgr*) ;
 int VAR_3 ;
 int FUNC_1 (struct amp_mgr*,int ,int ,int,struct a2mp_info_rsp*) ;
 struct amp_mgr* FUNC_2 (int ) ;
 int FUNC_3 (struct amp_mgr*) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

void FUNC_6(struct hci_dev *VAR_4)
{
 struct amp_mgr *VAR_5;
 struct a2mp_info_rsp VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return;

 FUNC_0("%s mgr %p", VAR_4->name, VAR_5);

 VAR_6.id = VAR_4->id;
 VAR_6.status = VAR_1;

 if (VAR_4->amp_type != VAR_2) {
  VAR_6.status = 0;
  VAR_6.total_bw = FUNC_5(VAR_4->amp_total_bw);
  VAR_6.max_bw = FUNC_5(VAR_4->amp_max_bw);
  VAR_6.min_latency = FUNC_5(VAR_4->amp_min_latency);
  VAR_6.pal_cap = FUNC_4(VAR_4->amp_pal_cap);
  VAR_6.assoc_size = FUNC_4(VAR_4->amp_assoc_size);
 }

 FUNC_1(VAR_5, VAR_0, VAR_5->ident, sizeof(VAR_6), &VAR_6);
 FUNC_3(VAR_5);
}
