
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdwACM; int vdwDriver; int cFormatTags; scalar_t__* szFeatures; int szLicensing; int szCopyright; int szLongName; int szShortName; int * hicon; scalar_t__ cFilterTags; int fdwSupport; int wPid; int wMid; int fccComp; int fccType; } ;
typedef TYPE_1__* PACMDRIVERDETAILSW ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,char*,int,int ,int ) ;
 int FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_3(PACMDRIVERDETAILSW VAR_7)
{
    FUNC_2("(%p)\n", VAR_7);

    VAR_7->fccType = VAR_1;
    VAR_7->fccComp = VAR_0;
    VAR_7->wMid = VAR_5;
    VAR_7->wPid = VAR_6;
    VAR_7->vdwACM = 0x01000000;
    VAR_7->vdwDriver = 0x01000000;
    VAR_7->fdwSupport = VAR_2;
    VAR_7->cFormatTags = 1;
    VAR_7->cFilterTags = 0;
    VAR_7->hicon = ((void*)0);
    FUNC_1(VAR_3, 0, "MS-PCM", -1, VAR_7->szShortName, FUNC_0(VAR_7->szShortName));
    FUNC_1(VAR_3, 0, "Wine PCM converter", -1,
                        VAR_7->szLongName, FUNC_0(VAR_7->szLongName));
    FUNC_1(VAR_3, 0, "Brought to you by the Wine team...", -1,
                        VAR_7->szCopyright, FUNC_0(VAR_7->szCopyright));
    FUNC_1(VAR_3, 0, "Refer to LICENSE file", -1,
                        VAR_7->szLicensing, FUNC_0(VAR_7->szLicensing) );
    VAR_7->szFeatures[0] = 0;

    return VAR_4;
}
