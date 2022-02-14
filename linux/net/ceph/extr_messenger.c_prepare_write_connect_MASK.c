
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ flags; void* protocol_version; void* global_seq; void* connect_seq; void* host_type; int features; } ;
struct TYPE_4__ {int type; } ;
struct ceph_connection {int connect_seq; TYPE_2__ out_connect; int msgr; TYPE_1__ peer_name; } ;
struct TYPE_6__ {int supported_features; } ;


 int FUNC_0 () ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ceph_connection*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,struct ceph_connection*,int,unsigned int,int) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (struct ceph_connection*) ;
 unsigned int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ceph_connection *VAR_4)
{
 unsigned int VAR_5 = FUNC_7(VAR_4->msgr, 0);
 int VAR_6;
 int VAR_7;

 switch (VAR_4->peer_name.type) {
 case 129:
  VAR_6 = VAR_2;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 case 130:
  VAR_6 = VAR_1;
  break;
 default:
  FUNC_0();
 }

 FUNC_4("prepare_write_connect %p cseq=%d gseq=%d proto=%d\n", VAR_4,
      VAR_4->connect_seq, VAR_5, VAR_6);

 VAR_4->out_connect.features =
     FUNC_3(FUNC_5(VAR_4->msgr)->supported_features);
 VAR_4->out_connect.host_type = FUNC_2(VAR_0);
 VAR_4->out_connect.connect_seq = FUNC_2(VAR_4->connect_seq);
 VAR_4->out_connect.global_seq = FUNC_2(VAR_5);
 VAR_4->out_connect.protocol_version = FUNC_2(VAR_6);
 VAR_4->out_connect.flags = 0;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_4);
 return 0;
}
