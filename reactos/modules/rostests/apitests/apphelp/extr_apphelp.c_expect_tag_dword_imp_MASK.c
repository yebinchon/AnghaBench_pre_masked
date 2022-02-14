
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t type; scalar_t__ flags; size_t dwattr; } ;
typedef size_t TAG ;
typedef TYPE_1__* PATTRINFO ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int,char*,size_t,size_t,...) ;

__attribute__((used)) static void FUNC_2(PATTRINFO VAR_1, TAG VAR_2, DWORD VAR_3)
{
    DWORD VAR_4 = FUNC_0(VAR_2);
    PATTRINFO VAR_5;

    if (VAR_4 == ~0)
        return;

    VAR_5 = &VAR_1[VAR_4];
    FUNC_1(VAR_5->type == VAR_2, "expected entry #%d to be %x, was %x\n", VAR_4, VAR_2, VAR_5->type);
    FUNC_1(VAR_5->flags == VAR_0, "expected entry #%d to be available, was %d\n", VAR_4, VAR_5->flags);
    FUNC_1(VAR_5->dwattr == VAR_3, "expected entry #%d to be 0x%x, was 0x%x\n", VAR_4, VAR_3, VAR_5->dwattr);
}
