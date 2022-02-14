
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_msg_data_cursor {size_t page_offset; size_t resid; scalar_t__ page_index; scalar_t__ page_count; int last_piece; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct ceph_msg_data_cursor *VAR_3,
      size_t VAR_4)
{
 FUNC_0(VAR_3->data->type != VAR_0);

 FUNC_0(VAR_3->page_offset + VAR_4 > VAR_2);



 VAR_3->resid -= VAR_4;
 VAR_3->page_offset = (VAR_3->page_offset + VAR_4) & ~VAR_1;
 if (!VAR_4 || VAR_3->page_offset)
  return 0;

 if (!VAR_3->resid)
  return 0;



 FUNC_0(VAR_3->page_index >= VAR_3->page_count);
 VAR_3->page_index++;
 VAR_3->last_piece = VAR_3->resid <= VAR_2;

 return 1;
}
