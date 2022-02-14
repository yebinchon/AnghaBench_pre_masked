
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stopping; } ;
struct ceph_client {int options; TYPE_1__ msgr; int monc; int osdc; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ceph_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,struct ceph_client*) ;
 int FUNC_7 (struct ceph_client*) ;

void FUNC_8(struct ceph_client *VAR_0)
{
 FUNC_6("destroy_client %p\n", VAR_0);

 FUNC_0(&VAR_0->msgr.stopping, 1);


 FUNC_5(&VAR_0->osdc);
 FUNC_4(&VAR_0->monc);
 FUNC_3(&VAR_0->msgr);

 FUNC_1(VAR_0);

 FUNC_2(VAR_0->options);

 FUNC_7(VAR_0);
 FUNC_6("destroy_client %p done\n", VAR_0);
}
