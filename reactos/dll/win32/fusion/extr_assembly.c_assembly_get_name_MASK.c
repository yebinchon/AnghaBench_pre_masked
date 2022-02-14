
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int stringsz; scalar_t__ blobsz; TYPE_1__* tables; } ;
struct TYPE_6__ {int offset; } ;
typedef int LPWSTR ;
typedef int LONG ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_2__ ASSEMBLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;

HRESULT FUNC_4(ASSEMBLY *VAR_6, LPWSTR *VAR_7)
{
    BYTE *VAR_8;
    LONG VAR_9;
    DWORD VAR_10;

    VAR_9 = VAR_6->tables[FUNC_1(VAR_5)].offset;
    if (VAR_9 == -1)
        return VAR_1;

    VAR_8 = FUNC_2(VAR_6, VAR_9);
    if (!VAR_8)
        return VAR_1;

    VAR_8 += FUNC_0(VAR_0, VAR_3) + VAR_6->blobsz;
    if (VAR_6->stringsz == sizeof(DWORD))
        VAR_10 = *(DWORD *)VAR_8;
    else
        VAR_10 = *(WORD *)VAR_8;

    *VAR_7 = FUNC_3(VAR_6, VAR_10);
    if (!*VAR_7)
        return VAR_2;

    return VAR_4;
}
