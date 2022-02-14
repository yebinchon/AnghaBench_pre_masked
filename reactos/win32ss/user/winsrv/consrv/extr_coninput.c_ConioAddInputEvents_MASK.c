
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {int InputBuffer; } ;
typedef scalar_t__* PULONG ;
typedef int PINPUT_RECORD ;
typedef TYPE_1__* PCONSRV_CONSOLE ;
typedef int PCONSOLE ;
typedef scalar_t__ NTSTATUS ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int *,int ,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static NTSTATUS
FUNC_3(PCONSRV_CONSOLE VAR_1,
                    PINPUT_RECORD VAR_2,
                    ULONG VAR_3,
                    PULONG VAR_4,
                    BOOLEAN VAR_5)
{
    NTSTATUS VAR_6 = VAR_0;

    if (VAR_4) *VAR_4 = 0;

    VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_3);
    if (VAR_3 == 0) return VAR_0;







    VAR_6 = FUNC_0((PCONSOLE)VAR_1,
                                     &VAR_1->InputBuffer,
                                     VAR_5,
                                     VAR_2,
                                     VAR_3,
                                     VAR_4);


    if (VAR_6 == VAR_0) FUNC_1(VAR_1);

    return VAR_6;
}
