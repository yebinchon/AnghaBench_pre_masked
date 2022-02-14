
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format; int out; } ;
typedef TYPE_1__ fz_text_writer ;
typedef int fz_document_writer ;
typedef int fz_context ;





 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_document_writer *VAR_1)
{
 fz_text_writer *VAR_2 = (fz_text_writer*)VAR_1;
 switch (VAR_2->format)
 {
 case 130:
  FUNC_1(VAR_0, VAR_2->out);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_2->out);
  break;
 case 129:
  FUNC_3(VAR_0, VAR_2->out, "</document>\n");
  break;
 }
 FUNC_0(VAR_0, VAR_2->out);
}
