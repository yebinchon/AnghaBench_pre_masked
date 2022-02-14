
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work_func_t ;
struct linger_work {int lreq; int pending_item; int work; } ;
struct ceph_osd_linger_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct linger_work* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ceph_osd_linger_request*) ;

__attribute__((used)) static struct linger_work *FUNC_4(struct ceph_osd_linger_request *VAR_1,
           work_func_t VAR_2)
{
 struct linger_work *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->work, VAR_2);
 FUNC_0(&VAR_3->pending_item);
 VAR_3->lreq = FUNC_3(VAR_1);

 return VAR_3;
}
