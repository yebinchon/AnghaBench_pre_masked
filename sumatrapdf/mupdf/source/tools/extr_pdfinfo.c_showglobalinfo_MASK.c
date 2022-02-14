
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_3__ {int pagecount; int * doc; int * out; } ;
typedef TYPE_1__ globals ;
typedef int fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,char*,int,...) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_2, globals *VAR_3)
{
 pdf_obj *VAR_4;
 fz_output *VAR_5 = VAR_3->out;
 pdf_document *VAR_6 = VAR_3->doc;
 int VAR_7 = FUNC_7(VAR_2, VAR_6);

 FUNC_1(VAR_2, VAR_5, "\nPDF-%d.%d\n", VAR_7 / 10, VAR_7 % 10);

 VAR_4 = FUNC_2(VAR_2, FUNC_6(VAR_2, VAR_6), FUNC_0(VAR_1));
 if (VAR_4)
 {
  FUNC_1(VAR_2, VAR_5, "Info object (%d 0 R):\n", FUNC_5(VAR_2, VAR_4));
  FUNC_3(VAR_2, VAR_5, FUNC_4(VAR_2, VAR_4), 1, 1);
 }

 VAR_4 = FUNC_2(VAR_2, FUNC_6(VAR_2, VAR_6), FUNC_0(VAR_0));
 if (VAR_4)
 {
  FUNC_1(VAR_2, VAR_5, "\nEncryption object (%d 0 R):\n", FUNC_5(VAR_2, VAR_4));
  FUNC_3(VAR_2, VAR_5, FUNC_4(VAR_2, VAR_4), 1, 1);
 }

 FUNC_1(VAR_2, VAR_5, "\nPages: %d\n\n", VAR_3->pagecount);
}
