
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ type; int id; int * szValueName; } ;
typedef int LPWSTR ;
typedef int * LPCWSTR ;
typedef int HRESULT ;
typedef int HLOCAL ;
typedef scalar_t__ HKEY ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef size_t BYTE ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (char*,int ,int,...) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (size_t,size_t,...) ;
 int FUNC_7 (scalar_t__,int *,int *,int const*,...) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static HRESULT FUNC_9(HANDLE VAR_9, DWORD VAR_10, BYTE VAR_11,
 LPWSTR VAR_12)
{
    const WCHAR *VAR_13;
    WCHAR VAR_14[40];
    HRESULT VAR_15;

    FUNC_4("%p,0x%08x,0x%02x,%p\n", *VAR_9, VAR_10, VAR_11, VAR_12);

    if (VAR_11 >= FUNC_0(VAR_0))
        return VAR_4;
    if (VAR_0[VAR_11].type != VAR_1)
        return VAR_4;
    if (!VAR_12)
        return VAR_4;

    if (VAR_10 & VAR_8)
    {

        VAR_15 = FUNC_6(VAR_11, VAR_12);



    }
    else
    {
        LPCWSTR VAR_16 = ((void*)0);
        HKEY VAR_17;

        if (VAR_9 == (HANDLE)-1)
        {
            VAR_17 = VAR_7;
            VAR_16 = VAR_2;
        }
        else if (VAR_9 == ((void*)0))
            VAR_17 = VAR_5;
        else
        {
            VAR_17 = VAR_7;
            VAR_16 = FUNC_5(VAR_9);
            if (VAR_16 == ((void*)0))
            {
                VAR_15 = VAR_3;
                goto error;
            }
        }


        VAR_13 = VAR_0[VAR_11].szValueName;
        if (!VAR_13)
        {
            FUNC_3( VAR_0[VAR_11].id, VAR_14, 39 );
            VAR_13 = &VAR_14[0];
        }


        VAR_15 = FUNC_7(VAR_17, VAR_16, VAR_13, &VAR_12);
        if (FUNC_1(VAR_15) && VAR_17 != VAR_6)
            VAR_15 = FUNC_7(VAR_6, ((void*)0), VAR_13, &VAR_12);
        if (FUNC_1(VAR_15))
            VAR_15 = FUNC_6(VAR_11, VAR_12);







        if (VAR_16 != ((void*)0) && VAR_16 != VAR_2)
            FUNC_2((HLOCAL) VAR_16);
    }
error:
    FUNC_4("returning 0x%08x (output path is %s)\n", VAR_15, FUNC_8(VAR_12));
    return VAR_15;
}
