
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ceph_msg_data {size_t length; size_t alignment; struct page** pages; int type; } ;
struct ceph_msg {size_t data_length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct ceph_msg_data* FUNC_1 (struct ceph_msg*) ;

void FUNC_2(struct ceph_msg *VAR_2, struct page **VAR_3,
  size_t VAR_4, size_t VAR_5)
{
 struct ceph_msg_data *VAR_6;

 FUNC_0(!VAR_3);
 FUNC_0(!VAR_4);

 VAR_6 = FUNC_1(VAR_2);
 VAR_6->type = VAR_0;
 VAR_6->pages = VAR_3;
 VAR_6->length = VAR_4;
 VAR_6->alignment = VAR_5 & ~VAR_1;

 VAR_2->data_length += VAR_4;
}
