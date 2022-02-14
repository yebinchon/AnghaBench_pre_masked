
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ flags; scalar_t__ qwattr; } ;
typedef int TAG ;
typedef TYPE_1__* PATTRINFO ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int,char*,size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_2(PATTRINFO VAR_1, TAG VAR_2)
{
    DWORD VAR_3 = FUNC_0(VAR_2);
    PATTRINFO VAR_4;

    if (VAR_3 == ~0)
        return;

    VAR_4 = &VAR_1[VAR_3];
    FUNC_1(VAR_4->type == VAR_0, "expected entry #%d to be TAG_NULL, was %x\n", VAR_3, VAR_4->type);
    FUNC_1(VAR_4->flags == 0, "expected entry #%d to be 0, was %d\n", VAR_3, VAR_4->flags);
    FUNC_1(VAR_4->qwattr == 0, "expected entry #%d to be 0, was 0x%I64x\n", VAR_3, VAR_4->qwattr);
}
