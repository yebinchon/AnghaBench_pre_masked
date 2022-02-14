
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_10__ {int * pBlobData; scalar_t__ cbSize; } ;
struct TYPE_11__ {TYPE_2__ blob; } ;
struct TYPE_14__ {TYPE_3__ u; int vt; } ;
struct TYPE_13__ {TYPE_6__ value; TYPE_6__ id; TYPE_6__ schema; } ;
struct TYPE_9__ {int QuadPart; } ;
struct TYPE_12__ {TYPE_1__ cbSize; } ;
typedef TYPE_4__ STATSTG ;
typedef TYPE_5__ MetadataItem ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_2 ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char*) ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_8(IStream *VAR_6, const GUID *VAR_7,
    DWORD VAR_8, MetadataItem **VAR_9, DWORD *VAR_10)
{
    HRESULT VAR_11;
    MetadataItem *VAR_12;
    STATSTG VAR_13;
    BYTE *VAR_14;
    ULONG VAR_15;

    FUNC_7("\n");

    VAR_11 = FUNC_5(VAR_6, &VAR_13, VAR_3);
    if (FUNC_0(VAR_11))
        return VAR_11;

    VAR_14 = FUNC_2(FUNC_1(), 0, VAR_13.cbSize.QuadPart);
    if (!VAR_14) return VAR_1;

    VAR_11 = FUNC_4(VAR_6, VAR_14, VAR_13.cbSize.QuadPart, &VAR_15);
    if (VAR_15 != VAR_13.cbSize.QuadPart) VAR_11 = VAR_0;
    if (VAR_11 != VAR_4)
    {
        FUNC_3(FUNC_1(), 0, VAR_14);
        return VAR_11;
    }

    VAR_12 = FUNC_2(FUNC_1(), VAR_2, sizeof(MetadataItem));
    if (!VAR_12)
    {
        FUNC_3(FUNC_1(), 0, VAR_14);
        return VAR_1;
    }

    FUNC_6(&VAR_12[0].schema);
    FUNC_6(&VAR_12[0].id);
    FUNC_6(&VAR_12[0].value);

    VAR_12[0].value.vt = VAR_5;
    VAR_12[0].value.u.blob.cbSize = VAR_15;
    VAR_12[0].value.u.blob.pBlobData = VAR_14;

    *VAR_9 = VAR_12;
    *VAR_10 = 1;

    return VAR_4;
}
