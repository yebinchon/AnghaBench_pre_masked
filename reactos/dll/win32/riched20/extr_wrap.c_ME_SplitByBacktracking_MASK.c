
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_23__ {int editor; } ;
struct TYPE_21__ {int len; int nFlags; int pt; } ;
struct TYPE_19__ {TYPE_3__ run; } ;
struct TYPE_22__ {TYPE_1__ member; } ;
struct TYPE_20__ {int bOverflown; TYPE_4__* pRowStart; TYPE_4__* pLastSplittableRun; int pt; TYPE_9__* context; } ;
typedef TYPE_2__ ME_WrapContext ;
typedef TYPE_3__ ME_Run ;
typedef TYPE_4__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_9__*,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 TYPE_4__* FUNC_9 (TYPE_2__*,TYPE_4__*,int) ;

__attribute__((used)) static ME_DisplayItem *FUNC_10(ME_WrapContext *VAR_4, ME_DisplayItem *VAR_5, int VAR_6)
{
  ME_DisplayItem *VAR_7 = VAR_5, *VAR_8;
  int VAR_9, VAR_10, VAR_11;
  ME_Run *VAR_12 = &VAR_5->member.run;

  VAR_10 = VAR_9 = FUNC_5( VAR_4->context, VAR_6, VAR_12 );
  VAR_11 = VAR_12->len;
  FUNC_3(VAR_11>0);
  FUNC_3(VAR_9<VAR_11);
  if (VAR_9) {

    VAR_9 = FUNC_8( FUNC_6( VAR_12, 0 ), VAR_9 );
    VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_9);
    if (VAR_8)
      return VAR_8;
  }
  FUNC_2("Must backtrack to split at: %s\n", FUNC_4( &VAR_5->member.run ));
  if (VAR_4->pLastSplittableRun)
  {
    if (VAR_4->pLastSplittableRun->member.run.nFlags & (VAR_0|VAR_2))
    {
      VAR_4->pt = VAR_4->pLastSplittableRun->member.run.pt;
      return VAR_4->pLastSplittableRun;
    }
    else if (VAR_4->pLastSplittableRun->member.run.nFlags & VAR_1)
    {


      FUNC_1(VAR_4->context->editor, VAR_12);
      FUNC_3((VAR_4->pLastSplittableRun->member.run.nFlags & VAR_1));

      VAR_7 = VAR_4->pLastSplittableRun;
      VAR_12 = &VAR_7->member.run;
      VAR_11 = VAR_12->len;

      VAR_9 = FUNC_8( FUNC_6( VAR_12, 0 ), VAR_11 );
      if (VAR_9 == VAR_11)
        VAR_9 = FUNC_7( FUNC_6( VAR_12, 0 ), VAR_11 );
      if (VAR_9) {
        ME_DisplayItem *VAR_13 = FUNC_9(VAR_4, VAR_7, VAR_9);
        VAR_4->pt = VAR_13->member.run.pt;
        return VAR_13;
      }

      FUNC_3(0 == "Splittable, but no whitespaces");
    }
    else
    {

      VAR_4->pt = VAR_4->pLastSplittableRun->member.run.pt;
      return VAR_4->pLastSplittableRun;
    }
  }
  FUNC_2("Backtracking failed, trying desperate: %s\n", FUNC_4( &VAR_5->member.run ));

  if (VAR_10)
    return FUNC_9(VAR_4, VAR_7, VAR_10);
  else
  if (VAR_4->pRowStart && VAR_7 != VAR_4->pRowStart)
  {


    VAR_4->bOverflown = VAR_3;
    return VAR_7;
  }
  else
  {

    if (VAR_11 != 1) {

      return FUNC_9(VAR_4, VAR_7, 1);
    }

    return VAR_7;
  }
}
