
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conf_efs {int id; void* flush_to; void* acc_lat; void* sdu_itime; void* msdu; int stype; } ;
struct l2cap_chan {int mode; int local_id; int local_sdu_itime; int local_msdu; int local_stype; } ;
typedef int efs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void**,int ,int,unsigned long,size_t) ;

__attribute__((used)) static void FUNC_3(void **VAR_4, struct l2cap_chan *VAR_5, size_t VAR_6)
{
 struct l2cap_conf_efs VAR_7;

 switch (VAR_5->mode) {
 case 129:
  VAR_7.id = VAR_5->local_id;
  VAR_7.stype = VAR_5->local_stype;
  VAR_7.msdu = FUNC_0(VAR_5->local_msdu);
  VAR_7.sdu_itime = FUNC_1(VAR_5->local_sdu_itime);
  VAR_7.acc_lat = FUNC_1(VAR_1);
  VAR_7.flush_to = FUNC_1(VAR_2);
  break;

 case 128:
  VAR_7.id = 1;
  VAR_7.stype = VAR_3;
  VAR_7.msdu = FUNC_0(VAR_5->local_msdu);
  VAR_7.sdu_itime = FUNC_1(VAR_5->local_sdu_itime);
  VAR_7.acc_lat = 0;
  VAR_7.flush_to = 0;
  break;

 default:
  return;
 }

 FUNC_2(VAR_4, VAR_0, sizeof(VAR_7),
      (unsigned long) &VAR_7, VAR_6);
}
