
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ y; } ;
struct TYPE_29__ {TYPE_1__ pt; int editor; } ;
struct TYPE_23__ {scalar_t__ y; } ;
struct TYPE_24__ {int nHeight; TYPE_3__ pt; } ;
struct TYPE_26__ {int nCharOfs; int nFlags; } ;
struct TYPE_25__ {TYPE_4__ row; TYPE_6__ run; } ;
struct TYPE_28__ {TYPE_5__ member; } ;
struct TYPE_22__ {scalar_t__ y; } ;
struct TYPE_27__ {int nCharOfs; TYPE_2__ pt; } ;
typedef TYPE_6__ ME_Run ;
typedef TYPE_7__ ME_Paragraph ;
typedef TYPE_8__ ME_DisplayItem ;
typedef TYPE_9__ ME_Context ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_9__*,int,int,TYPE_6__*,int) ;
 int FUNC_1 (TYPE_9__*,TYPE_6__*,int,int,int,int,scalar_t__,int ) ;
 TYPE_8__* FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (int ,int*,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_9__*,TYPE_6__*,int,int,int,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(ME_Context *VAR_8, int VAR_9, int VAR_10, ME_DisplayItem *VAR_11, ME_Paragraph *VAR_12)
{
  ME_Run *VAR_13 = &VAR_11->member.run;
  ME_DisplayItem *VAR_14;
  int VAR_15 = VAR_13->nCharOfs+VAR_12->nCharOfs;
  int VAR_16, VAR_17;

  if (VAR_13->nFlags & VAR_4)
    return;

  VAR_14 = FUNC_2(VAR_11, VAR_7);
  FUNC_3(VAR_8->editor, &VAR_16, &VAR_17);


  if (VAR_13->nFlags & VAR_2)
  {
    if (VAR_15 >= VAR_16 && VAR_15 < VAR_17)
    {
      FUNC_4( VAR_8, VAR_13, VAR_9, VAR_10, VAR_6, VAR_0,
                  VAR_8->pt.y + VAR_12->pt.y + VAR_14->member.row.pt.y,
                  VAR_14->member.row.nHeight );
    }
    return;
  }

  if (VAR_13->nFlags & (VAR_5 | VAR_1))
  {
    BOOL VAR_18 = VAR_15 >= VAR_16 && VAR_15 < VAR_17;

    FUNC_4( VAR_8, VAR_13, VAR_9, VAR_10, VAR_18, VAR_6,
                VAR_8->pt.y + VAR_12->pt.y + VAR_14->member.row.pt.y,
                VAR_14->member.row.nHeight );
    return;
  }

  if (VAR_13->nFlags & VAR_3)
    FUNC_0(VAR_8, VAR_9, VAR_10, VAR_13, (VAR_15 >= VAR_16) && (VAR_15 < VAR_17));
  else
  {
    FUNC_1(VAR_8, VAR_13, VAR_9, VAR_10, VAR_16 - VAR_15, VAR_17 - VAR_15,
                         VAR_8->pt.y + VAR_12->pt.y + VAR_14->member.row.pt.y,
                         VAR_14->member.row.nHeight);
  }
}
