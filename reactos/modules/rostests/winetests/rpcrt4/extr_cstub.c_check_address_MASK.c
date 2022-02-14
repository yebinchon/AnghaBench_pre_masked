
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int e_lfanew; } ;
struct TYPE_4__ {int SizeOfImage; } ;
struct TYPE_5__ {TYPE_1__ OptionalHeader; } ;
typedef TYPE_2__* PIMAGE_NT_HEADERS ;
typedef TYPE_3__* PIMAGE_DOS_HEADER ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(void *VAR_2, void *VAR_3)
{
    static void *VAR_4 = ((void*)0);
    static void *VAR_5 = ((void*)0);
    static void *VAR_6 = ((void*)0);
    static void *VAR_7 = ((void*)0);

    if (VAR_2 == VAR_3)
        return VAR_1;


    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
    {
        PIMAGE_NT_HEADERS VAR_8;
        VAR_4 = (void *) FUNC_0("ole32.dll");
        if (VAR_4 == ((void*)0))
            return VAR_0;
        VAR_8 = (PIMAGE_NT_HEADERS)((char *) VAR_4 + ((PIMAGE_DOS_HEADER) VAR_4)->e_lfanew);
        VAR_5 = (void *)((char *) VAR_4 + VAR_8->OptionalHeader.SizeOfImage);
    }

    if (VAR_4 <= VAR_2 && VAR_2 < VAR_5)
        return VAR_1;


    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
    {
        PIMAGE_NT_HEADERS VAR_9;
        VAR_6 = (void *) FUNC_0("combase.dll");
        if (VAR_6 == ((void*)0))
            return VAR_0;
        VAR_9 = (PIMAGE_NT_HEADERS)((char *) VAR_6 + ((PIMAGE_DOS_HEADER) VAR_6)->e_lfanew);
        VAR_7 = (void *)((char *) VAR_6 + VAR_9->OptionalHeader.SizeOfImage);
    }

    return (VAR_6 <= VAR_2 && VAR_2 < VAR_7);
}
