
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SIZE_T ;
typedef int* PVOID ;
typedef int* PUCHAR ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int**,int ,int*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int**,int*,int ) ;
 int FUNC_4 (int ,int**,int*,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,char*,int,int,int,int*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static
void
FUNC_8(void)
{
    PVOID VAR_6;
    SIZE_T VAR_7;
    NTSTATUS VAR_8;
    ULONG VAR_9, VAR_10;
    PUCHAR VAR_11;
    ULONG VAR_12;

    for (VAR_9 = 0; VAR_9 < 50000; VAR_9++)
    {
        VAR_6 = ((void*)0);
        VAR_7 = 16 * VAR_4;
        VAR_8 = FUNC_1(FUNC_2(),
                                         &VAR_6,
                                         0,
                                         &VAR_7,
                                         VAR_0,
                                         VAR_3);
        FUNC_7(VAR_8, VAR_5);
        if (!FUNC_0(VAR_8))
        {
            break;
        }

        for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
        {
            VAR_11 = VAR_6;
            VAR_11 += VAR_10 * VAR_4;
            FUNC_5(*VAR_11 == 0,
               "[%lu, %lu] Got non-zero memory. %x at %p\n",
               VAR_9, VAR_10, *VAR_11, VAR_11);
            *VAR_11 = 123;
        }

        VAR_8 = FUNC_4(FUNC_2(),
                                        &VAR_6,
                                        &VAR_7,
                                        VAR_2,
                                        &VAR_12);
        FUNC_7(VAR_8, VAR_5);
        FUNC_6(VAR_12, VAR_3);

        VAR_7 = 0;
        VAR_8 = FUNC_3(FUNC_2(),
                                     &VAR_6,
                                     &VAR_7,
                                     VAR_1);
        FUNC_7(VAR_8, VAR_5);
    }
}
