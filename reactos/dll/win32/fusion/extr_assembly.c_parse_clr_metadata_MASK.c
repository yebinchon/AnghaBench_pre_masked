
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_14__ {void* blobs; void* strings; int nthdr; TYPE_3__* metadatahdr; int data; TYPE_2__* corhdr; } ;
struct TYPE_13__ {scalar_t__ Offset; } ;
struct TYPE_12__ {scalar_t__ Streams; } ;
struct TYPE_10__ {scalar_t__ VirtualAddress; } ;
struct TYPE_11__ {TYPE_1__ MetaData; } ;
typedef TYPE_4__ METADATASTREAMHDR ;
typedef scalar_t__ LPSTR ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef TYPE_5__ ASSEMBLY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,scalar_t__,int *) ;
 int VAR_1 ;
 void* FUNC_2 (TYPE_5__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_8(ASSEMBLY *VAR_2)
{
    METADATASTREAMHDR *VAR_3;
    ULONG VAR_4, VAR_5, VAR_6;
    LPSTR VAR_7;
    HRESULT VAR_8;
    DWORD VAR_9;
    BYTE *VAR_10;

    VAR_8 = FUNC_6(VAR_2, &VAR_9);
    if (FUNC_0(VAR_8))
        return VAR_8;

    VAR_4 = VAR_2->corhdr->MetaData.VirtualAddress;
    VAR_10 = FUNC_1(VAR_2->nthdr, VAR_2->data, VAR_4 + VAR_9, ((void*)0));
    if (!VAR_10)
        return VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_2->metadatahdr->Streams; VAR_5++)
    {
        VAR_3 = (METADATASTREAMHDR *)VAR_10;
        VAR_6 = FUNC_7(VAR_2->nthdr, VAR_4 + VAR_3->Offset);

        VAR_10 += sizeof(METADATASTREAMHDR);
        VAR_7 = (LPSTR)VAR_10;

        if (!FUNC_3(VAR_7, "#~"))
        {
            VAR_8 = FUNC_5(VAR_2, VAR_6);
            if (FUNC_0(VAR_8))
                return VAR_8;
        }
        else if (!FUNC_3(VAR_7, "#Strings") || !FUNC_3(VAR_7, "Strings"))
            VAR_2->strings = FUNC_2(VAR_2, VAR_6);
        else if (!FUNC_3(VAR_7, "#Blob") || !FUNC_3(VAR_7, "Blob"))
            VAR_2->blobs = FUNC_2(VAR_2, VAR_6);

        VAR_10 += ((FUNC_4(VAR_7) + 1) + 3) & ~3;
    }

    return VAR_1;
}
