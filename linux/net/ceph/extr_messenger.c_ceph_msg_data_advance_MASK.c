
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_msg_data_cursor {size_t resid; int need_crc; TYPE_1__* data; int last_piece; scalar_t__ total_resid; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;





 int FUNC_2 (int) ;
 int FUNC_3 (struct ceph_msg_data_cursor*) ;
 int FUNC_4 (struct ceph_msg_data_cursor*,size_t) ;
 int FUNC_5 (struct ceph_msg_data_cursor*,size_t) ;
 int FUNC_6 (struct ceph_msg_data_cursor*,size_t) ;
 int FUNC_7 (struct ceph_msg_data_cursor*,size_t) ;

__attribute__((used)) static void FUNC_8(struct ceph_msg_data_cursor *VAR_0,
      size_t VAR_1)
{
 bool VAR_2;

 FUNC_1(VAR_1 > VAR_0->resid);
 switch (VAR_0->data->type) {
 case 129:
  VAR_2 = FUNC_6(VAR_0, VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_7(VAR_0, VAR_1);
  break;





 case 131:
  VAR_2 = FUNC_5(VAR_0, VAR_1);
  break;
 case 130:
 default:
  FUNC_0();
  break;
 }
 VAR_0->total_resid -= VAR_1;

 if (!VAR_0->resid && VAR_0->total_resid) {
  FUNC_2(!VAR_0->last_piece);
  VAR_0->data++;
  FUNC_3(VAR_0);
  VAR_2 = 1;
 }
 VAR_0->need_crc = VAR_2;
}
