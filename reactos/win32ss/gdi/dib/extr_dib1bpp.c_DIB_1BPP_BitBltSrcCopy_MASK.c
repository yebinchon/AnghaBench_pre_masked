
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_14__ {int x; int y; } ;
struct TYPE_13__ {int right; int left; int bottom; int top; } ;
struct TYPE_12__ {int iBitmapFormat; } ;
struct TYPE_11__ {TYPE_2__* SourceSurface; int DestSurface; int XlateSourceToDest; TYPE_7__ DestRect; TYPE_8__ SourcePoint; } ;
typedef TYPE_1__* PBLTINFO ;
typedef int LONG ;
typedef int BOOLEAN ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ,TYPE_7__*,TYPE_8__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,int ) ;

BOOLEAN
FUNC_10(PBLTINFO VAR_2)
{
  ULONG VAR_3;
  LONG VAR_4, VAR_5, VAR_6, VAR_7 = VAR_2->SourcePoint.y;

  switch ( VAR_2->SourceSurface->iBitmapFormat )
  {
  case 132:
    FUNC_2 ( VAR_2->DestSurface, VAR_2->SourceSurface, VAR_2->XlateSourceToDest, &VAR_2->DestRect, &VAR_2->SourcePoint );
    break;

  case 129:
    for (VAR_5=VAR_2->DestRect.top; VAR_5<VAR_2->DestRect.bottom; VAR_5++)
    {
      VAR_6 = VAR_2->SourcePoint.x;
      for (VAR_4=VAR_2->DestRect.left; VAR_4<VAR_2->DestRect.right; VAR_4++)
      {
        VAR_3 = FUNC_9(VAR_2->XlateSourceToDest, FUNC_6(VAR_2->SourceSurface, VAR_6, VAR_7));
        FUNC_3(VAR_2->DestSurface, VAR_4, VAR_5, VAR_3);
        VAR_6++;
      }
      VAR_7++;
    }
    break;

  case 128:
    for (VAR_5=VAR_2->DestRect.top; VAR_5<VAR_2->DestRect.bottom; VAR_5++)
    {
      VAR_6 = VAR_2->SourcePoint.x;
      for (VAR_4=VAR_2->DestRect.left; VAR_4<VAR_2->DestRect.right; VAR_4++)
      {
        VAR_3 = FUNC_9(VAR_2->XlateSourceToDest, FUNC_7(VAR_2->SourceSurface, VAR_6, VAR_7));
        FUNC_3(VAR_2->DestSurface, VAR_4, VAR_5, VAR_3);
        VAR_6++;
      }
      VAR_7++;
    }
    break;

  case 133:
    for (VAR_5=VAR_2->DestRect.top; VAR_5<VAR_2->DestRect.bottom; VAR_5++)
    {
      VAR_6 = VAR_2->SourcePoint.x;
      for (VAR_4=VAR_2->DestRect.left; VAR_4<VAR_2->DestRect.right; VAR_4++)
      {
        VAR_3 = FUNC_9(VAR_2->XlateSourceToDest, FUNC_1(VAR_2->SourceSurface, VAR_6, VAR_7));
        FUNC_3(VAR_2->DestSurface, VAR_4, VAR_5, VAR_3);
        VAR_6++;
      }
      VAR_7++;
    }
    break;

  case 131:
    for (VAR_5=VAR_2->DestRect.top; VAR_5<VAR_2->DestRect.bottom; VAR_5++)
    {
      VAR_6 = VAR_2->SourcePoint.x;
      for (VAR_4=VAR_2->DestRect.left; VAR_4<VAR_2->DestRect.right; VAR_4++)
      {
        VAR_3 = FUNC_9(VAR_2->XlateSourceToDest, FUNC_4(VAR_2->SourceSurface, VAR_6, VAR_7));
        FUNC_3(VAR_2->DestSurface, VAR_4, VAR_5, VAR_3);
        VAR_6++;
      }
      VAR_7++;
    }
    break;

  case 130:
    for (VAR_5=VAR_2->DestRect.top; VAR_5<VAR_2->DestRect.bottom; VAR_5++)
    {
      VAR_6 = VAR_2->SourcePoint.x;
      for (VAR_4=VAR_2->DestRect.left; VAR_4<VAR_2->DestRect.right; VAR_4++)
      {
        VAR_3 = FUNC_9(VAR_2->XlateSourceToDest, FUNC_5(VAR_2->SourceSurface, VAR_6, VAR_7));
        FUNC_3(VAR_2->DestSurface, VAR_4, VAR_5, VAR_3);
        VAR_6++;
      }
      VAR_7++;
    }
    break;

  default:
    FUNC_8("DIB_1BPP_BitBlt: Unhandled Source BPP: %u\n", FUNC_0(VAR_2->SourceSurface->iBitmapFormat));
    return VAR_0;
  }

  return VAR_1;
}
