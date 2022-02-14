
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int index; } ;
struct TYPE_6__ {char* next; char* str; char const* end; int prevGlyphIndex; int nexty; int nextx; int spacing; int scale; int font; int iblur; int isize; int codepoint; int y; int x; int utf8state; } ;
typedef TYPE_1__ FONStextIter ;
typedef int FONSquad ;
typedef TYPE_2__ FONSglyph ;
typedef int FONScontext ;


 scalar_t__ FUNC_0 (int *,int *,unsigned char const) ;
 TYPE_2__* FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int,TYPE_2__*,int ,int ,int *,int *,int *) ;

int FUNC_3(FONScontext* VAR_0, FONStextIter* VAR_1, FONSquad* VAR_2)
{
 FONSglyph* VAR_3 = ((void*)0);
 const char* VAR_4 = VAR_1->next;
 VAR_1->str = VAR_1->next;

 if (VAR_4 == VAR_1->end)
  return 0;

 for (; VAR_4 != VAR_1->end; VAR_4++) {
  if (FUNC_0(&VAR_1->utf8state, &VAR_1->codepoint, *(const unsigned char*)VAR_4))
   continue;
  VAR_4++;

  VAR_1->x = VAR_1->nextx;
  VAR_1->y = VAR_1->nexty;
  VAR_3 = FUNC_1(VAR_0, VAR_1->font, VAR_1->codepoint, VAR_1->isize, VAR_1->iblur);
  if (VAR_3 != ((void*)0))
   FUNC_2(VAR_0, VAR_1->font, VAR_1->prevGlyphIndex, VAR_3, VAR_1->scale, VAR_1->spacing, &VAR_1->nextx, &VAR_1->nexty, VAR_2);
  VAR_1->prevGlyphIndex = VAR_3 != ((void*)0) ? VAR_3->index : -1;
  break;
 }
 VAR_1->next = VAR_4;

 return 1;
}
