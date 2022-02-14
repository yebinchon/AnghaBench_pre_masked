
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int layout ;
struct TYPE_14__ {int Whole; int Frac; } ;
struct TYPE_13__ {int Whole; int Frac; } ;
struct TYPE_12__ {int Whole; int Frac; } ;
struct TYPE_11__ {int Whole; int Frac; } ;
struct TYPE_15__ {TYPE_4__ Bottom; TYPE_3__ Right; TYPE_2__ Top; TYPE_1__ Left; } ;
struct TYPE_17__ {int FrameNumber; int PageNumber; int DocumentNumber; TYPE_5__ Frame; } ;
struct TYPE_16__ {scalar_t__ ConditionCode; } ;
typedef scalar_t__ TW_UINT16 ;
typedef TYPE_6__ TW_STATUS ;
typedef TYPE_7__ TW_IMAGELAYOUT ;
typedef int TW_IDENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int *,TYPE_6__*) ;
 int FUNC_1 (TYPE_7__*,int ,int) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ,int ,TYPE_7__*) ;
 int FUNC_4 (char*,int,int ,int,int ,int,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(TW_IDENTITY *VAR_6, TW_IDENTITY *VAR_7)
{
    TW_UINT16 VAR_8;
    TW_STATUS VAR_9;
    TW_IMAGELAYOUT VAR_10;

    VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_1, VAR_0, VAR_2, &VAR_10);
    FUNC_0(VAR_6, VAR_7, &VAR_9);
    FUNC_2(VAR_8 == VAR_5 && VAR_9.ConditionCode == VAR_4,
            "Error [rc %d|cc %d] doing MSG_GET for DG_IMAGE/DAT_IMAGELAYOUT\n", VAR_8, VAR_9.ConditionCode);
    if (VAR_8 != VAR_5)
        return;
    FUNC_4("ImageLayout [Left %x.%x|Top %x.%x|Right %x.%x|Bottom %x.%x|Document %d|Page %d|Frame %d]\n",
            VAR_10.Frame.Left.Whole, VAR_10.Frame.Left.Frac,
            VAR_10.Frame.Top.Whole, VAR_10.Frame.Top.Frac,
            VAR_10.Frame.Right.Whole, VAR_10.Frame.Right.Frac,
            VAR_10.Frame.Bottom.Whole, VAR_10.Frame.Bottom.Frac,
            VAR_10.DocumentNumber, VAR_10.PageNumber, VAR_10.FrameNumber);

    FUNC_1(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.Frame.Left.Whole = 1;
    VAR_10.Frame.Right.Whole = 2;
    VAR_10.Frame.Top.Whole = 1;
    VAR_10.Frame.Bottom.Whole = 2;
    VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_1, VAR_0, VAR_3, &VAR_10);
    FUNC_0(VAR_6, VAR_7, &VAR_9);
    FUNC_2(VAR_8 == VAR_5 && VAR_9.ConditionCode == VAR_4,
            "Error [rc %d|cc %d] doing MSG_SET for DG_IMAGE/DAT_IMAGELAYOUT\n", VAR_8, VAR_9.ConditionCode);
    if (VAR_8 != VAR_5)
        return;

    VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_1, VAR_0, VAR_2, &VAR_10);
    FUNC_0(VAR_6, VAR_7, &VAR_9);
    FUNC_2(VAR_8 == VAR_5 && VAR_9.ConditionCode == VAR_4,
            "Error [rc %d|cc %d] doing MSG_GET for DG_IMAGE/DAT_IMAGELAYOUT\n", VAR_8, VAR_9.ConditionCode);
    if (VAR_8 != VAR_5)
        return;
    FUNC_4("ImageLayout after set [Left %x.%x|Top %x.%x|Right %x.%x|Bottom %x.%x|Document %d|Page %d|Frame %d]\n",
            VAR_10.Frame.Left.Whole, VAR_10.Frame.Left.Frac,
            VAR_10.Frame.Top.Whole, VAR_10.Frame.Top.Frac,
            VAR_10.Frame.Right.Whole, VAR_10.Frame.Right.Frac,
            VAR_10.Frame.Bottom.Whole, VAR_10.Frame.Bottom.Frac,
            VAR_10.DocumentNumber, VAR_10.PageNumber, VAR_10.FrameNumber);
}
