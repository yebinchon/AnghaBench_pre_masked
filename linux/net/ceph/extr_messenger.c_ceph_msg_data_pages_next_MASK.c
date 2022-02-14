
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ceph_msg_data_cursor {size_t page_index; size_t page_count; size_t page_offset; size_t resid; scalar_t__ last_piece; struct ceph_msg_data* data; } ;
struct ceph_msg_data {scalar_t__ type; struct page** pages; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static struct page *
FUNC_1(struct ceph_msg_data_cursor *VAR_2,
     size_t *VAR_3, size_t *VAR_4)
{
 struct ceph_msg_data *VAR_5 = VAR_2->data;

 FUNC_0(VAR_5->type != VAR_0);

 FUNC_0(VAR_2->page_index >= VAR_2->page_count);
 FUNC_0(VAR_2->page_offset >= VAR_1);

 *VAR_3 = VAR_2->page_offset;
 if (VAR_2->last_piece)
  *VAR_4 = VAR_2->resid;
 else
  *VAR_4 = VAR_1 - *VAR_3;

 return VAR_5->pages[VAR_2->page_index];
}
