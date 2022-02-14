
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int szValue ;
struct TYPE_4__ {int szName; int szDesc; } ;
typedef int TCHAR ;
typedef int SOUND_SCHEME_CONTEXT ;
typedef TYPE_1__* PSOUND_SCHEME_CONTEXT ;
typedef scalar_t__ LRESULT ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *,int *,int *,int ,scalar_t__*) ;
 int FUNC_10 (int ,int,int *) ;
 scalar_t__ VAR_7 ;

BOOL
FUNC_11(HWND VAR_8, HKEY VAR_9, TCHAR * VAR_10, BOOL VAR_11)
{
    HKEY VAR_12;
    TCHAR VAR_13[VAR_6];
    DWORD VAR_14, VAR_15;
    LRESULT VAR_16;
    PSOUND_SCHEME_CONTEXT VAR_17;

    if (FUNC_8(VAR_9,
                     VAR_10,
                     0,
                     VAR_5,
                     &VAR_12) != VAR_1)
    {
        return VAR_2;
    }

    VAR_14 = sizeof(VAR_13);
    VAR_15 = FUNC_9(VAR_12,
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               (LPBYTE)VAR_13,
                               &VAR_14);
    FUNC_7(VAR_12);

    if (VAR_15 != VAR_1)
        return VAR_2;


    VAR_16 = FUNC_0(FUNC_4(VAR_8, VAR_4), VAR_13);
    if (VAR_16 == VAR_0)
        return VAR_2;


    VAR_17 = FUNC_6(FUNC_5(), VAR_3, sizeof(SOUND_SCHEME_CONTEXT));
    if (VAR_17 == ((void*)0))
    {

        FUNC_1(FUNC_4(VAR_8, VAR_4), VAR_16);
        return VAR_2;
    }

    FUNC_10(VAR_17->szDesc, VAR_6, VAR_13);
    FUNC_10(VAR_17->szName, VAR_6, VAR_10);


    FUNC_3(FUNC_4(VAR_8, VAR_4), VAR_16, VAR_17);


    if (VAR_11)
    {
        FUNC_2(FUNC_4(VAR_8, VAR_4), VAR_16);
    }

    return VAR_7;
}
