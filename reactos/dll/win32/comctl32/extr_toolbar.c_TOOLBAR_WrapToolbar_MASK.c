
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int fsState; scalar_t__ cx; int fsStyle; scalar_t__ iBitmap; } ;
struct TYPE_7__ {size_t right; size_t left; } ;
struct TYPE_8__ {int dwStyle; int dwExStyle; size_t nIndent; size_t nButtonWidth; int nBitmapWidth; size_t nNumButtons; TYPE_1__ client_rect; TYPE_3__* buttons; } ;
typedef TYPE_2__ TOOLBAR_INFO ;
typedef TYPE_3__ TBUTTON_INFO ;
typedef size_t INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,size_t,int,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(TOOLBAR_INFO *VAR_11)
{
    TBUTTON_INFO *VAR_12;
    INT VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    BOOL VAR_18;




    if( !(VAR_11->dwStyle & VAR_9) &&
 !(VAR_11->dwExStyle & VAR_8) ) return;

    VAR_12 = VAR_11->buttons;
    VAR_13 = VAR_11->nIndent;
    VAR_17 = VAR_11->client_rect.right - VAR_11->client_rect.left;

    VAR_18 = VAR_4;

    FUNC_0("start ButtonWidth=%d, BitmapWidth=%d, width=%d, nIndent=%d\n",
   VAR_11->nButtonWidth, VAR_11->nBitmapWidth, VAR_17,
   VAR_11->nIndent);

    for (VAR_15 = 0; VAR_15 < VAR_11->nNumButtons; VAR_15++ )
    {
 VAR_12[VAR_15].fsState &= ~VAR_7;

 if (VAR_12[VAR_15].fsState & VAR_6)
     continue;

        if (VAR_12[VAR_15].cx > 0)
            VAR_14 = VAR_12[VAR_15].cx;

 else if ((VAR_12[VAR_15].fsStyle & VAR_1) &&
            !(VAR_11->dwStyle & VAR_2))
            VAR_14 = (VAR_12[VAR_15].iBitmap > 0) ? VAR_12[VAR_15].iBitmap : VAR_5;
 else
     VAR_14 = VAR_11->nButtonWidth;

        if (!VAR_12[VAR_15].cx && FUNC_1( VAR_11, VAR_12 + VAR_15 ))
            VAR_14 += VAR_3;




 if( VAR_18 &&
  (VAR_12[VAR_15].fsStyle & VAR_1) &&
  (VAR_15 + 1 < VAR_11->nNumButtons ) &&
  (VAR_12[VAR_15 + 1].fsStyle & VAR_1) )
 {
     FUNC_0("wrap point 1 btn %d style %02x\n", VAR_15, VAR_12[VAR_15].fsStyle);
     VAR_12[VAR_15].fsState |= VAR_7;
     VAR_13 = VAR_11->nIndent;
     VAR_15++;
     VAR_18 = VAR_4;
     continue;
 }




        if ((VAR_13 + VAR_14 - (VAR_11->nButtonWidth - VAR_11->nBitmapWidth) / 2 > VAR_17) ||
            ((VAR_13 == VAR_11->nIndent) && (VAR_14 > VAR_17)))
 {
     BOOL VAR_19 = VAR_4;




     while( ( ((VAR_12[VAR_15].fsStyle & VAR_1) &&
        !(VAR_12[VAR_15].fsStyle & VAR_0)) ||
       (VAR_12[VAR_15].fsState & VAR_6) ) &&
   VAR_15 < VAR_11->nNumButtons )
     {
  VAR_15++;
  VAR_19 = VAR_10;
     }

     if( VAR_19 && VAR_15 < VAR_11->nNumButtons )
     {
  VAR_15--;
  FUNC_0("wrap point 2 btn %d style %02x, x=%d, cx=%d\n",
        VAR_15, VAR_12[VAR_15].fsStyle, VAR_13, VAR_14);
  VAR_12[VAR_15].fsState |= VAR_7;
  VAR_13 = VAR_11->nIndent;
  VAR_18 = VAR_4;
  continue;
     }
     else if ( VAR_15 >= VAR_11->nNumButtons)
  break;



     for ( VAR_16 = VAR_15 - 1; VAR_16 >= 0 && !(VAR_12[VAR_16].fsState & VAR_7); VAR_16--)
     {
  if ((VAR_12[VAR_16].fsStyle & VAR_1) &&
   !(VAR_12[VAR_16].fsState & VAR_6))
  {
      VAR_19 = VAR_10;
      VAR_15 = VAR_16;
      FUNC_0("wrap point 3 btn %d style %02x, x=%d, cx=%d\n",
     VAR_15, VAR_12[VAR_15].fsStyle, VAR_13, VAR_14);
      VAR_13 = VAR_11->nIndent;
      VAR_12[VAR_16].fsState |= VAR_7;
      VAR_18 = VAR_4;
      break;
  }
     }



     if (!VAR_19)
     {
  for ( VAR_16 = VAR_15 - 1;
   VAR_16 >= 0 && !(VAR_12[VAR_16].fsState & VAR_7); VAR_16--)
  {
      if (VAR_12[VAR_16].fsState & VAR_6)
   continue;

      VAR_19 = VAR_10;
      VAR_15 = VAR_16;
      FUNC_0("wrap point 4 btn %d style %02x, x=%d, cx=%d\n",
     VAR_15, VAR_12[VAR_15].fsStyle, VAR_13, VAR_14);
      VAR_13 = VAR_11->nIndent;
      VAR_12[VAR_16].fsState |= VAR_7;
      VAR_18 = VAR_10;
      break;
  }
     }


     if (!VAR_19)
     {
  FUNC_0("wrap point 5 btn %d style %02x, x=%d, cx=%d\n",
        VAR_15, VAR_12[VAR_15].fsStyle, VAR_13, VAR_14);
  VAR_12[VAR_15].fsState |= VAR_7;
  VAR_13 = VAR_11->nIndent;
  if (VAR_12[VAR_15].fsStyle & VAR_1 )
      VAR_18 = VAR_4;
  else
      VAR_18 = VAR_10;
     }
 }
 else {
     FUNC_0("wrap point 6 btn %d style %02x, x=%d, cx=%d\n",
    VAR_15, VAR_12[VAR_15].fsStyle, VAR_13, VAR_14);
     VAR_13 += VAR_14;
 }
    }
}
