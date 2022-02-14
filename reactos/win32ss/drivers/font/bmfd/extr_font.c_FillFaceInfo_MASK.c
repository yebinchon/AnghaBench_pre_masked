
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* WCHAR ;
typedef int ULONG ;
struct TYPE_6__ {int ulVersion; int cjEntrySize; int flInfo; void* wPixWidth; int * pCharTable; void* wC; void* wB; void* wA; void* wAscent; void* wPixHeight; void* wDescent; void* wWidthBytes; void* wcBreakChar; void* wcDefaultChar; void* wcLastChar; void* wcFirstChar; scalar_t__ cGlyphs; TYPE_1__* pFontInfo; } ;
struct TYPE_5__ {int dfReserved; int * dfCharTable; int dfCspace; int dfBspace; int dfAspace; int dfFlags; int dfAscent; int dfWidthBytes; int dfPixWidth; int dfPixHeight; scalar_t__ dfBreakChar; scalar_t__ dfFirstChar; scalar_t__ dfDefaultChar; scalar_t__ dfLastChar; int dfVersion; } ;
typedef TYPE_1__* PFONTINFO16 ;
typedef TYPE_2__* PBMFD_FACE ;
typedef int GLYPHENTRY30 ;
typedef int GLYPHENTRY20 ;
typedef int DWORD ;
typedef scalar_t__ CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void**,int,int *,scalar_t__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int ) ;
 int VAR_11 ;

__attribute__((used)) static
BOOL
FUNC_2(
    PBMFD_FACE VAR_12,
    PFONTINFO16 VAR_13)
{
    CHAR VAR_14[4];
    WCHAR VAR_15[4];
    ULONG VAR_16;
    DWORD VAR_17;

    VAR_12->pFontInfo = VAR_13;
    VAR_12->ulVersion = FUNC_1(VAR_13->dfVersion);
    VAR_12->cGlyphs = VAR_13->dfLastChar - VAR_13->dfFirstChar + 1;


    VAR_14[0] = VAR_13->dfFirstChar;
    VAR_14[1] = VAR_13->dfLastChar;
    VAR_14[2] = VAR_13->dfFirstChar + VAR_13->dfDefaultChar;
    VAR_14[3] = VAR_13->dfFirstChar + VAR_13->dfBreakChar;
    FUNC_0(VAR_15, 4 * sizeof(WCHAR), &VAR_16, VAR_14, 4);
    VAR_12->wcFirstChar = VAR_15[0];
    VAR_12->wcLastChar = VAR_15[1];
    VAR_12->wcDefaultChar = VAR_15[2];
    VAR_12->wcBreakChar = VAR_15[3];


    VAR_12->wPixHeight = FUNC_1(VAR_13->dfPixHeight);
    VAR_12->wPixWidth = FUNC_1(VAR_13->dfPixWidth);
    VAR_12->wWidthBytes = FUNC_1(VAR_13->dfWidthBytes);
    VAR_12->wAscent = FUNC_1(VAR_13->dfAscent);
    VAR_12->wDescent = VAR_12->wPixHeight - VAR_12->wAscent;


    if (VAR_12->ulVersion >= 0x300)
    {
        VAR_17 = FUNC_1(VAR_13->dfFlags);
        VAR_12->wA = FUNC_1(VAR_13->dfAspace);
        VAR_12->wB = FUNC_1(VAR_13->dfBspace);
        VAR_12->wC = FUNC_1(VAR_13->dfCspace);
        VAR_12->pCharTable = VAR_13->dfCharTable;
        VAR_12->cjEntrySize = sizeof(GLYPHENTRY30);
    }
    else
    {
        VAR_17 = VAR_1;
        VAR_12->wA = 0;
        VAR_12->wB = 0;
        VAR_12->wC = 0;
        VAR_12->pCharTable = &VAR_13->dfReserved + 1;
        VAR_12->cjEntrySize = sizeof(GLYPHENTRY20);
    }

    VAR_12->flInfo = VAR_10;


    if (VAR_17 & VAR_3 || VAR_12->wPixWidth)
        VAR_12->flInfo |= VAR_9;


    if (VAR_17 & VAR_1)
        VAR_12->flInfo |= VAR_5;
    else if (VAR_17 & VAR_0)
        VAR_12->flInfo |= VAR_7;
    else if (VAR_17 & VAR_2)
        VAR_12->flInfo |= VAR_8;
    else if (VAR_17 & VAR_4)
        VAR_12->flInfo |= VAR_6;





    return VAR_11;
}
