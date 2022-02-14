
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msg_data_cursor {size_t total_resid; int data; } ;
struct ceph_msg {size_t data_length; int data; int num_data_items; struct ceph_msg_data_cursor cursor; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_msg_data_cursor*) ;

__attribute__((used)) static void FUNC_2(struct ceph_msg *VAR_0, size_t VAR_1)
{
 struct ceph_msg_data_cursor *VAR_2 = &VAR_0->cursor;

 FUNC_0(!VAR_1);
 FUNC_0(VAR_1 > VAR_0->data_length);
 FUNC_0(!VAR_0->num_data_items);

 VAR_2->total_resid = VAR_1;
 VAR_2->data = VAR_0->data;

 FUNC_1(VAR_2);
}
