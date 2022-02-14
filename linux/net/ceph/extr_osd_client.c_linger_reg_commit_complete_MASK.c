
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_linger_request {int reg_commit_error; int reg_commit_wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ceph_osd_linger_request *VAR_0,
           int VAR_1)
{
 if (!FUNC_1(&VAR_0->reg_commit_wait)) {
  VAR_0->reg_commit_error = (VAR_1 <= 0 ? VAR_1 : 0);
  FUNC_0(&VAR_0->reg_commit_wait);
 }
}
