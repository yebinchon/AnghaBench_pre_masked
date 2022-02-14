
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwFileVersionMS; scalar_t__ dwFileVersionLS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
struct TYPE_5__ {scalar_t__ MinVersionLS; scalar_t__ MinVersionMS; scalar_t__ MaxVersionLS; scalar_t__ MaxVersionMS; int File; } ;
typedef TYPE_2__ MSISIGNATURE ;
typedef int * LPWSTR ;
typedef int LPVOID ;
typedef int LPBYTE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int VAR_2 ;

__attribute__((used)) static LPWSTR FUNC_9(LPWSTR VAR_3, MSISIGNATURE *VAR_4)
{
    VS_FIXEDFILEINFO *VAR_5;
    DWORD VAR_6, VAR_7, VAR_8;
    LPWSTR VAR_9 = ((void*)0);
    LPBYTE VAR_10;

    if (!VAR_4->File)
    {
        FUNC_4(VAR_3);
        FUNC_3(VAR_3);

        VAR_6 = FUNC_0(VAR_3);
        if (VAR_6 != VAR_1 &&
            (VAR_6 & VAR_0))
            return FUNC_8(VAR_3);

        return ((void*)0);
    }

    VAR_6 = FUNC_0(VAR_3);
    if (VAR_6 == VAR_1 ||
        (VAR_6 & VAR_0))
        return ((void*)0);

    VAR_8 = FUNC_1(VAR_3, &VAR_7);
    if (!VAR_8)
        return FUNC_8(VAR_3);

    VAR_10 = FUNC_6(VAR_8);
    if (!VAR_10)
        return ((void*)0);

    if (!FUNC_2(VAR_3, 0, VAR_8, VAR_10))
        goto done;

    if (!FUNC_5(VAR_10, VAR_2, (LPVOID)&VAR_5, &VAR_8) || !VAR_5)
        goto done;

    if (VAR_4->MinVersionLS || VAR_4->MinVersionMS)
    {
        if (VAR_5->dwFileVersionMS < VAR_4->MinVersionMS)
            goto done;

        if (VAR_5->dwFileVersionMS == VAR_4->MinVersionMS &&
            VAR_5->dwFileVersionLS < VAR_4->MinVersionLS)
            goto done;
    }

    if (VAR_4->MaxVersionLS || VAR_4->MaxVersionMS)
    {
        if (VAR_5->dwFileVersionMS > VAR_4->MaxVersionMS)
            goto done;

        if (VAR_5->dwFileVersionMS == VAR_4->MaxVersionMS &&
            VAR_5->dwFileVersionLS > VAR_4->MaxVersionLS)
            goto done;
    }

    VAR_9 = FUNC_8(VAR_3);

done:
    FUNC_7(VAR_10);
    return VAR_9;
}
