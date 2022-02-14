
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float type; int ofs; int gen; int num; } ;
typedef TYPE_1__ pdf_xref_entry ;
struct TYPE_7__ {int has_xref_streams; } ;
typedef TYPE_2__ pdf_document ;
typedef int int64_t ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 TYPE_1__* FUNC_3 (int *,TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_2, pdf_document *VAR_3, fz_stream *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 pdf_xref_entry *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_5 < 0 || VAR_5 > VAR_1 || VAR_6 < 0 || VAR_6 > VAR_1 || VAR_5 + VAR_6 - 1 > VAR_1)
  FUNC_2(VAR_2, VAR_0, "xref subsection object numbers are out of range");

 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6);
 for (VAR_11 = VAR_5; VAR_11 < VAR_5 + VAR_6; VAR_11++)
 {
  pdf_xref_entry *VAR_13 = &VAR_10[VAR_11-VAR_5];
  int VAR_14 = 0;
  int64_t VAR_15 = 0;
  int VAR_16 = 0;

  if (FUNC_0(VAR_2, VAR_4))
   FUNC_2(VAR_2, VAR_0, "truncated xref stream");

  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
   VAR_14 = (VAR_14 << 8) + FUNC_1(VAR_2, VAR_4);
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
   VAR_15 = (VAR_15 << 8) + FUNC_1(VAR_2, VAR_4);
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
   VAR_16 = (VAR_16 << 8) + FUNC_1(VAR_2, VAR_4);

  if (!VAR_13->type)
  {
   int VAR_17 = VAR_7 ? VAR_14 : 1;
   VAR_13->type = VAR_17 == 0 ? 'f' : VAR_17 == 1 ? 'n' : VAR_17 == 2 ? 'o' : 0;
   VAR_13->ofs = VAR_8 ? VAR_15 : 0;
   VAR_13->gen = VAR_9 ? VAR_16 : 0;
   VAR_13->num = VAR_11;
  }
 }

 VAR_3->has_xref_streams = 1;
}
