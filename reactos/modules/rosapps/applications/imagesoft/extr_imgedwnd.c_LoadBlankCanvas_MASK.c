
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* OpenInfo; int Height; int Width; } ;
struct TYPE_5__ {int Height; int Width; } ;
struct TYPE_6__ {TYPE_1__ New; } ;
typedef TYPE_3__* PEDIT_WND_INFO ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static BOOL
FUNC_0(PEDIT_WND_INFO VAR_1)
{


    VAR_1->Width = VAR_1->OpenInfo->New.Width;
    VAR_1->Height = VAR_1->OpenInfo->New.Height;

    return VAR_0;
}
