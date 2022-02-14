
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {char* Buffer; int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_6__ {scalar_t__ RootDirectory; size_t Attributes; TYPE_1__* ObjectName; } ;
typedef scalar_t__* PHANDLE ;
typedef TYPE_2__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int HKEY ;
typedef scalar_t__ HANDLE ;
typedef size_t DWORD ;
typedef int ACCESS_MASK ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,TYPE_2__*,int ,int *,int ,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static NTSTATUS FUNC_2( HKEY *VAR_1, ACCESS_MASK VAR_2, OBJECT_ATTRIBUTES *VAR_3 )
{
    NTSTATUS VAR_4 = FUNC_1( (HANDLE *)VAR_1, VAR_2, VAR_3, 0, ((void*)0), 0, ((void*)0) );

    if (VAR_4 == VAR_0)
    {
        HANDLE VAR_5, VAR_6 = VAR_3->RootDirectory;
        WCHAR *VAR_7 = VAR_3->ObjectName->Buffer;
        DWORD VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = VAR_3->ObjectName->Length / sizeof(WCHAR);
        UNICODE_STRING VAR_12;

        while (VAR_10 < VAR_11 && VAR_7[VAR_10] != '\\') VAR_10++;
        if (VAR_10 == VAR_11) return VAR_4;

        VAR_8 = VAR_3->Attributes;
        VAR_3->ObjectName = &VAR_12;

        while (VAR_10 < VAR_11)
        {
            VAR_12.Buffer = VAR_7 + VAR_9;
            VAR_12.Length = (VAR_10 - VAR_9) * sizeof(WCHAR);
            VAR_4 = FUNC_1( &VAR_5, VAR_2, VAR_3, 0, ((void*)0), 0, ((void*)0) );
            if (VAR_3->RootDirectory != VAR_6) FUNC_0( VAR_3->RootDirectory );
            if (VAR_4) return VAR_4;
            VAR_3->RootDirectory = VAR_5;
            while (VAR_10 < VAR_11 && VAR_7[VAR_10] == '\\') VAR_10++;
            VAR_9 = VAR_10;
            while (VAR_10 < VAR_11 && VAR_7[VAR_10] != '\\') VAR_10++;
        }
        VAR_12.Buffer = VAR_7 + VAR_9;
        VAR_12.Length = (VAR_10 - VAR_9) * sizeof(WCHAR);
        VAR_3->Attributes = VAR_8;
        VAR_4 = FUNC_1( (PHANDLE)VAR_1, VAR_2, VAR_3, 0, ((void*)0), 0, ((void*)0) );
        if (VAR_3->RootDirectory != VAR_6) FUNC_0( VAR_3->RootDirectory );
    }
    return VAR_4;
}
