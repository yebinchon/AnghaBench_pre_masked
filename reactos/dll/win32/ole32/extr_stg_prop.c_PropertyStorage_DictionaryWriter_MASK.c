
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct DictionaryClosure {int bytesWritten; void* hr; } ;
typedef int propid ;
typedef int keyLen ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_2__ {scalar_t__ codePage; int stm; } ;
typedef TYPE_1__ PropertyStorage_impl ;
typedef int LPCWSTR ;
typedef int LPCSTR ;
typedef int LPBYTE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int ,void const*,int,int *) ;
 void* FUNC_2 (int ,void const*,int,int *) ;
 int FUNC_3 (void const*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static BOOL FUNC_9(const void *VAR_1,
 const void *VAR_2, void *VAR_3, void *VAR_4)
{
    PropertyStorage_impl *VAR_5 = VAR_3;
    struct DictionaryClosure *VAR_6 = VAR_4;
    DWORD VAR_7;
    ULONG VAR_8;

    FUNC_6(VAR_1);
    FUNC_6(VAR_4);
    FUNC_5((LPBYTE)&VAR_7, 0, FUNC_3(VAR_2));
    VAR_6->hr = FUNC_1(VAR_5->stm, &VAR_7, sizeof(VAR_7), &VAR_8);
    if (FUNC_0(VAR_6->hr))
        goto end;
    VAR_6->bytesWritten += sizeof(DWORD);
    if (VAR_5->codePage == VAR_0)
    {
        DWORD VAR_9, VAR_10 = 0;

        FUNC_5((LPBYTE)&VAR_9, 0,
         (FUNC_7((LPCWSTR)VAR_1) + 1) * sizeof(WCHAR));
        VAR_6->hr = FUNC_1(VAR_5->stm, &VAR_9, sizeof(VAR_9), &VAR_8);
        if (FUNC_0(VAR_6->hr))
            goto end;
        VAR_6->bytesWritten += sizeof(DWORD);
        VAR_6->hr = FUNC_2(VAR_5->stm, VAR_1, VAR_9,
         &VAR_8);
        if (FUNC_0(VAR_6->hr))
            goto end;
        VAR_6->bytesWritten += VAR_9 * sizeof(WCHAR);
        if (VAR_9 % sizeof(DWORD))
        {
            VAR_6->hr = FUNC_1(VAR_5->stm, &VAR_10,
             sizeof(DWORD) - VAR_9 % sizeof(DWORD), &VAR_8);
            if (FUNC_0(VAR_6->hr))
                goto end;
            VAR_6->bytesWritten += sizeof(DWORD) - VAR_9 % sizeof(DWORD);
        }
    }
    else
    {
        DWORD VAR_11;

        FUNC_5((LPBYTE)&VAR_11, 0, FUNC_8((LPCSTR)VAR_1) + 1);
        VAR_6->hr = FUNC_1(VAR_5->stm, &VAR_11, sizeof(VAR_11), &VAR_8);
        if (FUNC_0(VAR_6->hr))
            goto end;
        VAR_6->bytesWritten += sizeof(DWORD);
        VAR_6->hr = FUNC_1(VAR_5->stm, VAR_1, VAR_11, &VAR_8);
        if (FUNC_0(VAR_6->hr))
            goto end;
        VAR_6->bytesWritten += VAR_11;
    }
end:
    return FUNC_4(VAR_6->hr);
}
