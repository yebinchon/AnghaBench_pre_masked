
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int he ;
struct TYPE_7__ {int dwSize; scalar_t__ dwAddress; scalar_t__ dwBlockSize; } ;
struct TYPE_6__ {int wFlags; int * lpData; } ;
typedef int * PVOID ;
typedef TYPE_1__ PROCESS_HEAP_ENTRY ;
typedef TYPE_2__ HEAPENTRY32 ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL FUNC_9(HANDLE VAR_5, PVOID VAR_6)
{
    HEAPENTRY32 VAR_7;
    BOOL VAR_8 = VAR_0;
    HANDLE VAR_9 = FUNC_1(VAR_3, FUNC_2());

    if (VAR_9 == VAR_1)
        return VAR_0;

    VAR_7.dwSize = sizeof(VAR_7);

    if (FUNC_3(&VAR_7, FUNC_2(), (DWORD_PTR)VAR_5))
    {
        do {
            if ((DWORD_PTR)VAR_6 >= VAR_7.dwAddress && (DWORD_PTR)VAR_6 <= (VAR_7.dwAddress + VAR_7.dwBlockSize))
                VAR_8 = VAR_4;
        } while (!VAR_8 && FUNC_4(&VAR_7));
    }

    FUNC_0(VAR_9);

    return VAR_8;

}
