
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_osd_request {unsigned int r_num_ops; TYPE_1__* r_ops; } ;
struct ceph_osd_data {int dummy; } ;
struct TYPE_2__ {struct ceph_osd_data raw_data_in; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct ceph_osd_data *
FUNC_1(struct ceph_osd_request *VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->r_num_ops);

 return &VAR_0->r_ops[VAR_1].raw_data_in;
}
