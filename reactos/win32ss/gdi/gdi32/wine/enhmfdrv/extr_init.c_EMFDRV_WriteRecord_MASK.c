
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* emh; scalar_t__ hFile; } ;
struct TYPE_12__ {int nSize; int iType; } ;
struct TYPE_11__ {int nBytes; int nRecords; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ ENHMETAHEADER ;
typedef TYPE_2__ EMR ;
typedef TYPE_3__ EMFDRV_PDEVICE ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (char*,int ,int,char*) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,TYPE_2__*,int,int*,int *) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_2__*,int) ;

BOOL FUNC_8( PHYSDEV VAR_2, EMR *VAR_3 )
{
    DWORD VAR_4;
    DWORD VAR_5;
    ENHMETAHEADER *VAR_6;
    EMFDRV_PDEVICE *VAR_7 = FUNC_6( VAR_2 );

    FUNC_3("record %d, size %d %s\n",
          VAR_3->iType, VAR_3->nSize, VAR_7->hFile ? "(to disk)" : "");

    FUNC_5( !(VAR_3->nSize & 3) );

    VAR_7->emh->nBytes += VAR_3->nSize;
    VAR_7->emh->nRecords++;

    if(VAR_7->hFile) {
        if (!FUNC_4(VAR_7->hFile, VAR_3, VAR_3->nSize, &VAR_5, ((void*)0)))
     return VAR_0;
    } else {
        DWORD VAR_8 = FUNC_2(FUNC_0(), 0, VAR_7->emh);
        VAR_4 = VAR_7->emh->nBytes;
        if (VAR_4 > VAR_8) {
            VAR_8 += (VAR_8 / 2) + VAR_3->nSize;
            VAR_6 = FUNC_1(FUNC_0(), 0, VAR_7->emh, VAR_8);
            if (!VAR_6) return VAR_0;
            VAR_7->emh = VAR_6;
        }
        FUNC_7((CHAR *)VAR_7->emh + VAR_7->emh->nBytes - VAR_3->nSize, VAR_3,
               VAR_3->nSize);
    }
    return VAR_1;
}
