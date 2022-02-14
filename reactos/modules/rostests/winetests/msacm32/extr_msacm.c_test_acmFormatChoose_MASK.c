
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int afc ;
typedef int WAVEFORMATEX ;
struct TYPE_3__ {int cbStruct; int * pwfx; int member_0; } ;
typedef scalar_t__ MMRESULT ;
typedef int DWORD ;
typedef TYPE_1__ ACMFORMATCHOOSEW ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    ACMFORMATCHOOSEW VAR_3 = {0};
    WAVEFORMATEX *VAR_4;
    DWORD VAR_5;
    MMRESULT VAR_6;

    FUNC_4(((void*)0), VAR_0, &VAR_5);
    VAR_4 = FUNC_1(FUNC_0(), VAR_1, VAR_5);

    VAR_3.cbStruct = sizeof(VAR_3);
    VAR_3.pwfx = VAR_4;


    VAR_3.cbStruct = sizeof(VAR_3)-1;
    VAR_6 = FUNC_3(&VAR_3);
    FUNC_5(VAR_6 == VAR_2, "expected 0xb, got 0x%x\n", VAR_6);
    VAR_3.cbStruct = sizeof(VAR_3);

    VAR_3.pwfx = ((void*)0);
    VAR_6 = FUNC_3(&VAR_3);
    FUNC_5(VAR_6 == VAR_2, "expected 0xb, got 0x%x\n", VAR_6);
    VAR_3.pwfx = VAR_4;

    FUNC_2(FUNC_0(), 0, VAR_4);
}
