
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* encoded; int exts; } ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *,size_t*,size_t) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (size_t,int ,int *,int ,int *,int **,size_t*) ;

__attribute__((used)) static void FUNC_6(DWORD VAR_3)
{
    DWORD VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
    {
        BOOL VAR_5;
        BYTE *VAR_6 = ((void*)0);
        DWORD VAR_7 = 0;

        VAR_5 = FUNC_5(VAR_3, VAR_1, &VAR_2[VAR_4].exts,
         VAR_0, ((void*)0), &VAR_6, &VAR_7);
        FUNC_4(VAR_5, "CryptEncodeObjectEx failed: %08x\n", FUNC_1());
        if (VAR_5)
        {
            FUNC_4(VAR_7 == VAR_2[VAR_4].encoded[1] + 2,
             "Expected %d bytes, got %d\n", VAR_2[VAR_4].encoded[1] + 2, VAR_7);
            FUNC_4(!FUNC_3(VAR_6, VAR_2[VAR_4].encoded, VAR_2[VAR_4].encoded[1] + 2),
             "Unexpected value\n");
            FUNC_2(VAR_6);
        }
    }
}
