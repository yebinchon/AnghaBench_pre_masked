
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int left; int right; int top; int bottom; } ;
struct TYPE_14__ {int uDockType; TYPE_3__ rcTbPos; } ;
struct TYPE_12__ {int left; int right; int top; int bottom; } ;
struct TYPE_11__ {int left; int right; int top; int bottom; } ;
struct TYPE_15__ {scalar_t__ cbSize; TYPE_4__ hltbinfo; TYPE_2__ rcDocPos; TYPE_1__ rcFramePos; int grfHLBWIF; } ;
typedef int IHlinkBrowseContext ;
typedef scalar_t__ HRESULT ;
typedef TYPE_5__ HLBWINFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 scalar_t__ FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_5__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*,int,int) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    IHlinkBrowseContext *VAR_4;
    HLBWINFO VAR_5, VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(((void*)0), &VAR_2, (void**)&VAR_4);
    FUNC_6(VAR_7 == VAR_3, "HlinkCreateBrowseContext failed: 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1(VAR_4, ((void*)0));
    FUNC_6(VAR_7 == VAR_0, "GetBrowseWindow failed with wrong code: 0x%08x\n", VAR_7);

    VAR_7 = FUNC_3(VAR_4, ((void*)0));
    FUNC_6(VAR_7 == VAR_0, "SetBrowseWindow failed with wrong code: 0x%08x\n", VAR_7);

    FUNC_5(&VAR_6, -1, sizeof(HLBWINFO));

    VAR_7 = FUNC_1(VAR_4, &VAR_6);
    FUNC_6(VAR_7 == VAR_3, "GetBrowseWindowInfo failed: 0x%08x\n", VAR_7);
    FUNC_6(VAR_6.cbSize == 0, "Got wrong size: %x\n", VAR_6.cbSize);

    VAR_5.cbSize = sizeof(HLBWINFO);
    VAR_5.grfHLBWIF = VAR_1;
    VAR_5.rcFramePos.left = 1;
    VAR_5.rcFramePos.right = 2;
    VAR_5.rcFramePos.top = 3;
    VAR_5.rcFramePos.bottom = 4;
    VAR_5.rcDocPos.left = 5;
    VAR_5.rcDocPos.right = 6;
    VAR_5.rcDocPos.top = 7;
    VAR_5.rcDocPos.bottom = 8;
    VAR_5.hltbinfo.uDockType = 4321;
    VAR_5.hltbinfo.rcTbPos.left = 9;
    VAR_5.hltbinfo.rcTbPos.right = 10;
    VAR_5.hltbinfo.rcTbPos.top = 11;
    VAR_5.hltbinfo.rcTbPos.bottom = 12;
    VAR_7 = FUNC_3(VAR_4, &VAR_5);
    FUNC_6(VAR_7 == VAR_3, "SetBrowseWindowInfo failed: 0x%08x\n", VAR_7);

    FUNC_5(&VAR_6, 0, sizeof(HLBWINFO));

    VAR_7 = FUNC_1(VAR_4, &VAR_6);
    FUNC_6(VAR_7 == VAR_3, "GetBrowseWindowInfo failed: 0x%08x\n", VAR_7);
    FUNC_6(!FUNC_4(&VAR_5, &VAR_6, sizeof(HLBWINFO)), "Set and Get differ\n");

    FUNC_2(VAR_4);
}
