
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_msg_data_cursor {int page_offset; unsigned short page_count; int last_piece; int resid; scalar_t__ page_index; struct ceph_msg_data* data; } ;
struct ceph_msg_data {scalar_t__ type; int alignment; scalar_t__ length; int pages; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ceph_msg_data_cursor *VAR_5,
     size_t VAR_6)
{
 struct ceph_msg_data *VAR_7 = VAR_5->data;
 int VAR_8;

 FUNC_0(VAR_7->type != VAR_0);

 FUNC_0(!VAR_7->pages);
 FUNC_0(!VAR_7->length);

 VAR_5->resid = FUNC_2(VAR_6, VAR_7->length);
 VAR_8 = FUNC_1(VAR_7->alignment, (u64)VAR_7->length);
 VAR_5->page_offset = VAR_7->alignment & ~VAR_1;
 VAR_5->page_index = 0;
 FUNC_0(VAR_8 > (int)VAR_4);
 VAR_5->page_count = (unsigned short)VAR_8;
 FUNC_0(VAR_6 > VAR_3 - VAR_5->page_offset);
 VAR_5->last_piece = VAR_5->page_offset + VAR_5->resid <= VAR_2;
}
