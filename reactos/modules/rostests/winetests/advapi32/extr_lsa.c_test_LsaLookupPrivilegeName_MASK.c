
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int attrs ;
struct TYPE_7__ {int Length; } ;
struct TYPE_6__ {int HighPart; void* LowPart; } ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ LUID ;
typedef void LSA_UNICODE_STRING ;
typedef TYPE_2__ LSA_OBJECT_ATTRIBUTES ;
typedef int LSA_HANDLE ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,void**) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,int ,int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    LSA_OBJECT_ATTRIBUTES VAR_4;
    LSA_UNICODE_STRING *VAR_5;
    LSA_HANDLE VAR_6;
    NTSTATUS VAR_7;
    LUID VAR_8;

    FUNC_3(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.Length = sizeof(VAR_4);

    VAR_7 = FUNC_2(((void*)0), &VAR_4, VAR_0, &VAR_6);
    FUNC_4(VAR_7 == VAR_3, "Failed to open policy, %#x.\n", VAR_7);

    VAR_5 = (void *)0xdeadbeef;
    VAR_7 = FUNC_1(VAR_6, ((void*)0), &VAR_5);
    FUNC_4(VAR_7 != VAR_3, "Unexpected status %#x.\n", VAR_7);
    FUNC_4(VAR_5 == (void *)0xdeadbeef, "Unexpected name pointer.\n");

    VAR_5 = (void *)0xdeadbeef;
    VAR_8.HighPart = 1;
    VAR_8.LowPart = VAR_1;
    VAR_7 = FUNC_1(VAR_6, &VAR_8, &VAR_5);
    FUNC_4(VAR_7 == VAR_2, "Unexpected status %#x.\n", VAR_7);
    FUNC_4(VAR_5 == ((void*)0), "Unexpected name pointer.\n");

    VAR_8.HighPart = 0;
    VAR_8.LowPart = VAR_1;
    VAR_7 = FUNC_1(VAR_6, &VAR_8, &VAR_5);
    FUNC_4(VAR_7 == 0, "got %#x.\n", VAR_7);
    FUNC_0(VAR_5);
}
