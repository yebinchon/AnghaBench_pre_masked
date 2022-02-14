
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int **** WCHAR ;
struct TYPE_7__ {int stringsz; int blobsz; TYPE_1__* tables; } ;
struct TYPE_6__ {int offset; int rows; } ;
typedef int ******* LPWSTR ;
typedef int LONG ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_2__ ASSEMBLY ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int) ;
 int ******* FUNC_2 (TYPE_2__*,int) ;
 int ******** FUNC_3 (int) ;
 int FUNC_4 (int ******) ;
 int VAR_2 ;

HRESULT FUNC_5(ASSEMBLY *VAR_3, LPWSTR **VAR_4, DWORD *VAR_5)
{
    LONG VAR_6;
    INT VAR_7, VAR_8;
    WCHAR **VAR_9;
    BYTE *VAR_10;
    DWORD VAR_11;

    *VAR_5 = 0;

    VAR_6 = VAR_3->tables[FUNC_0(VAR_2)].offset;
    if (VAR_6 == -1)
        return VAR_1;

    VAR_10 = FUNC_1(VAR_3, VAR_6);
    if (!VAR_10)
        return VAR_1;

    VAR_8 = VAR_3->tables[FUNC_0(VAR_2)].rows;
    if (VAR_8 <= 0)
        return VAR_1;

    if (!(VAR_9 = FUNC_3(VAR_8 * sizeof(WCHAR *)))) return VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
        VAR_10 += sizeof(DWORD);
        if (VAR_3->stringsz == sizeof(DWORD))
            VAR_11 = *(DWORD *)VAR_10;
        else
            VAR_11 = *(WORD *)VAR_10;

        VAR_9[VAR_7] = FUNC_2(VAR_3, VAR_11);
        if (!VAR_9[VAR_7])
        {
            for (; VAR_7 >= 0; VAR_7--) FUNC_4(&VAR_9[VAR_7]);
            FUNC_4(VAR_9);
            return VAR_0;
        }
        VAR_10 += VAR_3->stringsz;
        VAR_10 += VAR_3->blobsz;
    }
    *VAR_5 = VAR_8;
    *VAR_4 = VAR_9;
    return VAR_1;
}
