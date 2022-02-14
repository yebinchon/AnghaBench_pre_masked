
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; scalar_t__* encoded; } ;
typedef size_t DWORD ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int,char*,int,...) ;
 int FUNC_3 (size_t,TYPE_1__,scalar_t__*,scalar_t__,int ,int *,int*,size_t*) ;

__attribute__((used)) static void FUNC_4(DWORD VAR_2)
{
    DWORD VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
    {
        for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
        {
            BOOL VAR_5;
            DWORD VAR_6 = sizeof(int);
            int VAR_7;

            VAR_5 = FUNC_3(VAR_2, VAR_0[VAR_3],
             VAR_1[VAR_4].encoded, VAR_1[VAR_4].encoded[1] + 2, 0, ((void*)0),
             &VAR_7, &VAR_6);
            FUNC_2(VAR_5, "CryptDecodeObjectEx failed: %08x\n", FUNC_1());
            FUNC_2(VAR_6 == sizeof(int),
             "Got unexpected size %d for enumerated\n", VAR_6);
            FUNC_2(VAR_7 == VAR_1[VAR_4].val, "Unexpected value %d, expected %d\n",
             VAR_7, VAR_1[VAR_4].val);
        }
    }
}
