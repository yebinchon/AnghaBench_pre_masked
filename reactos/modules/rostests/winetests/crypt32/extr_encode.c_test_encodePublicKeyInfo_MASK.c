
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* encoded; int info; } ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,size_t*,size_t) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (size_t,int ,int *,int ,int *,int **,size_t*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_6(DWORD VAR_4)
{
    DWORD VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
    {
        BOOL VAR_6;
        BYTE *VAR_7 = ((void*)0);
        DWORD VAR_8 = 0;

        VAR_6 = FUNC_5(VAR_4, VAR_2,
         &VAR_3[VAR_5].info, VAR_0, ((void*)0), &VAR_7,
         &VAR_8);
        FUNC_4(VAR_6 || FUNC_1() == VAR_1 ,
         "CryptEncodeObjectEx failed: %08x\n", FUNC_1());
        if (VAR_6)
        {
            FUNC_4(VAR_8 == VAR_3[VAR_5].encoded[1] + 2,
             "Expected %d bytes, got %d\n", VAR_3[VAR_5].encoded[1] + 2, VAR_8);
            if (VAR_8 == VAR_3[VAR_5].encoded[1] + 2)
                FUNC_4(!FUNC_3(VAR_7, VAR_3[VAR_5].encoded, VAR_3[VAR_5].encoded[1] + 2),
                 "Unexpected value\n");
            FUNC_2(VAR_7);
        }
    }
}
