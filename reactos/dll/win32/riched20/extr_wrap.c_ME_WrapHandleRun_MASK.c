
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_14__ ;


struct TYPE_27__ {scalar_t__ x; int y; } ;
struct TYPE_34__ {int len; int nFlags; scalar_t__ nWidth; TYPE_1__ pt; } ;
struct TYPE_30__ {TYPE_8__ run; } ;
struct TYPE_35__ {scalar_t__ type; struct TYPE_35__* next; TYPE_4__ member; } ;
struct TYPE_32__ {scalar_t__ x; int y; } ;
struct TYPE_33__ {scalar_t__ nAvailWidth; TYPE_6__ pt; TYPE_9__* pLastSplittableRun; TYPE_9__* pRowStart; void* bOverflown; TYPE_14__* context; scalar_t__ bWordWrap; int nFirstMargin; int nLeftMargin; scalar_t__ nRow; TYPE_3__* pPara; } ;
struct TYPE_31__ {scalar_t__ x; } ;
struct TYPE_28__ {int para; } ;
struct TYPE_29__ {TYPE_2__ member; } ;
struct TYPE_26__ {TYPE_5__ pt; } ;
typedef TYPE_7__ ME_WrapContext ;
typedef TYPE_8__ ME_Run ;
typedef TYPE_9__ ME_DisplayItem ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_7__*,TYPE_9__*) ;
 TYPE_9__* FUNC_2 (TYPE_7__*,TYPE_9__*,int) ;
 int FUNC_3 (TYPE_7__*,TYPE_9__*) ;
 void* VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_14__*,int *,int ,TYPE_8__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_8__*,int ) ;
 int FUNC_8 (int ,int) ;
 TYPE_9__* FUNC_9 (TYPE_7__*,TYPE_9__*,int) ;

__attribute__((used)) static ME_DisplayItem *FUNC_10(ME_WrapContext *VAR_11, ME_DisplayItem *VAR_12)
{
  ME_DisplayItem *VAR_13;
  ME_Run *VAR_14;
  int VAR_15;

  FUNC_4(VAR_12->type == VAR_10);
  if (!VAR_11->pRowStart)
    VAR_11->pRowStart = VAR_12;
  VAR_14 = &VAR_12->member.run;
  VAR_14->pt.x = VAR_11->pt.x;
  VAR_14->pt.y = VAR_11->pt.y;
  FUNC_3(VAR_11, VAR_12);
  VAR_15 = VAR_14->len;

  if (VAR_11->bOverflown)
  {

    if (VAR_14->nFlags & VAR_1)
      return VAR_12->next;

    if (VAR_14->nFlags & VAR_8) {
      VAR_11->pt.x += VAR_14->nWidth;

      return VAR_12->next;
    }

    if (VAR_14->nFlags & VAR_6) {

      int VAR_16;
      VAR_16 = FUNC_6( FUNC_7( VAR_14, 0 ), VAR_14->len, 0 );
      if (VAR_16) {
        VAR_11->bOverflown = VAR_0;
        VAR_13 = FUNC_9(VAR_11, VAR_12, VAR_16);
        FUNC_5(VAR_11->context, &VAR_11->pPara->member.para,
                        VAR_11->nRow ? VAR_11->nLeftMargin : VAR_11->nFirstMargin,
                        &VAR_13->member.run);
        FUNC_1(VAR_11, VAR_13);
        return VAR_13;
      }
    }

    FUNC_1(VAR_11, VAR_12);
    return VAR_12;
  }

  if (VAR_14->nFlags & VAR_2)
  {
    VAR_12 = VAR_12->next;
    FUNC_1(VAR_11, VAR_12);
    return VAR_12;
  }


  if (VAR_11->bWordWrap &&
      VAR_11->pt.x + VAR_14->nWidth - VAR_11->context->pt.x > VAR_11->nAvailWidth)
  {
    int VAR_17 = VAR_11->context->pt.x + VAR_11->nAvailWidth - VAR_11->pt.x;

    if (VAR_14->nFlags & (VAR_8 | VAR_1)) {

      VAR_11->bOverflown = VAR_9;
      return VAR_12;
    }

    if (VAR_14->nFlags & VAR_7) {
      VAR_11->bOverflown = VAR_9;
      if (VAR_11->pRowStart == VAR_12)


        return VAR_12->next;
      else
        return VAR_12;
    }

    if ((VAR_14->nFlags & VAR_4) && VAR_14->nWidth <= VAR_11->nAvailWidth) {
      VAR_11->bOverflown = VAR_9;
      return VAR_12;
    }

    if (VAR_14->nFlags & VAR_3)
    {

      int VAR_18 = FUNC_8( FUNC_7( VAR_14, 0 ), VAR_15 );
      FUNC_9(VAR_11, VAR_12, VAR_18);

      return VAR_12;
    }

    VAR_13 = FUNC_2(VAR_11, VAR_12, VAR_17);
    if (VAR_13 == VAR_11->pRowStart)
    {
      if (VAR_14->nFlags & VAR_6)
      {







          VAR_11->bOverflown = VAR_9;
          return VAR_12;
      }



      VAR_11->pt.x += VAR_14->nWidth;
      return VAR_12->next;
    }
    if (VAR_12 != VAR_13)
    {
      VAR_11->bOverflown = VAR_9;
      return VAR_13;
    }

    if (VAR_11->bOverflown)
      return VAR_13;
    FUNC_0("failure!\n");

  }
  if ((VAR_14->nFlags & (VAR_5 | VAR_6))
    || ((VAR_14->nFlags & (VAR_4|VAR_7)) && (VAR_12 != VAR_11->pRowStart)))
  {
    VAR_11->pLastSplittableRun = VAR_12;
  }
  VAR_11->pt.x += VAR_14->nWidth;
  return VAR_12->next;
}
