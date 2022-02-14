
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int codespace_len; TYPE_1__* codespace; } ;
typedef TYPE_2__ pdf_cmap ;
struct TYPE_4__ {int n; unsigned int low; unsigned int high; } ;



int
FUNC_0(pdf_cmap *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2, unsigned int *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5, VAR_6;
 int VAR_7 = VAR_2 - VAR_1;

 if (VAR_7 > 4)
  VAR_7 = 4;

 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  VAR_4 = (VAR_4 << 8) | VAR_1[VAR_6];
  for (VAR_5 = 0; VAR_5 < VAR_0->codespace_len; VAR_5++)
  {
   if (VAR_0->codespace[VAR_5].n == VAR_6 + 1)
   {
    if (VAR_4 >= VAR_0->codespace[VAR_5].low && VAR_4 <= VAR_0->codespace[VAR_5].high)
    {
     *VAR_3 = VAR_4;
     return VAR_6 + 1;
    }
   }
  }
 }

 *VAR_3 = 0;
 return 1;
}
