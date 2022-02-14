
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int err; } ;
struct linger_work {TYPE_1__ error; } ;
struct ceph_osd_linger_request {int last_error; } ;


 int VAR_0 ;
 struct linger_work* FUNC_0 (struct ceph_osd_linger_request*,int ) ;
 int FUNC_1 (struct linger_work*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct ceph_osd_linger_request *VAR_1)
{
 struct linger_work *VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_2) {
  FUNC_2("failed to allocate error-lwork\n");
  return;
 }

 VAR_2->error.err = VAR_1->last_error;
 FUNC_1(VAR_2);
}
