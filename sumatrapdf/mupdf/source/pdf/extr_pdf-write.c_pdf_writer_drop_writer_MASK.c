
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int out; int pdf; int resources; int contents; } ;
typedef TYPE_1__ pdf_writer ;
typedef int fz_document_writer ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_document_writer *VAR_1)
{
 pdf_writer *VAR_2 = (pdf_writer*)VAR_1;
 FUNC_0(VAR_0, VAR_2->contents);
 FUNC_3(VAR_0, VAR_2->resources);
 FUNC_2(VAR_0, VAR_2->pdf);
 FUNC_1(VAR_0, VAR_2->out);
}
