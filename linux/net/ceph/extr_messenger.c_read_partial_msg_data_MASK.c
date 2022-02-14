
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct page {int dummy; } ;
struct ceph_msg_data_cursor {int resid; scalar_t__ total_resid; } ;
struct ceph_msg {int num_data_items; struct ceph_msg_data_cursor cursor; } ;
struct ceph_connection {void* in_data_crc; int sock; int msgr; struct ceph_msg* in_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,struct page*,size_t,int) ;
 int FUNC_1 (struct ceph_msg_data_cursor*,size_t) ;
 struct page* FUNC_2 (struct ceph_msg_data_cursor*,size_t*,size_t*,int *) ;
 int FUNC_3 (int ,struct page*,size_t,size_t) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ceph_connection *VAR_2)
{
 struct ceph_msg *VAR_3 = VAR_2->in_msg;
 struct ceph_msg_data_cursor *VAR_4 = &VAR_3->cursor;
 bool VAR_5 = !FUNC_4(FUNC_5(VAR_2->msgr), VAR_1);
 struct page *VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 if (!VAR_3->num_data_items)
  return -VAR_0;

 if (VAR_5)
  VAR_9 = VAR_2->in_data_crc;
 while (VAR_4->total_resid) {
  if (!VAR_4->resid) {
   FUNC_1(VAR_4, 0);
   continue;
  }

  VAR_6 = FUNC_2(VAR_4, &VAR_7, &VAR_8, ((void*)0));
  VAR_10 = FUNC_3(VAR_2->sock, VAR_6, VAR_7, VAR_8);
  if (VAR_10 <= 0) {
   if (VAR_5)
    VAR_2->in_data_crc = VAR_9;

   return VAR_10;
  }

  if (VAR_5)
   VAR_9 = FUNC_0(VAR_9, VAR_6, VAR_7, VAR_10);
  FUNC_1(VAR_4, (size_t)VAR_10);
 }
 if (VAR_5)
  VAR_2->in_data_crc = VAR_9;

 return 1;
}
