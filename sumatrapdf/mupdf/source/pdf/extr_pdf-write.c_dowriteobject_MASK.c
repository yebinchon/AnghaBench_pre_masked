
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float type; int gen; } ;
typedef TYPE_1__ pdf_xref_entry ;
struct TYPE_7__ {int* gen_list; int do_garbage; int crypt_object_number; scalar_t__* use_list; int out; int * ofs_list; int do_incremental; } ;
typedef TYPE_2__ pdf_write_state ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,TYPE_2__*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_document *VAR_1, pdf_write_state *VAR_2, int VAR_3, int VAR_4)
{
 pdf_xref_entry *VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_5->type == 'f')
  VAR_2->gen_list[VAR_3] = VAR_5->gen;
 if (VAR_5->type == 'n')
  VAR_2->gen_list[VAR_3] = VAR_5->gen;
 if (VAR_5->type == 'o')
  VAR_2->gen_list[VAR_3] = 0;






 if (VAR_2->do_garbage >= 2)
  VAR_2->gen_list[VAR_3] = (VAR_3 == 0 ? 65535 : 0);

 if (VAR_2->do_garbage && !VAR_2->use_list[VAR_3])
  return;

 if (VAR_5->type == 'n' || VAR_5->type == 'o')
 {
  if (VAR_4 > 0)
   FUNC_1(VAR_0, VAR_2->out, VAR_2->ofs_list[VAR_3]);
  if (!VAR_2->do_incremental || FUNC_3(VAR_0, VAR_1, VAR_3))
  {
   VAR_2->ofs_list[VAR_3] = FUNC_0(VAR_0, VAR_2->out);
   FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_2->gen_list[VAR_3], 1, VAR_3 == VAR_2->crypt_object_number);
  }
 }
 else
  VAR_2->use_list[VAR_3] = 0;
}
