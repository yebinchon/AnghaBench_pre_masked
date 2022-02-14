
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {void* QuadPart; } ;
struct TYPE_5__ {int * SectionObjectPointer; } ;
typedef int PVOID ;
typedef int * PSECTION_OBJECT_POINTERS ;
typedef TYPE_1__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int * HANDLE ;


 int FUNC_0 (int *,int ,int *,TYPE_2__,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,void*,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static
VOID
FUNC_8(HANDLE VAR_12)
{
    NTSTATUS VAR_13;
    HANDLE VAR_14 = ((void*)0);
    PFILE_OBJECT VAR_15;
    LARGE_INTEGER VAR_16;
    VAR_16.QuadPart = VAR_11;


    VAR_13 = FUNC_5(VAR_12, VAR_8, *VAR_1, VAR_2, (PVOID *)&VAR_15, ((void*)0));
    if (!FUNC_7(FUNC_3(VAR_13), "Cannot reference object by handle\n"))
    {
        PSECTION_OBJECT_POINTERS VAR_17 = VAR_15->SectionObjectPointer;

        VAR_15->SectionObjectPointer = ((void*)0);
        FUNC_0(VAR_14, VAR_5, ((void*)0), VAR_16, VAR_4, VAR_6, VAR_12, VAR_9, VAR_0);
        VAR_15->SectionObjectPointer = VAR_17;
        FUNC_4(VAR_15);
    }

    VAR_16.QuadPart = VAR_11;
    FUNC_0(VAR_14, (VAR_5), ((void*)0), VAR_16, VAR_4, VAR_6, VAR_12, VAR_10, VAR_3);
    FUNC_1(VAR_14, 2, 1);
    FUNC_2(VAR_14, VAR_7, VAR_16.QuadPart, VAR_10);
    FUNC_6(VAR_14);


    VAR_16.QuadPart = 0;
    FUNC_0(VAR_14, VAR_5, ((void*)0), VAR_16, VAR_4, VAR_6, VAR_12, VAR_10, VAR_3);
    FUNC_2(VAR_14, VAR_7, VAR_11, VAR_10);
    FUNC_6(VAR_14);


    VAR_16.QuadPart = VAR_11 - 100;
    FUNC_0(VAR_14, VAR_5, ((void*)0), VAR_16, VAR_4, VAR_6, VAR_12, VAR_10, VAR_3);
    FUNC_2(VAR_14, VAR_7, VAR_11 - 100, VAR_10);
    FUNC_6(VAR_14);
}
