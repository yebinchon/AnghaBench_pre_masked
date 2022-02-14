
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int emr ;
struct TYPE_8__ {int nSize; int iType; } ;
struct TYPE_5__ {void* bXHeight; void* bMidline; void* bLetterform; void* bArmStyle; void* bStrokeVariation; void* bContrast; void* bProportion; void* bWeight; void* bSerifStyle; void* bFamilyType; } ;
struct TYPE_6__ {char* elfFullName; char* elfStyle; TYPE_1__ elfPanose; int elfCulture; scalar_t__* elfVendorId; scalar_t__ elfReserved; scalar_t__ elfMatch; scalar_t__ elfStyleSize; scalar_t__ elfVersion; int elfLogFont; } ;
struct TYPE_7__ {TYPE_4__ emr; TYPE_2__ elfw; scalar_t__ ihFont; } ;
typedef int PHYSDEV ;
typedef int HFONT ;
typedef TYPE_3__ EMREXTCREATEFONTINDIRECTW ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int,int *) ;
 int VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static BOOL FUNC_3(PHYSDEV VAR_5, HFONT VAR_6 )
{
    DWORD VAR_7 = 0;
    EMREXTCREATEFONTINDIRECTW VAR_8;
    int VAR_9;

    if (!FUNC_2( VAR_6, sizeof(VAR_8.elfw.elfLogFont), &VAR_8.elfw.elfLogFont )) return VAR_2;

    VAR_8.emr.iType = VAR_1;
    VAR_8.emr.nSize = (sizeof(VAR_8) + 3) / 4 * 4;
    VAR_8.ihFont = VAR_7 = FUNC_0( VAR_5, VAR_6 );
    VAR_8.elfw.elfFullName[0] = '\0';
    VAR_8.elfw.elfStyle[0] = '\0';
    VAR_8.elfw.elfVersion = 0;
    VAR_8.elfw.elfStyleSize = 0;
    VAR_8.elfw.elfMatch = 0;
    VAR_8.elfw.elfReserved = 0;
    for(VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
        VAR_8.elfw.elfVendorId[VAR_9] = 0;
    VAR_8.elfw.elfCulture = VAR_3;
    VAR_8.elfw.elfPanose.bFamilyType = VAR_4;
    VAR_8.elfw.elfPanose.bSerifStyle = VAR_4;
    VAR_8.elfw.elfPanose.bWeight = VAR_4;
    VAR_8.elfw.elfPanose.bProportion = VAR_4;
    VAR_8.elfw.elfPanose.bContrast = VAR_4;
    VAR_8.elfw.elfPanose.bStrokeVariation = VAR_4;
    VAR_8.elfw.elfPanose.bArmStyle = VAR_4;
    VAR_8.elfw.elfPanose.bLetterform = VAR_4;
    VAR_8.elfw.elfPanose.bMidline = VAR_4;
    VAR_8.elfw.elfPanose.bXHeight = VAR_4;

    if(!FUNC_1( VAR_5, &VAR_8.emr ))
        VAR_7 = 0;
    return VAR_7;
}
