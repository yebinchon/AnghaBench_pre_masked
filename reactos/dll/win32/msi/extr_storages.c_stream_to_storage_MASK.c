
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULARGE_INTEGER ;
struct TYPE_4__ {int QuadPart; } ;
struct TYPE_5__ {TYPE_1__ cbSize; } ;
typedef TYPE_2__ STATSTG ;
typedef int LPVOID ;
typedef int IStream ;
typedef int IStorage ;
typedef int ILockBytes ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int,int*) ;
 int FUNC_5 (int *,int ,int,int*) ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int *,int,int *,int ,int **) ;
 int VAR_5 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static HRESULT FUNC_11(IStream *VAR_6, IStorage **VAR_7)
{
    ILockBytes *VAR_8 = ((void*)0);
    STATSTG VAR_9;
    LPVOID VAR_10;
    HRESULT VAR_11;
    DWORD VAR_12, VAR_13;
    ULARGE_INTEGER VAR_14;

    VAR_11 = FUNC_6(VAR_6, &VAR_9, VAR_2);
    if (FUNC_2(VAR_11))
        return VAR_11;

    if (VAR_9.cbSize.QuadPart >> 32)
    {
        FUNC_1("Storage is too large\n");
        return VAR_0;
    }

    VAR_12 = VAR_9.cbSize.QuadPart;
    VAR_10 = FUNC_9(VAR_12);
    if (!VAR_10)
        return VAR_1;

    VAR_11 = FUNC_5(VAR_6, VAR_10, VAR_12, &VAR_13);
    if (FUNC_2(VAR_11) || VAR_13 != VAR_12)
        goto done;

    VAR_11 = FUNC_0(((void*)0), VAR_5, &VAR_8);
    if (FUNC_2(VAR_11))
        goto done;

    FUNC_8(&VAR_14, sizeof(ULARGE_INTEGER));
    VAR_11 = FUNC_4(VAR_8, VAR_14, VAR_10, VAR_12, &VAR_13);
    if (FUNC_2(VAR_11) || VAR_13 != VAR_12)
        goto done;

    VAR_11 = FUNC_7(VAR_8, ((void*)0),
                                    VAR_3 | VAR_4,
                                    ((void*)0), 0, VAR_7);
    if (FUNC_2(VAR_11))
        goto done;

done:
    FUNC_10(VAR_10);
    if (VAR_8) FUNC_3(VAR_8);
    return VAR_11;
}
