
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int do_ascii; scalar_t__ do_sanitize; scalar_t__ do_clean; } ;
typedef TYPE_1__ pdf_write_options ;
struct TYPE_8__ {int save_in_progress; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_2__*,scalar_t__,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, pdf_write_options *VAR_2)
{

 if (VAR_2->do_clean || VAR_2->do_sanitize)
  FUNC_0(VAR_0, VAR_1, VAR_2->do_sanitize, VAR_2->do_ascii);
 VAR_1->save_in_progress = 1;

 FUNC_1(VAR_0, VAR_1);
}
