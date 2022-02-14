
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ flags; int const* lpattr; int type; } ;
typedef int TAG ;
typedef TYPE_1__* PATTRINFO ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int,char*,size_t,scalar_t__,...) ;

__attribute__((used)) static void FUNC_4(PATTRINFO VAR_1, TAG VAR_2, const WCHAR* VAR_3)
{
    DWORD VAR_4 = FUNC_0(VAR_2);
    PATTRINFO VAR_5;

    if (VAR_4 == ~0)
        return;

    VAR_5 = &VAR_1[VAR_4];
    FUNC_3(VAR_5->type == VAR_2, "expected entry #%d to be %x, was %x\n", VAR_4, VAR_2, VAR_5->type);
    FUNC_3(VAR_5->flags == VAR_0, "expected entry #%d to be available, was %d\n", VAR_4, VAR_5->flags);
    FUNC_3(VAR_5->lpattr && FUNC_1(VAR_5->lpattr, VAR_3) == 0, "expected entry #%d to be %s, was %s\n", VAR_4, FUNC_2(VAR_3), FUNC_2(VAR_5->lpattr));
}
