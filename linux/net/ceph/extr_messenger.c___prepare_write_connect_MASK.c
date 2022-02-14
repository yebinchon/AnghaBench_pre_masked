
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_connection {scalar_t__ out_more; TYPE_1__* auth; int out_connect; } ;
struct TYPE_2__ {int authorizer_buf_len; int * authorizer_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_connection*,int ) ;
 int FUNC_1 (struct ceph_connection*,int,int *) ;

__attribute__((used)) static void FUNC_2(struct ceph_connection *VAR_1)
{
 FUNC_1(VAR_1, sizeof(VAR_1->out_connect), &VAR_1->out_connect);
 if (VAR_1->auth)
  FUNC_1(VAR_1, VAR_1->auth->authorizer_buf_len,
     VAR_1->auth->authorizer_buf);

 VAR_1->out_more = 0;
 FUNC_0(VAR_1, VAR_0);
}
