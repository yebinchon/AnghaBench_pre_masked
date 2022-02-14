
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int refs; int entry; void* DllGetClassObject; void* DllCanUnloadNow; scalar_t__ library; void* library_name; } ;
typedef TYPE_1__ OpenDll ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef void* DllGetClassObjectFunc ;
typedef void* DllCanUnloadNowFunc ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 () ;
 void* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (char*,int ) ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (void*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_15(LPCWSTR VAR_7, OpenDll **VAR_8)
{
    OpenDll *VAR_9;
    int VAR_10;
    HRESULT VAR_11 = VAR_4;
    HANDLE VAR_12;
    DllCanUnloadNowFunc VAR_13;
    DllGetClassObjectFunc VAR_14;

    FUNC_10("%s\n", FUNC_11(VAR_7));

    *VAR_8 = FUNC_0(VAR_7);
    if (*VAR_8) return VAR_4;



    VAR_12 = FUNC_9(VAR_7, 0, VAR_3);
    if (!VAR_12)
    {
        FUNC_1("couldn't load in-process dll %s\n", FUNC_11(VAR_7));

        return VAR_1;
    }

    VAR_13 = (void *)FUNC_4(VAR_12, "DllCanUnloadNow");

    VAR_14 = (void *)FUNC_4(VAR_12, "DllGetClassObject");
    if (!VAR_14)
    {

        FUNC_1("couldn't find function DllGetClassObject in %s\n", FUNC_11(VAR_7));
        FUNC_3(VAR_12);
        return VAR_0;
    }

    FUNC_2( &VAR_5 );

    *VAR_8 = FUNC_0(VAR_7);
    if (*VAR_8)
    {


        FUNC_3(VAR_12);
    }
    else
    {
        VAR_10 = FUNC_13(VAR_7);
        VAR_9 = FUNC_6(FUNC_5(),0, sizeof(OpenDll));
        if (VAR_9)
            VAR_9->library_name = FUNC_6(FUNC_5(), 0, (VAR_10 + 1)*sizeof(WCHAR));
        if (VAR_9 && VAR_9->library_name)
        {
            FUNC_14(VAR_9->library_name, VAR_7, (VAR_10 + 1)*sizeof(WCHAR));
            VAR_9->library = VAR_12;
            VAR_9->refs = 1;
            VAR_9->DllCanUnloadNow = VAR_13;
            VAR_9->DllGetClassObject = VAR_14;
            FUNC_12(&VAR_6, &VAR_9->entry);
            *VAR_8 = VAR_9;
        }
        else
        {
            FUNC_7(FUNC_5(), 0, VAR_9);
            VAR_11 = VAR_2;
            FUNC_3(VAR_12);
        }
    }

    FUNC_8( &VAR_5 );

    return VAR_11;
}
