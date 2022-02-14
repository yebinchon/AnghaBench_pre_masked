
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
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int,char*,size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_2(PATTRINFO VAR_2, TAG VAR_3)
{
    DWORD VAR_4 = FUNC_0(VAR_3);
    PATTRINFO VAR_5;

    if (VAR_4 == ~0)
        return;

    VAR_5 = &VAR_2[VAR_4];
    FUNC_1(VAR_5->type == VAR_1, "expected entry #%d to be TAG_NULL, was %x\n", VAR_4, VAR_5->type);
    FUNC_1(VAR_5->flags == VAR_0, "expected entry #%d to be failed, was %d\n", VAR_4, VAR_5->flags);
    FUNC_1(VAR_5->qwattr == 0, "expected entry #%d to be 0, was 0x%I64x\n", VAR_4, VAR_5->qwattr);
}
