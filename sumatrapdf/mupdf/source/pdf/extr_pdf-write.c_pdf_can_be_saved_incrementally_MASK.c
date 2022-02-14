
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ has_old_style_xrefs; scalar_t__ has_xref_streams; scalar_t__ redacted; scalar_t__ repair_attempted; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;



int FUNC_0(fz_context *VAR_0, pdf_document *VAR_1)
{
 if (VAR_1->repair_attempted)
  return 0;
 if (VAR_1->redacted)
  return 0;
 if (VAR_1->has_xref_streams && VAR_1->has_old_style_xrefs)
  return 0;
 return 1;
}
