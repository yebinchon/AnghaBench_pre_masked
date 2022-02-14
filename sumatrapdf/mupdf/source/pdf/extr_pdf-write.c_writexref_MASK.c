
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int out; int do_ascii; int do_tight; scalar_t__ do_incremental; int first_xref_entry_offset; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int pdf_obj ;
struct TYPE_11__ {int startxref; scalar_t__ has_xref_streams; } ;
typedef TYPE_2__ pdf_document ;
typedef int int64_t ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,int) ;
 int FUNC_4 (int *,int ,char*) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int FUNC_8 (int *,int *,int ,int) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int ) ;
 int * FUNC_11 (int *,TYPE_2__*,int) ;
 int * FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ,int *,int ,int ) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_15 (int *,TYPE_2__*,int) ;
 int FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (int *,TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_18(fz_context *VAR_6, pdf_document *VAR_7, pdf_write_state *VAR_8, int VAR_9, int VAR_10, int VAR_11, int64_t VAR_12, int64_t VAR_13)
{
 pdf_obj *VAR_14 = ((void*)0);
 pdf_obj *VAR_15;
 pdf_obj *VAR_16 = ((void*)0);

 FUNC_4(VAR_6, VAR_8->out, "xref\n");
 VAR_8->first_xref_entry_offset = FUNC_1(VAR_6, VAR_8->out);

 if (VAR_8->do_incremental)
 {
  int VAR_17 = VAR_9;
  int VAR_18;

  while (VAR_17 < VAR_10)
  {
   while (VAR_17 < VAR_10 && !FUNC_15(VAR_6, VAR_7, VAR_17))
    VAR_17++;

   VAR_18 = VAR_17;
   while (VAR_18 < VAR_10 && FUNC_15(VAR_6, VAR_7, VAR_18))
    VAR_18++;

   if (VAR_17 < VAR_18)
    FUNC_17(VAR_6, VAR_8, VAR_17, VAR_18);

   VAR_17 = VAR_18;
  }
 }
 else
 {
  FUNC_17(VAR_6, VAR_8, VAR_9, VAR_10);
 }

 FUNC_4(VAR_6, VAR_8->out, "\n");

 FUNC_2(VAR_14);

 if (VAR_8->do_incremental)
 {
  VAR_14 = FUNC_10(VAR_6, FUNC_14(VAR_6, VAR_7));
  FUNC_8(VAR_6, VAR_14, FUNC_0(VAR_5), FUNC_16(VAR_6, VAR_7));
  FUNC_8(VAR_6, VAR_14, FUNC_0(VAR_3), VAR_7->startxref);
  VAR_7->startxref = VAR_13;
 }
 else
 {
  VAR_14 = FUNC_11(VAR_6, VAR_7, 5);

  VAR_16 = FUNC_12(VAR_6, VAR_10);
  FUNC_7(VAR_6, VAR_14, FUNC_0(VAR_5), VAR_16);

  if (VAR_11)
  {
   VAR_15 = FUNC_5(VAR_6, FUNC_14(VAR_6, VAR_7), FUNC_0(VAR_2));
   if (VAR_15)
    FUNC_6(VAR_6, VAR_14, FUNC_0(VAR_2), VAR_15);

   VAR_15 = FUNC_5(VAR_6, FUNC_14(VAR_6, VAR_7), FUNC_0(VAR_4));
   if (VAR_15)
    FUNC_6(VAR_6, VAR_14, FUNC_0(VAR_4), VAR_15);

   VAR_15 = FUNC_5(VAR_6, FUNC_14(VAR_6, VAR_7), FUNC_0(VAR_1));
   if (VAR_15)
    FUNC_6(VAR_6, VAR_14, FUNC_0(VAR_1), VAR_15);

   VAR_15 = FUNC_5(VAR_6, FUNC_14(VAR_6, VAR_7), FUNC_0(VAR_0));
   if (VAR_15)
    FUNC_6(VAR_6, VAR_14, FUNC_0(VAR_0), VAR_15);
  }
  if (VAR_12 != 0)
  {
   VAR_16 = FUNC_12(VAR_6, VAR_12);
   FUNC_7(VAR_6, VAR_14, FUNC_0(VAR_3), VAR_16);
  }
 }

 FUNC_4(VAR_6, VAR_8->out, "trailer\n");

 FUNC_13(VAR_6, VAR_8->out, VAR_14, VAR_8->do_tight, VAR_8->do_ascii);
 FUNC_4(VAR_6, VAR_8->out, "\n");

 FUNC_9(VAR_6, VAR_14);

 FUNC_3(VAR_6, VAR_8->out, "startxref\n%lu\n%%%%EOF\n", VAR_13);

 VAR_7->has_xref_streams = 0;
}
