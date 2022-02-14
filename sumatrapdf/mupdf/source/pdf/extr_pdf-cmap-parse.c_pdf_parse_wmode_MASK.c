
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pdf_token ;
struct TYPE_4__ {int i; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int pdf_cmap ;
typedef int fz_stream ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, pdf_cmap *VAR_2, fz_stream *VAR_3, pdf_lexbuf *VAR_4)
{
 pdf_token VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);

 if (VAR_5 == VAR_0)
  FUNC_2(VAR_1, VAR_2, VAR_4->i);
 else
  FUNC_0(VAR_1, "expected integer after WMode in cmap");
}
