
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cb; int pb; } ;
typedef int HCERTSTORE ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_5(HCERTSTORE VAR_3)
{
    DWORD VAR_4;

    FUNC_3("\n");

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
        if (!FUNC_1(VAR_3, VAR_1,
         VAR_2[VAR_4].pb, VAR_2[VAR_4].cb, VAR_0, ((void*)0)))
            FUNC_4("adding root cert %d failed: %08x\n", VAR_4, FUNC_2());
}
