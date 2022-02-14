
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ceph_msg_data_cursor {size_t resid; int last_piece; TYPE_1__* data; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (int) ;





 size_t VAR_0 ;
 struct page* FUNC_1 (struct ceph_msg_data_cursor*,size_t*,size_t*) ;
 struct page* FUNC_2 (struct ceph_msg_data_cursor*,size_t*,size_t*) ;
 struct page* FUNC_3 (struct ceph_msg_data_cursor*,size_t*,size_t*) ;
 struct page* FUNC_4 (struct ceph_msg_data_cursor*,size_t*,size_t*) ;

__attribute__((used)) static struct page *FUNC_5(struct ceph_msg_data_cursor *VAR_1,
     size_t *VAR_2, size_t *VAR_3,
     bool *VAR_4)
{
 struct page *VAR_5;

 switch (VAR_1->data->type) {
 case 129:
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);
  break;





 case 131:
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
 default:
  VAR_5 = ((void*)0);
  break;
 }

 FUNC_0(!VAR_5);
 FUNC_0(*VAR_2 + *VAR_3 > VAR_0);
 FUNC_0(!*VAR_3);
 FUNC_0(*VAR_3 > VAR_1->resid);
 if (VAR_4)
  *VAR_4 = VAR_1->last_piece;

 return VAR_5;
}
