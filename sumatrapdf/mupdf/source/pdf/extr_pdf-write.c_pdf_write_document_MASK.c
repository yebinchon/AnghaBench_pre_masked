
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* out; int member_0; } ;
typedef TYPE_1__ pdf_write_state ;
struct TYPE_16__ {scalar_t__ do_encrypt; scalar_t__ do_incremental; scalar_t__ do_linear; scalar_t__ do_garbage; } ;
typedef TYPE_2__ pdf_write_options ;
struct TYPE_17__ {scalar_t__ repair_attempted; } ;
typedef TYPE_3__ pdf_document ;
struct TYPE_18__ {int as_stream; } ;
typedef TYPE_4__ fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_2__*) ;

void FUNC_4(fz_context *VAR_3, pdf_document *VAR_4, fz_output *VAR_5, pdf_write_options *VAR_6)
{
 pdf_write_options VAR_7 = VAR_2;
 pdf_write_state VAR_8 = { 0 };

 if (!VAR_4 || !VAR_5)
  return;

 if (!VAR_6)
  VAR_6 = &VAR_7;

 if (VAR_6->do_incremental && VAR_4->repair_attempted)
  FUNC_1(VAR_3, VAR_0, "Can't do incremental writes on a repaired file");
 if (VAR_6->do_incremental && VAR_6->do_garbage)
  FUNC_1(VAR_3, VAR_0, "Can't do incremental writes with garbage collection");
 if (VAR_6->do_incremental && VAR_6->do_linear)
  FUNC_1(VAR_3, VAR_0, "Can't do incremental writes with linearisation");
 if (VAR_6->do_incremental && VAR_6->do_encrypt != VAR_1)
  FUNC_1(VAR_3, VAR_0, "Can't do incremental writes when changing encryption");
 if (FUNC_2(VAR_3, VAR_4) && !VAR_5->as_stream)
  FUNC_1(VAR_3, VAR_0, "Can't write pdf that has unsaved sigs to a fz_output unless it supports fz_stream_from_output!");

 FUNC_3(VAR_3, VAR_4, VAR_6);

 VAR_8.out = VAR_5;

 FUNC_0(VAR_3, VAR_4, &VAR_8, VAR_6);
}
