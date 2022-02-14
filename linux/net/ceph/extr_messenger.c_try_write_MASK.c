
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int state; int sock; int in_msg; char* error_msg; scalar_t__ in_seq; scalar_t__ in_seq_acked; int out_queue; int * out_msg; scalar_t__ out_msg_done; scalar_t__ out_skip; scalar_t__ out_kvec_left; int out_kvec_bytes; int in_tag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_connection*) ;
 int FUNC_3 (struct ceph_connection*,int ) ;
 scalar_t__ FUNC_4 (struct ceph_connection*,int ) ;
 int FUNC_5 (struct ceph_connection*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ceph_connection*) ;
 int FUNC_9 (struct ceph_connection*) ;
 int FUNC_10 (struct ceph_connection*) ;
 int FUNC_11 (struct ceph_connection*) ;
 int FUNC_12 (struct ceph_connection*) ;
 int FUNC_13 (struct ceph_connection*) ;
 int FUNC_14 (struct ceph_connection*) ;
 int FUNC_15 (struct ceph_connection*) ;

__attribute__((used)) static int FUNC_16(struct ceph_connection *VAR_7)
{
 int VAR_8 = 1;

 FUNC_6("try_write start %p state %lu\n", VAR_7, VAR_7->state);
 if (VAR_7->state != VAR_6 &&
     VAR_7->state != VAR_3 &&
     VAR_7->state != VAR_4 &&
     VAR_7->state != VAR_5)
  return 0;


 if (VAR_7->state == VAR_6) {
  FUNC_0(VAR_7->sock);
  VAR_7->state = VAR_3;

  FUNC_5(VAR_7);
  FUNC_10(VAR_7);
  FUNC_8(VAR_7);

  FUNC_0(VAR_7->in_msg);
  VAR_7->in_tag = VAR_0;
  FUNC_6("try_write initiating connect on %p new state %lu\n",
       VAR_7, VAR_7->state);
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 < 0) {
   VAR_7->error_msg = "connect error";
   goto out;
  }
 }

more:
 FUNC_6("try_write out_kvec_bytes %d\n", VAR_7->out_kvec_bytes);
 FUNC_0(!VAR_7->sock);


 if (VAR_7->out_kvec_left) {
  VAR_8 = FUNC_13(VAR_7);
  if (VAR_8 <= 0)
   goto out;
 }
 if (VAR_7->out_skip) {
  VAR_8 = FUNC_15(VAR_7);
  if (VAR_8 <= 0)
   goto out;
 }


 if (VAR_7->out_msg) {
  if (VAR_7->out_msg_done) {
   FUNC_1(VAR_7->out_msg);
   VAR_7->out_msg = ((void*)0);
   goto do_next;
  }

  VAR_8 = FUNC_14(VAR_7);
  if (VAR_8 == 1)
   goto more;
  if (VAR_8 == 0)
   goto out;
  if (VAR_8 < 0) {
   FUNC_6("try_write write_partial_message_data err %d\n",
        VAR_8);
   goto out;
  }
 }

do_next:
 if (VAR_7->state == VAR_5) {
  if (FUNC_4(VAR_7, VAR_1)) {
   FUNC_11(VAR_7);
   goto more;
  }

  if (!FUNC_7(&VAR_7->out_queue)) {
   FUNC_12(VAR_7);
   goto more;
  }
  if (VAR_7->in_seq > VAR_7->in_seq_acked) {
   FUNC_9(VAR_7);
   goto more;
  }
 }


 FUNC_3(VAR_7, VAR_2);
 FUNC_6("try_write nothing else to write.\n");
 VAR_8 = 0;
out:
 FUNC_6("try_write done on %p ret %d\n", VAR_7, VAR_8);
 return VAR_8;
}
