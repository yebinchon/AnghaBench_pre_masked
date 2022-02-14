
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msg_data {int dummy; } ;
struct ceph_msg {scalar_t__ num_data_items; scalar_t__ max_data_items; struct ceph_msg_data* data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct ceph_msg_data *FUNC_1(struct ceph_msg *VAR_0)
{
 FUNC_0(VAR_0->num_data_items >= VAR_0->max_data_items);
 return &VAR_0->data[VAR_0->num_data_items++];
}
