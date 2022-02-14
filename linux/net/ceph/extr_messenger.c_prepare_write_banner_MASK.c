
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_connection {scalar_t__ out_more; TYPE_1__* msgr; } ;
struct TYPE_2__ {int my_enc_addr; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_connection*,int ) ;
 int FUNC_1 (struct ceph_connection*,int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ceph_connection *VAR_2)
{
 FUNC_1(VAR_2, FUNC_2(VAR_0), VAR_0);
 FUNC_1(VAR_2, sizeof (VAR_2->msgr->my_enc_addr),
     &VAR_2->msgr->my_enc_addr);

 VAR_2->out_more = 0;
 FUNC_0(VAR_2, VAR_1);
}
