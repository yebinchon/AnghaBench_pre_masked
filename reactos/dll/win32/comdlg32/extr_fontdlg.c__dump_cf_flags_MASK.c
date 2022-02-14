
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int name; } ;
typedef int DWORD ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(DWORD VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        if (VAR_0[VAR_2].mask & VAR_1)
            FUNC_1("%s|",VAR_0[VAR_2].name);
    FUNC_1("\n");
}
