
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int out_temp_ack; int in_seq_acked; int in_seq; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_connection*,int ) ;
 int FUNC_1 (struct ceph_connection*,int,int *) ;
 int FUNC_2 (struct ceph_connection*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,struct ceph_connection*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ceph_connection *VAR_1)
{
 FUNC_4("prepare_write_seq %p %llu -> %llu\n", VAR_1,
      VAR_1->in_seq_acked, VAR_1->in_seq);
 VAR_1->in_seq_acked = VAR_1->in_seq;

 FUNC_2(VAR_1);

 VAR_1->out_temp_ack = FUNC_3(VAR_1->in_seq_acked);
 FUNC_1(VAR_1, sizeof (VAR_1->out_temp_ack),
    &VAR_1->out_temp_ack);

 FUNC_0(VAR_1, VAR_0);
}
