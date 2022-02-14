
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_12__ {int y; int x; } ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_10__ {int y; int x; } ;
struct TYPE_13__ {TYPE_2__ ptMaxTrackSize; TYPE_1__ ptMinTrackSize; TYPE_5__ ptMaxPosition; TYPE_4__ ptMaxSize; TYPE_3__ ptReserved; } ;
typedef TYPE_6__ MINMAXINFO ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1( const MINMAXINFO *VAR_0 )
{
    FUNC_0("Reserved=%d,%d MaxSize=%d,%d MaxPos=%d,%d MinTrack=%d,%d MaxTrack=%d,%d\n",
          VAR_0->ptReserved.x, VAR_0->ptReserved.y,
          VAR_0->ptMaxSize.x, VAR_0->ptMaxSize.y,
          VAR_0->ptMaxPosition.x, VAR_0->ptMaxPosition.y,
          VAR_0->ptMinTrackSize.x, VAR_0->ptMinTrackSize.y,
          VAR_0->ptMaxTrackSize.x, VAR_0->ptMaxTrackSize.y);
}
