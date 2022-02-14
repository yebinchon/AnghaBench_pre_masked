
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int global_seq; int connect_seq; scalar_t__ tag; int authorizer_len; } ;
struct ceph_connection {TYPE_2__ in_reply; TYPE_1__* auth; int in_base_pos; } ;
struct TYPE_3__ {int authorizer_reply_buf_len; TYPE_2__* authorizer_reply_buf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ceph_connection*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct ceph_connection*,int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct ceph_connection *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 FUNC_0("read_partial_connect %p at %d\n", VAR_1, VAR_1->in_base_pos);

 VAR_2 = sizeof (VAR_1->in_reply);
 VAR_3 = VAR_2;
 VAR_4 = FUNC_3(VAR_1, VAR_3, VAR_2, &VAR_1->in_reply);
 if (VAR_4 <= 0)
  goto out;

 if (VAR_1->auth) {
  VAR_2 = FUNC_1(VAR_1->in_reply.authorizer_len);
  if (VAR_2 > VAR_1->auth->authorizer_reply_buf_len) {
   FUNC_2("authorizer reply too big: %d > %zu\n", VAR_2,
          VAR_1->auth->authorizer_reply_buf_len);
   VAR_4 = -VAR_0;
   goto out;
  }

  VAR_3 += VAR_2;
  VAR_4 = FUNC_3(VAR_1, VAR_3, VAR_2,
       VAR_1->auth->authorizer_reply_buf);
  if (VAR_4 <= 0)
   goto out;
 }

 FUNC_0("read_partial_connect %p tag %d, con_seq = %u, g_seq = %u\n",
      VAR_1, (int)VAR_1->in_reply.tag,
      FUNC_1(VAR_1->in_reply.connect_seq),
      FUNC_1(VAR_1->in_reply.global_seq));
out:
 return VAR_4;
}
