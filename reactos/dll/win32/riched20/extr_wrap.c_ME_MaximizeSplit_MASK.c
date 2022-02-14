
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int x; } ;
struct TYPE_19__ {int nFlags; int len; TYPE_1__ pt; scalar_t__ nWidth; } ;
struct TYPE_16__ {TYPE_8__ run; } ;
struct TYPE_18__ {TYPE_2__ member; } ;
struct TYPE_17__ {TYPE_1__ pt; int bOverflown; TYPE_4__* pRowStart; } ;
typedef TYPE_3__ ME_WrapContext ;
typedef TYPE_4__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_8__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,TYPE_4__*,int) ;

__attribute__((used)) static ME_DisplayItem *FUNC_6(ME_WrapContext *VAR_4, ME_DisplayItem *VAR_5, int VAR_6)
{
  ME_DisplayItem *VAR_7, *VAR_8 = VAR_5;
  int VAR_9;
  if (!VAR_6)
    return ((void*)0);
  VAR_9 = FUNC_4( FUNC_3( &VAR_5->member.run, 0 ), VAR_6);
  if (VAR_9>0) {
    VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_9);
    VAR_4->pt.x += VAR_8->member.run.nWidth;
    return VAR_7;
  }
  else
  {
    VAR_7 = VAR_8;

    while(VAR_8 != VAR_4->pRowStart)
    {
      VAR_8 = FUNC_0(VAR_8, VAR_3);
      if (VAR_8->member.run.nFlags & VAR_1)
      {
        VAR_7 = VAR_8;
        continue;
      }
      if (VAR_8->member.run.nFlags & VAR_0)
      {
        VAR_6 = FUNC_4( FUNC_3( &VAR_8->member.run, 0 ),
                                         VAR_8->member.run.len );
        VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_6);
        VAR_4->pt = VAR_7->member.run.pt;
        return VAR_7;
      }

      VAR_4->pt = VAR_7->member.run.pt;
      VAR_4->bOverflown = VAR_2;
      FUNC_1("Split point is: %s|%s\n", FUNC_2( &VAR_8->member.run ), FUNC_2( &VAR_7->member.run ));
      return VAR_7;
    }
    VAR_4->pt = VAR_8->member.run.pt;
    return VAR_8;
  }
}
