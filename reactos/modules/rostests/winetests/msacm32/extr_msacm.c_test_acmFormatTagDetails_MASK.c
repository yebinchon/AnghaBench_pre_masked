
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int aftd ;
struct TYPE_3__ {int cbStruct; int cbFormatSize; int dwFormatTag; int member_0; } ;
typedef int MPEGLAYER3WAVEFORMAT ;
typedef scalar_t__ MMRESULT ;
typedef TYPE_1__ ACMFORMATTAGDETAILSW ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2(void)
{
    ACMFORMATTAGDETAILSW VAR_3 = {0};
    MMRESULT VAR_4;

    VAR_3.cbStruct = sizeof(VAR_3);
    VAR_3.dwFormatTag = VAR_2;
    VAR_4 = FUNC_0(((void*)0), &VAR_3, VAR_0);
    if (VAR_4 == VAR_1)
        FUNC_1(VAR_3.cbFormatSize == sizeof(MPEGLAYER3WAVEFORMAT), "got %d\n", VAR_3.cbFormatSize);
}
