
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pdf_token ;
struct TYPE_4__ {int len; int * scratch; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int pdf_cmap ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,int,int*,int) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_3, pdf_cmap *VAR_4, fz_stream *VAR_5, pdf_lexbuf *VAR_6)
{
 pdf_token VAR_7;
 int VAR_8[256];
 int VAR_9;
 int VAR_10;

 while (1)
 {
  VAR_7 = FUNC_4(VAR_3, VAR_5, VAR_6);

  if (VAR_7 == VAR_1 && !FUNC_6(VAR_6->scratch, "endbfchar"))
   return;

  else if (VAR_7 != VAR_2)
   FUNC_1(VAR_3, VAR_0, "expected string or endbfchar");

  VAR_9 = FUNC_3(VAR_6->scratch, VAR_6->len);

  VAR_7 = FUNC_4(VAR_3, VAR_5, VAR_6);

  if (VAR_7 != VAR_2)
   FUNC_1(VAR_3, VAR_0, "expected string");

  if (VAR_6->len / 2)
  {
   int VAR_11 = FUNC_0(VAR_6->len / 2, FUNC_2(VAR_8));
   for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
    VAR_8[VAR_10] = FUNC_3(&VAR_6->scratch[VAR_10 * 2], 2);
   FUNC_5(VAR_3, VAR_4, VAR_9, VAR_8, VAR_10);
  }
 }
}
