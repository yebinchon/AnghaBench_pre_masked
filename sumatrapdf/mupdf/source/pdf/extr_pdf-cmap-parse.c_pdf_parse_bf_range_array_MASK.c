
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

__attribute__((used)) static void
FUNC_6(fz_context *VAR_3, pdf_cmap *VAR_4, fz_stream *VAR_5, pdf_lexbuf *VAR_6, int VAR_7, int VAR_8)
{
 pdf_token VAR_9;
 int VAR_10[256];
 int VAR_11;

 while (1)
 {
  VAR_9 = FUNC_4(VAR_3, VAR_5, VAR_6);

  if (VAR_9 == VAR_1)
   return;


  else if (VAR_9 != VAR_2)
   FUNC_1(VAR_3, VAR_0, "expected string or ]");

  if (VAR_6->len / 2)
  {
   int VAR_12 = FUNC_0(VAR_6->len / 2, FUNC_2(VAR_10));
   for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
    VAR_10[VAR_11] = FUNC_3(&VAR_6->scratch[VAR_11 * 2], 2);

   FUNC_5(VAR_3, VAR_4, VAR_7, VAR_10, VAR_6->len / 2);
  }

  VAR_7 ++;
 }
}
