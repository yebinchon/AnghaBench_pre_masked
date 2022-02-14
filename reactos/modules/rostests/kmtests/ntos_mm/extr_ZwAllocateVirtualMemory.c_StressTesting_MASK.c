
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bases ;
typedef size_t ULONG ;
typedef int SIZE_T ;
typedef int * PVOID ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int ,int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 size_t FUNC_3 (int **) ;
 int FUNC_4 (int **,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int **,int ,int*,size_t,int ) ;
 int FUNC_6 (int ,int **,int*,int ) ;
 int FUNC_7 (char*,int ,size_t) ;

__attribute__((used)) static
NTSTATUS
FUNC_8(ULONG VAR_7)
{
    NTSTATUS VAR_8 = VAR_4;
    NTSTATUS VAR_9 = VAR_4;
    static PVOID VAR_10[1024];
    ULONG VAR_11 = 0;
    PVOID VAR_12 = ((void*)0);
    SIZE_T VAR_13 = 5 * 1024 * 1024;

    FUNC_4(VAR_10, sizeof(VAR_10));

    for (VAR_11 = 0; VAR_11 < FUNC_3(VAR_10) && FUNC_1(VAR_8); VAR_11++)
    {
        VAR_8 = FUNC_5(FUNC_2(), &VAR_12, 0, &VAR_13, VAR_7, VAR_2);

        VAR_10[VAR_11] = VAR_12;
        if ((VAR_11 % 10) == 0)
        {
            if (VAR_7 == VAR_0 && FUNC_1(VAR_8))
            {
                FUNC_0(VAR_12, VAR_5, VAR_6, VAR_4);
            }
            else
            {
                FUNC_0(VAR_12, VAR_5, VAR_6, VAR_3);
            }
        }

        VAR_12 = ((void*)0);
    }

    FUNC_7("Finished reserving. Error code %x. Chunks allocated: %d\n", VAR_8, VAR_11 );

    VAR_9 = VAR_8;


    VAR_8 = VAR_4;
    VAR_11 = 0;
    while (FUNC_1(VAR_8) && VAR_11 < FUNC_3(VAR_10))
    {
        VAR_13 = 0;
        VAR_8 = FUNC_6(FUNC_2(), &VAR_10[VAR_11], &VAR_13, VAR_1);
        VAR_10[VAR_11++] = ((void*)0);
    }

    return VAR_9;
}
