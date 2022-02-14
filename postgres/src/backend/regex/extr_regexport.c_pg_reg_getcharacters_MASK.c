
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct colormap {int max; int* locolormap; TYPE_1__* cd; } ;
struct guts {struct colormap cmap; } ;
struct TYPE_5__ {scalar_t__ re_magic; scalar_t__ re_guts; } ;
typedef TYPE_2__ regex_t ;
typedef int pg_wchar ;
typedef scalar_t__ chr ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;

void
FUNC_1(const regex_t *VAR_4, int VAR_5,
      pg_wchar *VAR_6, int VAR_7)
{
 struct colormap *VAR_8;
 chr VAR_9;

 FUNC_0(VAR_4 != ((void*)0) && VAR_4->re_magic == VAR_3);
 VAR_8 = &((struct guts *) VAR_4->re_guts)->cmap;

 if (VAR_5 <= 0 || VAR_5 > VAR_8->max || VAR_7 <= 0)
  return;
 if (VAR_8->cd[VAR_5].flags & VAR_2)
  return;





 for (VAR_9 = VAR_0; VAR_9 <= VAR_1; VAR_9++)
 {
  if (VAR_8->locolormap[VAR_9 - VAR_0] == VAR_5)
  {
   *VAR_6++ = VAR_9;
   if (--VAR_7 == 0)
    break;
  }
 }
}
