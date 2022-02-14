
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int aftd ;
typedef int add ;
struct TYPE_10__ {int cbwfx; int dwFormatTag; } ;
struct TYPE_9__ {int cbStruct; int cFormatTags; int fdwSupport; int cFilterTags; } ;
struct TYPE_8__ {int cbStruct; unsigned int dwFormatTagIndex; int cbFormatSize; int dwFormatTag; } ;
struct TYPE_7__ {int cFormatTags; TYPE_5__* aFormatTag; int pszDriverAlias; int fdwSupport; int cFilterTags; } ;
typedef TYPE_1__* PWINE_ACMDRIVERID ;
typedef int LPARAM ;
typedef int HACMDRIVERID ;
typedef scalar_t__ HACMDRIVER ;
typedef int BOOL ;
typedef TYPE_2__ ACMFORMATTAGDETAILSW ;
typedef TYPE_3__ ACMDRIVERDETAILSW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static BOOL FUNC_7(PWINE_ACMDRIVERID VAR_7)
{
    HACMDRIVER VAR_8 = 0;
    unsigned int VAR_9;
    ACMDRIVERDETAILSW VAR_10;
    ACMFORMATTAGDETAILSW VAR_11;

    if (FUNC_5(&VAR_8, (HACMDRIVERID)VAR_7, 0) != 0)
 return VAR_3;

    VAR_7->aFormatTag = ((void*)0);
    VAR_10.cbStruct = sizeof(VAR_10);
    if (FUNC_2(VAR_8, VAR_0, (LPARAM)&VAR_10, 0))
 goto errCleanUp;

    if (VAR_10.cFormatTags > 0) {
 VAR_7->aFormatTag = FUNC_0(VAR_5, VAR_4,
          VAR_10.cFormatTags * sizeof(VAR_7->aFormatTag[0]));
 if (!VAR_7->aFormatTag) goto errCleanUp;
    }

    VAR_7->cFormatTags = VAR_10.cFormatTags;
    VAR_7->cFilterTags = VAR_10.cFilterTags;
    VAR_7->fdwSupport = VAR_10.fdwSupport;

    VAR_11.cbStruct = sizeof(VAR_11);

    for (VAR_9 = 0; VAR_9 < VAR_10.cFormatTags; VAR_9++) {
 VAR_11.dwFormatTagIndex = VAR_9;
 if (FUNC_2(VAR_8, VAR_1, (LPARAM)&VAR_11, VAR_2)) {
     FUNC_3("IIOs (%s)\n", FUNC_6(VAR_7->pszDriverAlias));
     goto errCleanUp;
 }
 VAR_7->aFormatTag[VAR_9].dwFormatTag = VAR_11.dwFormatTag;
 VAR_7->aFormatTag[VAR_9].cbwfx = VAR_11.cbFormatSize;
    }

    FUNC_4(VAR_8, 0);

    return VAR_6;

errCleanUp:
    if (VAR_8) FUNC_4(VAR_8, 0);
    FUNC_1(VAR_5, 0, VAR_7->aFormatTag);
    VAR_7->aFormatTag = ((void*)0);
    return VAR_3;
}
