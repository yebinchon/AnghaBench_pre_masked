
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ pdf_token ;
struct TYPE_10__ {int len; int * scratch; } ;
typedef TYPE_1__ pdf_lexbuf ;
struct TYPE_11__ {int cmap_name; } ;
typedef TYPE_2__ pdf_cmap ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_2__*,int,int*,int) ;
 int FUNC_7 (int *,TYPE_2__*,int,int,int) ;
 int FUNC_8 (int *,TYPE_2__*,int *,TYPE_1__*,int,int) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_4, pdf_cmap *VAR_5, fz_stream *VAR_6, pdf_lexbuf *VAR_7)
{
 pdf_token VAR_8;
 int VAR_9, VAR_10, VAR_11;

 while (1)
 {
  VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_7);

  if (VAR_8 == VAR_1 && !FUNC_9(VAR_7->scratch, "endbfrange"))
   return;

  else if (VAR_8 != VAR_3)
   FUNC_1(VAR_4, VAR_0, "expected string or endbfrange");

  VAR_9 = FUNC_4(VAR_7->scratch, VAR_7->len);

  VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_7);
  if (VAR_8 != VAR_3)
   FUNC_1(VAR_4, VAR_0, "expected string");

  VAR_10 = FUNC_4(VAR_7->scratch, VAR_7->len);
  if (VAR_9 < 0 || VAR_9 > 65535 || VAR_10 < 0 || VAR_10 > 65535 || VAR_9 > VAR_10)
  {
   FUNC_2(VAR_4, "bf_range limits out of range in cmap %s", VAR_5->cmap_name);
   return;
  }

  VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_7);

  if (VAR_8 == VAR_3)
  {
   if (VAR_7->len == 2)
   {
    VAR_11 = FUNC_4(VAR_7->scratch, VAR_7->len);
    FUNC_7(VAR_4, VAR_5, VAR_9, VAR_10, VAR_11);
   }
   else
   {
    int VAR_12[256];
    int VAR_13;

    if (VAR_7->len / 2)
    {
     int VAR_14 = FUNC_0(VAR_7->len / 2, FUNC_3(VAR_12));
     for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
      VAR_12[VAR_13] = FUNC_4(&VAR_7->scratch[VAR_13 * 2], 2);

     while (VAR_9 <= VAR_10)
     {
      FUNC_6(VAR_4, VAR_5, VAR_9, VAR_12, VAR_13);
      VAR_12[VAR_13-1] ++;
      VAR_9 ++;
     }
    }
   }
  }

  else if (VAR_8 == VAR_2)
  {
   FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_10);
  }

  else
  {
   FUNC_1(VAR_4, VAR_0, "expected string or array or endbfrange");
  }
 }
}
