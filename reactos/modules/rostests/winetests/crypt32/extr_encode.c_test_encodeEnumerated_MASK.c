
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; int* encoded; } ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (size_t,TYPE_1__,int*,int ,int *,int**,size_t*) ;

__attribute__((used)) static void FUNC_6(DWORD VAR_3)
{
    DWORD VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
    {
        for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
        {
            BOOL VAR_6;
            BYTE *VAR_7 = ((void*)0);
            DWORD VAR_8 = 0;

            VAR_6 = FUNC_5(VAR_3, VAR_1[VAR_4],
             &VAR_2[VAR_5].val, VAR_0, ((void*)0), &VAR_7,
             &VAR_8);
            FUNC_4(VAR_6, "CryptEncodeObjectEx failed: %d\n", FUNC_1());
            if (VAR_6)
            {
                FUNC_4(VAR_7[0] == 0xa,
                 "Got unexpected type %d for enumerated (expected 0xa)\n",
                 VAR_7[0]);
                FUNC_4(VAR_7[1] == VAR_2[VAR_5].encoded[1],
                 "Got length %d, expected %d\n", VAR_7[1], VAR_2[VAR_5].encoded[1]);
                FUNC_4(!FUNC_3(VAR_7 + 1, VAR_2[VAR_5].encoded + 1,
                 VAR_2[VAR_5].encoded[1] + 1),
                 "Encoded value of 0x%08x didn't match expected\n",
                 VAR_2[VAR_5].val);
                FUNC_2(VAR_7);
            }
        }
    }
}
