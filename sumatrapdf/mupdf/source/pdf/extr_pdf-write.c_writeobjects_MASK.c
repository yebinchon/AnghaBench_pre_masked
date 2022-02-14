
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int start; scalar_t__ hintstream_len; scalar_t__* ofs_list; int out; scalar_t__ main_xref_offset; scalar_t__ do_linear; scalar_t__ first_xref_offset; int do_incremental; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int pdf_document ;
typedef scalar_t__ int64_t ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,TYPE_1__*,int,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*,int,int) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,TYPE_1__*,int,int,int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_0, pdf_document *VAR_1, pdf_write_state *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_6(VAR_0, VAR_1);

 if (!VAR_2->do_incremental)
 {
  int VAR_6 = FUNC_5(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_2->out, "%%PDF-%d.%d\n", VAR_6 / 10, VAR_6 % 10);
  FUNC_3(VAR_0, VAR_2->out, "%\xC2\xB5\xC2\xB6\n\n");
 }

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->start, VAR_3);

 if (VAR_2->do_linear)
 {

  if (VAR_3 == 0)
   VAR_2->first_xref_offset = FUNC_1(VAR_0, VAR_2->out);
  else
   FUNC_4(VAR_0, VAR_2->out, VAR_2->first_xref_offset);
  FUNC_7(VAR_0, VAR_1, VAR_2, VAR_2->start, FUNC_6(VAR_0, VAR_1), 1, VAR_2->main_xref_offset, 0);
 }

 for (VAR_4 = VAR_2->start+1; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
 if (VAR_2->do_linear && VAR_3 == 1)
 {
  int64_t VAR_7 = (VAR_2->start == 1 ? VAR_2->main_xref_offset : VAR_2->ofs_list[1] + VAR_2->hintstream_len);
  FUNC_4(VAR_0, VAR_2->out, VAR_7);
 }
 for (VAR_4 = 1; VAR_4 < VAR_2->start; VAR_4++)
 {
  if (VAR_3 == 1)
   VAR_2->ofs_list[VAR_4] += VAR_2->hintstream_len;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
 }
}
