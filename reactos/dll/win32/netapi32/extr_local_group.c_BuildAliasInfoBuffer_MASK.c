
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_8__ {int Length; int Buffer; } ;
struct TYPE_7__ {int Length; int Buffer; } ;
struct TYPE_11__ {TYPE_2__ AdminComment; TYPE_1__ Name; } ;
struct TYPE_10__ {void** lgrpi0_name; } ;
struct TYPE_9__ {void** lgrpi1_comment; void** lgrpi1_name; } ;
typedef TYPE_3__* PLOCALGROUP_INFO_1 ;
typedef TYPE_4__* PLOCALGROUP_INFO_0 ;
typedef TYPE_5__* PALIAS_GENERAL_INFORMATION ;
typedef scalar_t__ NET_API_STATUS ;
typedef void* LPWSTR ;
typedef int * LPVOID ;
typedef int LOCALGROUP_INFO_1 ;
typedef int LOCALGROUP_INFO_0 ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 void* VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void**,int ,int) ;

__attribute__((used)) static
NET_API_STATUS
FUNC_4(PALIAS_GENERAL_INFORMATION VAR_3,
                     DWORD VAR_4,
                     LPVOID *VAR_5)
{
    LPVOID VAR_6 = ((void*)0);
    PLOCALGROUP_INFO_0 VAR_7;
    PLOCALGROUP_INFO_1 VAR_8;
    LPWSTR VAR_9;
    ULONG VAR_10 = 0;
    NET_API_STATUS VAR_11 = VAR_1;

    *VAR_5 = ((void*)0);

    switch (VAR_4)
    {
        case 0:
            VAR_10 = sizeof(LOCALGROUP_INFO_0) +
                   VAR_3->Name.Length + sizeof(WCHAR);
            break;

        case 1:
            VAR_10 = sizeof(LOCALGROUP_INFO_1) +
                   VAR_3->Name.Length + sizeof(WCHAR) +
                   VAR_3->AdminComment.Length + sizeof(WCHAR);
            break;

        default:
            VAR_11 = VAR_0;
            goto done;
    }

    VAR_11 = FUNC_0(VAR_10, &VAR_6);
    if (VAR_11 != VAR_1)
        goto done;

    FUNC_2(VAR_6, VAR_10);

    switch (VAR_4)
    {
        case 0:
            VAR_7 = (PLOCALGROUP_INFO_0)VAR_6;

            VAR_9 = (LPWSTR)((ULONG_PTR)VAR_7 + sizeof(LOCALGROUP_INFO_0));
            VAR_7->lgrpi0_name = VAR_9;

            FUNC_3(VAR_7->lgrpi0_name,
                   VAR_3->Name.Buffer,
                   VAR_3->Name.Length);
            VAR_7->lgrpi0_name[VAR_3->Name.Length / sizeof(WCHAR)] = VAR_2;
            break;

        case 1:
            VAR_8 = (PLOCALGROUP_INFO_1)VAR_6;

            VAR_9 = (LPWSTR)((ULONG_PTR)VAR_8 + sizeof(LOCALGROUP_INFO_1));
            VAR_8->lgrpi1_name = VAR_9;

            FUNC_3(VAR_8->lgrpi1_name,
                   VAR_3->Name.Buffer,
                   VAR_3->Name.Length);
            VAR_8->lgrpi1_name[VAR_3->Name.Length / sizeof(WCHAR)] = VAR_2;

            VAR_9 = (LPWSTR)((ULONG_PTR)VAR_9 + VAR_3->Name.Length + sizeof(WCHAR));
            VAR_8->lgrpi1_comment = VAR_9;

            FUNC_3(VAR_8->lgrpi1_comment,
                   VAR_3->AdminComment.Buffer,
                   VAR_3->AdminComment.Length);
            VAR_8->lgrpi1_comment[VAR_3->AdminComment.Length / sizeof(WCHAR)] = VAR_2;
            break;
    }

done:
    if (VAR_11 == VAR_1)
    {
        *VAR_5 = VAR_6;
    }
    else
    {
        if (VAR_6 != ((void*)0))
            FUNC_1(VAR_6);
    }

    return VAR_11;
}
