
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_lexbuf ;
typedef int pdf_document ;
struct TYPE_4__ {int * cookie; int * buf; int * rdb; int * doc; } ;
typedef TYPE_1__ pdf_csi ;
typedef int fz_cookie ;
typedef int fz_context ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_csi *VAR_1, pdf_document *VAR_2, pdf_obj *VAR_3, pdf_lexbuf *VAR_4, fz_cookie *VAR_5)
{
 FUNC_0(VAR_1, 0, sizeof *VAR_1);
 VAR_1->doc = VAR_2;
 VAR_1->rdb = VAR_3;
 VAR_1->buf = VAR_4;
 VAR_1->cookie = VAR_5;
}
