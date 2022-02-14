
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int font; int flags; int opcode; int mixmode; int length; int * text; int fgcolour; int bgcolour; TYPE_2__ brush; scalar_t__ boxtop; scalar_t__ boxbottom; scalar_t__ boxleft; scalar_t__ boxright; scalar_t__ cliptop; scalar_t__ clipbottom; scalar_t__ clipleft; scalar_t__ clipright; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ TEXT2_ORDER ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (int *,int,int,int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,TYPE_2__*,int ,int ,int *,int) ;

__attribute__((used)) static void
FUNC_7(RDPCLIENT * VAR_0, STREAM VAR_1, TEXT2_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 int VAR_5;

 if (VAR_3 & 0x000001)
  FUNC_2(VAR_1, VAR_2->font);

 if (VAR_3 & 0x000002)
  FUNC_2(VAR_1, VAR_2->flags);

 if (VAR_3 & 0x000004)
  FUNC_2(VAR_1, VAR_2->opcode);

 if (VAR_3 & 0x000008)
  FUNC_2(VAR_1, VAR_2->mixmode);

 if (VAR_3 & 0x000010)
  FUNC_4(VAR_1, &VAR_2->fgcolour);

 if (VAR_3 & 0x000020)
  FUNC_4(VAR_1, &VAR_2->bgcolour);

 if (VAR_3 & 0x000040)
  FUNC_1(VAR_1, VAR_2->clipleft);

 if (VAR_3 & 0x000080)
  FUNC_1(VAR_1, VAR_2->cliptop);

 if (VAR_3 & 0x000100)
  FUNC_1(VAR_1, VAR_2->clipright);

 if (VAR_3 & 0x000200)
  FUNC_1(VAR_1, VAR_2->clipbottom);

 if (VAR_3 & 0x000400)
  FUNC_1(VAR_1, VAR_2->boxleft);

 if (VAR_3 & 0x000800)
  FUNC_1(VAR_1, VAR_2->boxtop);

 if (VAR_3 & 0x001000)
  FUNC_1(VAR_1, VAR_2->boxright);

 if (VAR_3 & 0x002000)
  FUNC_1(VAR_1, VAR_2->boxbottom);

 FUNC_5(VAR_1, &VAR_2->brush, VAR_3 >> 14);

 if (VAR_3 & 0x080000)
  FUNC_1(VAR_1, VAR_2->x);

 if (VAR_3 & 0x100000)
  FUNC_1(VAR_1, VAR_2->y);

 if (VAR_3 & 0x200000)
 {
  FUNC_2(VAR_1, VAR_2->length);
  FUNC_3(VAR_1, VAR_2->text, VAR_2->length);
 }

 FUNC_0(("TEXT2(x=%d,y=%d,cl=%d,ct=%d,cr=%d,cb=%d,bl=%d,bt=%d,br=%d,bb=%d,bs=%d,bg=0x%x,fg=0x%x,font=%d,fl=0x%x,op=0x%x,mix=%d,n=%d)\n", VAR_2->x, VAR_2->y, VAR_2->clipleft, VAR_2->cliptop, VAR_2->clipright, VAR_2->clipbottom, VAR_2->boxleft, VAR_2->boxtop, VAR_2->boxright, VAR_2->boxbottom, VAR_2->brush.style, VAR_2->bgcolour, VAR_2->fgcolour, VAR_2->font, VAR_2->flags, VAR_2->opcode, VAR_2->mixmode, VAR_2->length));

 FUNC_0(("Text: "));

 for (VAR_5 = 0; VAR_5 < VAR_2->length; VAR_5++)
  FUNC_0(("%02x ", VAR_2->text[VAR_5]));

 FUNC_0(("\n"));
 FUNC_6(VAR_0, VAR_2->font, VAR_2->flags, VAR_2->opcode, VAR_2->mixmode, VAR_2->x, VAR_2->y,
       VAR_2->clipleft, VAR_2->cliptop, VAR_2->clipright - VAR_2->clipleft,
       VAR_2->clipbottom - VAR_2->cliptop, VAR_2->boxleft, VAR_2->boxtop,
       VAR_2->boxright - VAR_2->boxleft, VAR_2->boxbottom - VAR_2->boxtop,
       &VAR_2->brush, VAR_2->bgcolour, VAR_2->fgcolour, VAR_2->text, VAR_2->length);

}
