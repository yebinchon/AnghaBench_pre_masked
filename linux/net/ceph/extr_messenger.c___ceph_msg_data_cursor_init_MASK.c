
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_msg_data_cursor {size_t total_resid; int need_crc; TYPE_1__* data; } ;
struct TYPE_2__ {int type; } ;







 int FUNC_0 (struct ceph_msg_data_cursor*,size_t) ;
 int FUNC_1 (struct ceph_msg_data_cursor*,size_t) ;
 int FUNC_2 (struct ceph_msg_data_cursor*,size_t) ;
 int FUNC_3 (struct ceph_msg_data_cursor*,size_t) ;

__attribute__((used)) static void FUNC_4(struct ceph_msg_data_cursor *VAR_0)
{
 size_t VAR_1 = VAR_0->total_resid;

 switch (VAR_0->data->type) {
 case 129:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_0, VAR_1);
  break;





 case 131:
  FUNC_1(VAR_0, VAR_1);
  break;
 case 130:
 default:

  break;
 }
 VAR_0->need_crc = 1;
}
