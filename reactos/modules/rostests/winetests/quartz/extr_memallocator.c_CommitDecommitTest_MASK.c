
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cBuffers; int cbBuffer; int cbAlign; scalar_t__ cbPrefix; } ;
typedef int LPVOID ;
typedef int IMemAllocator ;
typedef int IMediaSample ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ ALLOCATOR_PROPERTIES ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **,int *,int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(void)
{
    IMemAllocator* VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2, (LPVOID*)&VAR_4);
    FUNC_7(VAR_5==VAR_3, "Unable to create memory allocator %x\n", VAR_5);

    if (VAR_5 == VAR_3)
    {
        ALLOCATOR_PROPERTIES VAR_6;
        ALLOCATOR_PROPERTIES VAR_7;

        IMediaSample *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

        VAR_6.cBuffers = 2;
        VAR_6.cbBuffer = 65536;
        VAR_6.cbAlign = 1;
        VAR_6.cbPrefix = 0;

 VAR_5 = FUNC_6(VAR_4, &VAR_6, &VAR_7);
 FUNC_7(VAR_5==VAR_3, "SetProperties returned: %x\n", VAR_5);

 VAR_5 = FUNC_2(VAR_4);
 FUNC_7(VAR_5==VAR_3, "Commit returned: %x\n", VAR_5);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_7(VAR_5==VAR_3, "Commit returned: %x\n", VAR_5);

        VAR_5 = FUNC_4(VAR_4, &VAR_8, ((void*)0), ((void*)0), 0);
        FUNC_7(VAR_5==VAR_3, "Could not get a buffer: %x\n", VAR_5);

 VAR_5 = FUNC_3(VAR_4);
 FUNC_7(VAR_5==VAR_3, "Decommit returned: %x\n", VAR_5);
 VAR_5 = FUNC_3(VAR_4);
 FUNC_7(VAR_5==VAR_3, "Cecommit returned: %x\n", VAR_5);


        if (VAR_8)
        {
            VAR_5 = FUNC_2(VAR_4);
            FUNC_7(VAR_5==VAR_3, "Commit returned: %x\n", VAR_5);

            VAR_5 = FUNC_4(VAR_4, &VAR_9, ((void*)0), ((void*)0), 0);
            FUNC_7(VAR_5==VAR_3, "Could not get a buffer: %x\n", VAR_5);
            FUNC_1(VAR_8);
            if (VAR_9)
                FUNC_1(VAR_9);

            VAR_5 = FUNC_3(VAR_4);
            FUNC_7(VAR_5==VAR_3, "Cecommit returned: %x\n", VAR_5);
        }
        FUNC_5(VAR_4);
    }
}
