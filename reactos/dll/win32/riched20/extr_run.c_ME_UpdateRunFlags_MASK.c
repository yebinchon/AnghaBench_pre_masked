
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nCharOfs; int nFlags; scalar_t__ len; } ;
typedef int ME_TextEditor ;
typedef TYPE_1__ ME_Run ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void FUNC_6(ME_TextEditor *VAR_7, ME_Run *VAR_8)
{
  FUNC_2(VAR_8->nCharOfs >= 0);

  if (FUNC_1(VAR_8) || VAR_8->nFlags & VAR_5)
    VAR_8->nFlags |= VAR_1;
  else
    VAR_8->nFlags &= ~VAR_1;

  if (FUNC_5( VAR_8 ))
    VAR_8->nFlags |= VAR_3;
  else
    VAR_8->nFlags &= ~VAR_3;

  if (!(VAR_8->nFlags & VAR_2))
  {
    if (FUNC_4( VAR_8 ))
      VAR_8->nFlags |= VAR_6 | VAR_4 | VAR_0;
    else
    {
      VAR_8->nFlags &= ~VAR_6;

      if (FUNC_0( *FUNC_3( VAR_8, 0 ) ))
        VAR_8->nFlags |= VAR_4;
      else
        VAR_8->nFlags &= ~VAR_4;

      if (FUNC_0( *FUNC_3( VAR_8, VAR_8->len - 1 ) ))
        VAR_8->nFlags |= VAR_0;
      else
        VAR_8->nFlags &= ~VAR_0;
    }
  }
  else
    VAR_8->nFlags &= ~(VAR_6 | VAR_4 | VAR_0);
}
