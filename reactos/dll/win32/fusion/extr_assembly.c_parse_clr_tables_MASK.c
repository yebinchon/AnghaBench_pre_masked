
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WORD ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_11__ {int rows; int offset; } ;
struct TYPE_10__ {int stringsz; int guidsz; int blobsz; int* numrows; int numtables; TYPE_5__* tables; TYPE_2__* tableshdr; } ;
struct TYPE_8__ {int QuadPart; } ;
struct TYPE_9__ {int HeapOffsetSizes; TYPE_1__ MaskValid; } ;
typedef int METADATATABLESHDR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CLRTABLE ;
typedef TYPE_3__ ASSEMBLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_5__*,int,int) ;

__attribute__((used)) static HRESULT FUNC_3(ASSEMBLY *VAR_6, ULONG VAR_7)
{
    DWORD VAR_8, VAR_9;
    ULONG VAR_10;
    ULONGLONG VAR_11;

    VAR_10 = VAR_7;
    VAR_6->tableshdr = FUNC_0(VAR_6, VAR_10);
    if (!VAR_6->tableshdr)
        return VAR_0;

    VAR_6->stringsz = (VAR_6->tableshdr->HeapOffsetSizes & VAR_4) ?
                         sizeof(DWORD) : sizeof(WORD);
    VAR_6->guidsz = (VAR_6->tableshdr->HeapOffsetSizes & VAR_3) ?
                       sizeof(DWORD) : sizeof(WORD);
    VAR_6->blobsz = (VAR_6->tableshdr->HeapOffsetSizes & VAR_2) ?
                       sizeof(DWORD) : sizeof(WORD);

    VAR_10 += sizeof(METADATATABLESHDR);
    VAR_6->numrows = FUNC_0(VAR_6, VAR_10);
    if (!VAR_6->numrows)
        return VAR_0;

    FUNC_2(VAR_6->tables, -1, VAR_1 * sizeof(CLRTABLE));

    for (VAR_8 = VAR_9 = 0, VAR_11 = 1; VAR_8 < VAR_1; VAR_8++, VAR_11 <<= 1)
    {
        if (VAR_6->tableshdr->MaskValid.QuadPart & VAR_11)
            VAR_6->tables[VAR_8].rows = VAR_6->numrows[VAR_9++];
    }
    VAR_6->numtables = VAR_9;
    VAR_10 += VAR_6->numtables * sizeof(DWORD);

    for (VAR_8 = 0, VAR_11 = 1; VAR_8 < VAR_1; VAR_8++, VAR_11 <<= 1)
    {
        if (VAR_6->tableshdr->MaskValid.QuadPart & VAR_11)
        {
            VAR_6->tables[VAR_8].offset = VAR_10;
            VAR_10 += FUNC_1(VAR_6, VAR_8) * VAR_6->tables[VAR_8].rows;
        }
    }

    return VAR_5;
}
