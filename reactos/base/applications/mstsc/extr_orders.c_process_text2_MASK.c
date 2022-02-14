
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int font; int flags; int opcode; int mixmode; int length; int * text; int fgcolour; int bgcolour; scalar_t__ boxtop; scalar_t__ boxbottom; scalar_t__ boxleft; scalar_t__ boxright; scalar_t__ cliptop; scalar_t__ clipbottom; scalar_t__ clipleft; scalar_t__ clipright; scalar_t__ y; scalar_t__ x; TYPE_2__ brush; } ;
typedef TYPE_1__ TEXT2_ORDER ;
typedef int STREAM ;
typedef int RD_BOOL ;
typedef int BRUSH ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ,int ,int *,int) ;

__attribute__((used)) static void
FUNC_8(STREAM VAR_0, TEXT2_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 int VAR_4;
 BRUSH VAR_5;

 if (VAR_2 & 0x000001)
  FUNC_2(VAR_0, VAR_1->font);

 if (VAR_2 & 0x000002)
  FUNC_2(VAR_0, VAR_1->flags);

 if (VAR_2 & 0x000004)
  FUNC_2(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x000008)
  FUNC_2(VAR_0, VAR_1->mixmode);

 if (VAR_2 & 0x000010)
  FUNC_4(VAR_0, &VAR_1->fgcolour);

 if (VAR_2 & 0x000020)
  FUNC_4(VAR_0, &VAR_1->bgcolour);

 if (VAR_2 & 0x000040)
  FUNC_1(VAR_0, VAR_1->clipleft);

 if (VAR_2 & 0x000080)
  FUNC_1(VAR_0, VAR_1->cliptop);

 if (VAR_2 & 0x000100)
  FUNC_1(VAR_0, VAR_1->clipright);

 if (VAR_2 & 0x000200)
  FUNC_1(VAR_0, VAR_1->clipbottom);

 if (VAR_2 & 0x000400)
  FUNC_1(VAR_0, VAR_1->boxleft);

 if (VAR_2 & 0x000800)
  FUNC_1(VAR_0, VAR_1->boxtop);

 if (VAR_2 & 0x001000)
  FUNC_1(VAR_0, VAR_1->boxright);

 if (VAR_2 & 0x002000)
  FUNC_1(VAR_0, VAR_1->boxbottom);

 FUNC_5(VAR_0, &VAR_1->brush, VAR_2 >> 14);

 if (VAR_2 & 0x080000)
  FUNC_1(VAR_0, VAR_1->x);

 if (VAR_2 & 0x100000)
  FUNC_1(VAR_0, VAR_1->y);

 if (VAR_2 & 0x200000)
 {
  FUNC_2(VAR_0, VAR_1->length);
  FUNC_3(VAR_0, VAR_1->text, VAR_1->length);
 }

 FUNC_0(("TEXT2(x=%d,y=%d,cl=%d,ct=%d,cr=%d,cb=%d,bl=%d,bt=%d,br=%d,bb=%d,bs=%d,bg=0x%x,fg=0x%x,font=%d,fl=0x%x,op=0x%x,mix=%d,n=%d)\n", VAR_1->x, VAR_1->y, VAR_1->clipleft, VAR_1->cliptop, VAR_1->clipright, VAR_1->clipbottom, VAR_1->boxleft, VAR_1->boxtop, VAR_1->boxright, VAR_1->boxbottom, VAR_1->brush.style, VAR_1->bgcolour, VAR_1->fgcolour, VAR_1->font, VAR_1->flags, VAR_1->opcode, VAR_1->mixmode, VAR_1->length));

 FUNC_0(("Text: "));

 for (VAR_4 = 0; VAR_4 < VAR_1->length; VAR_4++)
  FUNC_0(("%02x ", VAR_1->text[VAR_4]));

 FUNC_0(("\n"));

 FUNC_6(&VAR_5, &VAR_1->brush);

 FUNC_7(VAR_1->font, VAR_1->flags, VAR_1->opcode - 1, VAR_1->mixmode, VAR_1->x, VAR_1->y,
       VAR_1->clipleft, VAR_1->cliptop, VAR_1->clipright - VAR_1->clipleft,
       VAR_1->clipbottom - VAR_1->cliptop, VAR_1->boxleft, VAR_1->boxtop,
       VAR_1->boxright - VAR_1->boxleft, VAR_1->boxbottom - VAR_1->boxtop,
       &VAR_5, VAR_1->bgcolour, VAR_1->fgcolour, VAR_1->text, VAR_1->length);
}
