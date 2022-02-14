
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_8__ {int * SectionObjectPointer; int * FsContext; } ;
struct TYPE_7__ {int Event; } ;
typedef int PDEVICE_OBJECT ;
typedef int LARGE_INTEGER ;
typedef TYPE_1__ CACHE_UNINITIALIZE_EVENT ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (long long) ;
 int VAR_4 ;
 int * VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static
VOID
FUNC_10(
    ULONG VAR_9,
    PDEVICE_OBJECT VAR_10)
{
    LARGE_INTEGER VAR_11 = FUNC_6(0LL);
    CACHE_UNINITIALIZE_EVENT VAR_12;

    FUNC_7(VAR_5, VAR_10);
    FUNC_8(VAR_7, VAR_9);

    if (!FUNC_9(VAR_6 != ((void*)0), "No test FO\n"))
    {
        if (FUNC_0(VAR_6))
        {
            VAR_8 = VAR_4;
            FUNC_3(&VAR_12.Event, VAR_3, VAR_1);
            FUNC_1(VAR_6, &VAR_11, &VAR_12);
            FUNC_4(&VAR_12.Event, VAR_0, VAR_2, VAR_1, ((void*)0));
            VAR_8 = VAR_1;
        }

        if (VAR_6->FsContext != ((void*)0))
        {
            FUNC_2(VAR_6->FsContext);
            VAR_6->FsContext = ((void*)0);
            VAR_6->SectionObjectPointer = ((void*)0);
        }

        FUNC_5(VAR_6);
    }

    VAR_6 = ((void*)0);
    VAR_5 = ((void*)0);
    VAR_7 = -1;
}
