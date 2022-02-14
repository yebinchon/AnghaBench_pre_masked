
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int start; scalar_t__ hintstream_len; int hints_length; scalar_t__ hints_shared_offset; int hints_s; scalar_t__ first_xref_entry_offset; int linear_t; scalar_t__ page_count; int linear_n; int linear_e; scalar_t__* ofs_list; scalar_t__ main_xref_offset; TYPE_2__* page_object_lists; int linear_o; int linear_h1; int linear_h0; scalar_t__ file_len; int linear_l; } ;
typedef TYPE_3__ pdf_write_state ;
typedef int pdf_document ;
typedef scalar_t__ int64_t ;
typedef int fz_context ;
struct TYPE_6__ {TYPE_1__** page; } ;
struct TYPE_5__ {scalar_t__* object; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, pdf_write_state *VAR_2)
{
 int64_t VAR_3;
 FUNC_0(VAR_0, VAR_2->linear_l, VAR_2->file_len);

 FUNC_0(VAR_0, VAR_2->linear_h0, VAR_2->ofs_list[FUNC_1(VAR_0, VAR_1)-1]);

 VAR_3 = (VAR_2->start == 1 ? VAR_2->main_xref_offset : VAR_2->ofs_list[1] + VAR_2->hintstream_len);
 FUNC_0(VAR_0, VAR_2->linear_h1, VAR_3 - VAR_2->ofs_list[FUNC_1(VAR_0, VAR_1)-1]);

 FUNC_0(VAR_0, VAR_2->linear_o, VAR_2->page_object_lists->page[0]->object[0]);




 VAR_3 = (VAR_2->start == 1 ? VAR_2->main_xref_offset : VAR_2->ofs_list[1] + VAR_2->hintstream_len);
 FUNC_0(VAR_0, VAR_2->linear_e, VAR_3);

 FUNC_0(VAR_0, VAR_2->linear_n, VAR_2->page_count);

 FUNC_0(VAR_0, VAR_2->linear_t, VAR_2->first_xref_entry_offset + VAR_2->hintstream_len);

 FUNC_0(VAR_0, VAR_2->hints_s, VAR_2->hints_shared_offset);

 FUNC_0(VAR_0, VAR_2->hints_length, VAR_2->hintstream_len);
}
