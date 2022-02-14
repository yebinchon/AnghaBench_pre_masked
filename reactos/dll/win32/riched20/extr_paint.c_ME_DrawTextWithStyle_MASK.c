
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


struct TYPE_27__ {TYPE_1__* editor; int hDC; } ;
struct TYPE_26__ {int len; TYPE_13__* style; } ;
struct TYPE_25__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_24__ {int dwEffects; int dwMask; } ;
struct TYPE_23__ {int styleFlags; scalar_t__ bEmulateVersion10; scalar_t__ bHaveFocus; int bHideSelection; } ;
struct TYPE_22__ {TYPE_2__ fmt; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ ME_Run ;
typedef TYPE_5__ ME_Context ;
typedef int * HRGN ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int * FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_5__*,TYPE_13__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_13__*,int ) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (int ,scalar_t__,int,scalar_t__,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (TYPE_5__*,TYPE_13__*) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*,int,int,int,TYPE_3__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__*,int,int,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_12(ME_Context *VAR_9, ME_Run *VAR_10, int VAR_11, int VAR_12,
                                 int VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
  HDC VAR_17 = VAR_9->hDC;
  HGDIOBJ VAR_18;
  int VAR_19 = 0;
  BOOL VAR_20 = (VAR_13 < VAR_10->len && VAR_14 >= 0
                   && VAR_13 < VAR_14 && !VAR_9->editor->bHideSelection &&
                   (VAR_9->editor->bHaveFocus || (VAR_9->editor->styleFlags & VAR_3)));
  BOOL VAR_21 = VAR_4;
  RECT VAR_22;
  HRGN VAR_23 = ((void*)0), VAR_24 = ((void*)0);

  VAR_19 = FUNC_9( VAR_9, VAR_10->style );

  if (VAR_20)
  {
    FUNC_11( VAR_9, VAR_10, VAR_13, VAR_14, VAR_16, &VAR_22 );
    FUNC_7( &VAR_22, VAR_11, VAR_15 );

    if (VAR_9->editor->bEmulateVersion10)
    {
      VAR_21 = VAR_8;
      VAR_20 = VAR_4;
    }
    else
    {
      VAR_24 = FUNC_1( &VAR_22 );
      VAR_23 = FUNC_0( 0, 0, 0, 0 );
      if (FUNC_4( VAR_17, VAR_23 ) != 1)
      {
        FUNC_2( VAR_23 );
        VAR_23 = ((void*)0);
      }
    }
  }

  VAR_18 = FUNC_5( VAR_9, VAR_10->style );

  if (VAR_24) FUNC_3( VAR_17, VAR_24, VAR_7 );

  if (!(VAR_10->style->fmt.dwEffects & VAR_0)
      && (VAR_10->style->fmt.dwMask & VAR_1) )
  {
    RECT VAR_25;
    FUNC_11( VAR_9, VAR_10, 0, VAR_10->len, VAR_16, &VAR_25 );
    FUNC_7( &VAR_25, VAR_11, VAR_15 );
    FUNC_10( VAR_9, VAR_10, VAR_11, VAR_12 - VAR_19, VAR_4, &VAR_25 );
  }
  else
    FUNC_10( VAR_9, VAR_10, VAR_11, VAR_12 - VAR_19, VAR_4, ((void*)0) );

  if (VAR_24)
  {
    FUNC_3( VAR_17, VAR_23, VAR_6 );
    FUNC_3( VAR_17, VAR_24, VAR_5 );
    FUNC_10( VAR_9, VAR_10, VAR_11, VAR_12 - VAR_19, VAR_8, &VAR_22 );
    FUNC_3( VAR_17, VAR_23, VAR_6 );
    if (VAR_23) FUNC_2( VAR_23 );
    FUNC_2( VAR_24 );
  }

  if (VAR_21)
    FUNC_8( VAR_17, VAR_22.left, VAR_15, VAR_22.right - VAR_22.left, VAR_16, VAR_2 );

  FUNC_6(VAR_9, VAR_10->style, VAR_18);
}
