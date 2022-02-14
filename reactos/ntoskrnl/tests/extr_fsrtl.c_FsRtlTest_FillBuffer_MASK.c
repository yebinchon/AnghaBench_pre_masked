
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef int PVOID ;
typedef scalar_t__* PULONGLONG ;
typedef TYPE_1__ LARGE_INTEGER ;



void FUNC_0(LARGE_INTEGER VAR_0, ULONG VAR_1, PVOID VAR_2) {
    ULONG VAR_3 = 0;
    PULONGLONG VAR_4 = (PULONGLONG) VAR_2;

    for (VAR_3=0; VAR_3<VAR_1/sizeof(ULONGLONG); VAR_3++) {
        VAR_4[VAR_3] = VAR_0.QuadPart + VAR_3;
    }

    return;
 }
