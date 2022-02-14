
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ type; int szValueName; } ;
typedef char* LPWSTR ;
typedef int LPBYTE ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef size_t BYTE ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int*,int ,int*) ;
 int FUNC_6 (int ,int ,int ,int,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,int,size_t,...) ;
 int FUNC_8 (size_t,...) ;
 int FUNC_9 (char*) ;
 int VAR_10 ;
 int FUNC_10 (char*) ;
 int VAR_11 ;

__attribute__((used)) static HRESULT FUNC_11(DWORD VAR_12, BYTE VAR_13,
 LPWSTR VAR_14)
{
    HRESULT VAR_15;

    FUNC_7("0x%08x,0x%02x,%p\n", VAR_12, VAR_13, VAR_14);

    if (VAR_13 >= FUNC_0(VAR_0))
        return VAR_3;
    if (VAR_0[VAR_13].type != VAR_1)
        return VAR_3;
    if (!VAR_14)
        return VAR_3;

    if (VAR_12 & VAR_8)

        VAR_15 = FUNC_8(VAR_13, VAR_14);



    else
    {
        HKEY VAR_16;

        if (FUNC_4(VAR_4, VAR_11, &VAR_16))
            VAR_15 = VAR_2;
        else
        {
            DWORD VAR_17, VAR_18 = VAR_5 * sizeof(WCHAR);

            if (FUNC_5(VAR_16, VAR_0[VAR_13].szValueName, ((void*)0),
             &VAR_17, (LPBYTE)VAR_14, &VAR_18) ||
             (VAR_17 != VAR_7 && VAR_17 != VAR_6))
            {

                VAR_15 = FUNC_8(VAR_13, VAR_14);



                VAR_17 = VAR_6;
                switch (VAR_13)
                {
                case 129:
                case 128:

                    if (!VAR_10)
                    {
                        BOOL VAR_19;
                        FUNC_2( FUNC_1(), &VAR_19 );
                        if (!VAR_19) break;
                    }

                default:
                    FUNC_6(VAR_16, VAR_0[VAR_13].szValueName, 0, VAR_17,
                                   (LPBYTE)VAR_14, (FUNC_10(VAR_14)+1)*sizeof(WCHAR));
                }
            }
            else
            {
                VAR_14[VAR_18 / sizeof(WCHAR)] = '\0';
                VAR_15 = VAR_9;
            }
            FUNC_3(VAR_16);
        }
    }
    FUNC_7("returning 0x%08x (output path is %s)\n", VAR_15, FUNC_9(VAR_14));
    return VAR_15;
}
