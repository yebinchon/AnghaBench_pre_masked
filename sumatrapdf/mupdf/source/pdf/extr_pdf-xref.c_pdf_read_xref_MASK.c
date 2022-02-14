
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_lexbuf ;
struct TYPE_5__ {int file; } ;
typedef TYPE_1__ pdf_document ;
typedef int int64_t ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (int *,TYPE_1__*,int *) ;
 int * FUNC_7 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static pdf_obj *
FUNC_8(fz_context *VAR_2, pdf_document *VAR_3, int64_t VAR_4, pdf_lexbuf *VAR_5)
{
 pdf_obj *VAR_6;
 int VAR_7;

 FUNC_2(VAR_2, VAR_3->file, VAR_4, VAR_1);

 while (FUNC_5(FUNC_0(VAR_2, VAR_3->file)))
  FUNC_1(VAR_2, VAR_3->file);

 VAR_7 = FUNC_0(VAR_2, VAR_3->file);
 if (VAR_7 == 'x')
  VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_5);
 else if (FUNC_4(VAR_7))
  VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_5);
 else
  FUNC_3(VAR_2, VAR_0, "cannot recognize xref format");

 return VAR_6;
}
