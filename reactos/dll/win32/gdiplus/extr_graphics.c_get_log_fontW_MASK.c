
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int tmCharSet; scalar_t__ tmStruckOut; scalar_t__ tmUnderlined; scalar_t__ tmItalic; int tmWeight; } ;
struct TYPE_11__ {TYPE_1__ otmTextMetrics; } ;
struct TYPE_15__ {scalar_t__ unit; TYPE_3__* family; TYPE_2__ otm; int emSize; } ;
struct TYPE_14__ {scalar_t__ unit; int yres; int xres; } ;
struct TYPE_13__ {double lfHeight; int lfItalic; int lfUnderline; int lfStrikeOut; int lfFaceName; scalar_t__ lfPitchAndFamily; int lfQuality; int lfClipPrecision; int lfOutPrecision; int lfCharSet; int lfWeight; scalar_t__ lfOrientation; scalar_t__ lfEscapement; scalar_t__ lfWidth; } ;
struct TYPE_12__ {int FamilyName; } ;
typedef double REAL ;
typedef TYPE_4__ LOGFONTW ;
typedef TYPE_5__ GpGraphics ;
typedef TYPE_6__ GpFont ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 double FUNC_1 (int ,scalar_t__,int ) ;

void FUNC_2(const GpFont *VAR_5, GpGraphics *VAR_6, LOGFONTW *VAR_7)
{
    REAL VAR_8;

    if (VAR_5->unit == VAR_4)
    {
        VAR_8 = FUNC_1(VAR_5->emSize, VAR_6->unit, VAR_6->yres);
    }
    else
    {
        if (VAR_6->unit == VAR_3 || VAR_6->unit == VAR_4)
            VAR_8 = FUNC_1(VAR_5->emSize, VAR_5->unit, VAR_6->xres);
        else
            VAR_8 = FUNC_1(VAR_5->emSize, VAR_5->unit, VAR_6->yres);
    }

    VAR_7->lfHeight = -(VAR_8 + 0.5);
    VAR_7->lfWidth = 0;
    VAR_7->lfEscapement = 0;
    VAR_7->lfOrientation = 0;
    VAR_7->lfWeight = VAR_5->otm.otmTextMetrics.tmWeight;
    VAR_7->lfItalic = VAR_5->otm.otmTextMetrics.tmItalic ? 1 : 0;
    VAR_7->lfUnderline = VAR_5->otm.otmTextMetrics.tmUnderlined ? 1 : 0;
    VAR_7->lfStrikeOut = VAR_5->otm.otmTextMetrics.tmStruckOut ? 1 : 0;
    VAR_7->lfCharSet = VAR_5->otm.otmTextMetrics.tmCharSet;
    VAR_7->lfOutPrecision = VAR_2;
    VAR_7->lfClipPrecision = VAR_0;
    VAR_7->lfQuality = VAR_1;
    VAR_7->lfPitchAndFamily = 0;
    FUNC_0(VAR_7->lfFaceName, VAR_5->family->FamilyName);
}
