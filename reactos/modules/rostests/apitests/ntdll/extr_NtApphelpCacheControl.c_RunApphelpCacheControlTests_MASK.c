
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int szPath ;
typedef int WCHAR ;
struct TYPE_8__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_9__ {void* ImageHandle; TYPE_1__ ImageName; } ;
typedef int SC_HANDLE ;
typedef int NTSTATUS ;
typedef void* HANDLE ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_2__ APPHELP_CACHE_SERVICE_LOOKUP ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(SC_HANDLE VAR_6)
{
    WCHAR VAR_7[VAR_2];
    UNICODE_STRING VAR_8;
    BOOLEAN VAR_9;
    NTSTATUS VAR_10;
    APPHELP_CACHE_SERVICE_LOOKUP VAR_11;

    FUNC_2(((void*)0), VAR_7, sizeof(VAR_7) / sizeof(VAR_7[0]));
    VAR_9 = FUNC_5(VAR_7, &VAR_8, ((void*)0), ((void*)0));
    FUNC_8(VAR_9 == VAR_5, "RtlDosPathNameToNtPathName_U\n");
    if (!FUNC_3(&VAR_8))
    {
        FUNC_11("NtApphelpCacheControl expects a different structure layout\n");
        return;
    }


    FUNC_1(&VAR_8);


    VAR_10 = FUNC_0(&VAR_8, VAR_5, VAR_0);
    FUNC_9(VAR_10, VAR_3);
    VAR_10 = FUNC_0(&VAR_8, VAR_1, VAR_0);
    FUNC_9(VAR_10, VAR_3);


    FUNC_4(VAR_6, VAR_1);


    VAR_10 = FUNC_0(&VAR_8, VAR_1, VAR_0);
    FUNC_9(VAR_10, VAR_4);

    VAR_10 = FUNC_0(&VAR_8, VAR_5, VAR_0);
    FUNC_9(VAR_10, VAR_3);

    VAR_10 = FUNC_0(&VAR_8, VAR_1, VAR_0);
    FUNC_9(VAR_10, VAR_3);



    FUNC_4(VAR_6, VAR_5);


    VAR_10 = FUNC_0(&VAR_8, VAR_5, VAR_0);
    FUNC_9(VAR_10, VAR_4);
    VAR_10 = FUNC_0(&VAR_8, VAR_1, VAR_0);
    FUNC_9(VAR_10, VAR_4);



    VAR_11.ImageName = VAR_8;
    VAR_11.ImageHandle = 0;
    VAR_10 = FUNC_10(VAR_0, &VAR_11);
    FUNC_9(VAR_10, VAR_3);


    FUNC_4(VAR_6, VAR_5);
    VAR_10 = FUNC_0(&VAR_8, VAR_5, VAR_0);
    FUNC_9(VAR_10, VAR_4);
    VAR_11.ImageHandle = (HANDLE)1;
    VAR_10 = FUNC_10(VAR_0, &VAR_11);
    FUNC_9(VAR_10, VAR_3);


    FUNC_4(VAR_6, VAR_5);
    VAR_10 = FUNC_0(&VAR_8, VAR_5, VAR_0);
    FUNC_9(VAR_10, VAR_4);



    VAR_11.ImageHandle = (HANDLE)0x80000000;

    VAR_10 = FUNC_10(VAR_0, &VAR_11);
    FUNC_9(VAR_10, VAR_3);

    FUNC_6(FUNC_7(), 0, VAR_8.Buffer);
}
